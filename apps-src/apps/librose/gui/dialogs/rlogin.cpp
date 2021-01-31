/* $Id: title_screen.cpp 48740 2011-03-05 10:01:34Z mordante $ */
/*
   Copyright (C) 2008 - 2011 by Mark de Wever <koraq@xs4all.nl>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

#define GETTEXT_DOMAIN "rose-lib"

#include "gui/dialogs/rlogin.hpp"

#include "preferences.hpp"
#include "gettext.hpp"
#include "gui/widgets/button.hpp"
#include "gui/widgets/panel.hpp"
#include "gui/widgets/label.hpp"
#include "gui/widgets/settings.hpp"
#include "gui/widgets/toggle_button.hpp"
#include "gui/widgets/window.hpp"
#include "gui/widgets/text_box.hpp"
#include "gui/dialogs/message.hpp"
#include "gui/dialogs/edit_box.hpp"
#include "gui/dialogs/menu.hpp"
#include "help.hpp"
#include "filesystem.hpp"
#include <time.h>
#include "wml_exception.hpp"
#include "formula_string_utils.hpp"
#include "version.hpp"

#include <boost/bind.hpp>


namespace gui2 {

void trlogin::tslot::rlogin_click_login(const std::string& username, const std::string& password)
{
	rlogin->get_window()->set_retval(twindow::OK);
}

REGISTER_DIALOG(rose, rlogin)

trlogin::trlogin(tslot& slot, const std::string& title, const std::string& login)
	: slot_(slot)
	, title_(title)
	, login_label_(login)
	, min_username_chars_(1)
	, max_username_chars_(16)
	, min_password_chars_(1)
	, max_password_chars_(16)
	, title_widget_(nullptr)
	, login_widget_(nullptr)
{
	slot_.rlogin = this;
	set_timer_interval(10000);
}

void trlogin::pre_show()
{
	window_->set_escape_disabled(true);
	// window_->set_label("misc/white-background.png");

	title_widget_ = find_widget<tlabel>(window_, "title", false, true);
	title_widget_->set_label(title_);

	// username
	username_.reset(new ttext_box2(*window_, *find_widget<tcontrol>(window_, "username", false, true), null_str, "misc/device.png"));
	username_->text_box().set_maximum_chars(max_username_chars_);
	username_->text_box().set_placeholder(_("Username"));
	username_->set_did_text_changed(boost::bind(&trlogin::did_text_box_changed, this, _1));

	password_.reset(new ttext_box2(*window_, *find_widget<tcontrol>(window_, "password", false, true), null_str, "misc/password.png", true, "misc/eye.png", false));
	connect_signal_mouse_left_click(
		password_->button()
		, boost::bind(
			&trlogin::click_password
			, this));

	// password
	password_->text_box().set_maximum_chars(max_password_chars_);
	password_->text_box().set_placeholder(_("Password"));
	password_->set_did_text_changed(boost::bind(&trlogin::did_text_box_changed, this, _1));

	login_widget_ = find_widget<tbutton>(window_, "login", false, true);
	login_widget_->set_label(login_label_);
	login_widget_->set_canvas_variable("border", variant("login2-border"));
	login_widget_->set_active(slot_.rlogin_can_login(username_->text_box().label(), password_->text_box().label()));
	connect_signal_mouse_left_click(
		*login_widget_
		, boost::bind(
			&trlogin::click_login
			, this
			, boost::ref(*window_)));
}

void trlogin::post_show()
{
	slot_.rlogin_username = username_->text_box().label();
	slot_.rlogin_password = password_->text_box().label();
	slot_.rlogin = nullptr;
}

void trlogin::did_text_box_changed(ttext_box& widget)
{
	const std::string& username = username_->text_box().label();
	const std::string& password = password_->text_box().label();

	slot_.rlogin_did_text_box_changed(username, password);
	login_widget_->set_active(slot_.rlogin_can_login(username, password));
}

void trlogin::click_password()
{
	password_->text_box().set_cipher(!password_->text_box().cipher());
}

void trlogin::click_login(twindow& window)
{
	const std::string& username = username_->text_box().label();
	const std::string& password = password_->text_box().label();

	VALIDATE(slot_.rlogin_can_login(username, password), null_str);
	slot_.rlogin_click_login(username, password);
}

} // namespace gui2

