SUB_PATH := external/chromium/third_party/abseil-cpp/absl

LOCAL_SRC_FILES += \
	$(SUB_PATH)/base/internal/cycleclock.cc \
	$(SUB_PATH)/base/internal/low_level_alloc.cc \
	$(SUB_PATH)/base/internal/raw_logging.cc \
	$(SUB_PATH)/base/internal/spinlock.cc \
	$(SUB_PATH)/base/internal/spinlock_wait.cc \
	$(SUB_PATH)/base/internal/sysinfo.cc \
	$(SUB_PATH)/base/internal/thread_identity.cc \
	$(SUB_PATH)/base/internal/throw_delegate.cc \
	$(SUB_PATH)/base/internal/unscaledcycleclock.cc \
	$(SUB_PATH)/container/internal/hashtablez_sampler.cc \
	$(SUB_PATH)/container/internal/hashtablez_sampler_force_weak_definition.cc \
	$(SUB_PATH)/container/internal/raw_hash_set.cc \
	$(SUB_PATH)/debugging/internal/address_is_readable.cc \
	$(SUB_PATH)/debugging/internal/demangle.cc \
	$(SUB_PATH)/debugging/internal/elf_mem_image.cc \
	$(SUB_PATH)/debugging/internal/examine_stack.cc \
	$(SUB_PATH)/debugging/internal/vdso_support.cc \
	$(SUB_PATH)/debugging/failure_signal_handler.cc \
	$(SUB_PATH)/debugging/leak_check.cc \
	$(SUB_PATH)/debugging/leak_check_disable.cc \
	$(SUB_PATH)/debugging/stacktrace.cc \
	$(SUB_PATH)/debugging/symbolize.cc \
	$(SUB_PATH)/flags/internal/commandlineflag.cc \
	$(SUB_PATH)/flags/internal/flag.cc \
	$(SUB_PATH)/flags/internal/private_handle_accessor.cc \
	$(SUB_PATH)/flags/internal/program_name.cc \
	$(SUB_PATH)/flags/internal/usage.cc \
	$(SUB_PATH)/flags/commandlineflag.cc \
	$(SUB_PATH)/flags/flag.cc \
	$(SUB_PATH)/flags/marshalling.cc \
	$(SUB_PATH)/flags/parse.cc \
	$(SUB_PATH)/flags/reflection.cc \
	$(SUB_PATH)/flags/usage.cc \
	$(SUB_PATH)/flags/usage_config.cc \
    $(SUB_PATH)/hash/internal/city.cc \
    $(SUB_PATH)/hash/internal/hash.cc \
	$(SUB_PATH)/hash/internal/wyhash.cc \
	$(SUB_PATH)/numeric/int128.cc \
    $(SUB_PATH)/random/internal/chi_square.cc \
    $(SUB_PATH)/random/internal/distribution_test_util.cc \
    $(SUB_PATH)/random/internal/pool_urbg.cc \
    $(SUB_PATH)/random/internal/randen.cc \
    $(SUB_PATH)/random/internal/randen_detect.cc \
    $(SUB_PATH)/random/internal/randen_hwaes.cc \
    $(SUB_PATH)/random/internal/randen_round_keys.cc \
    $(SUB_PATH)/random/internal/randen_slow.cc \
    $(SUB_PATH)/random/internal/seed_material.cc \
	$(SUB_PATH)/random/discrete_distribution.cc \
	$(SUB_PATH)/random/gaussian_distribution.cc \
	$(SUB_PATH)/random/seed_gen_exception.cc \
	$(SUB_PATH)/random/seed_sequences.cc \
	$(SUB_PATH)/status/status.cc \
	$(SUB_PATH)/status/status_payload_printer.cc \
	$(SUB_PATH)/status/statusor.cc \
	$(SUB_PATH)/strings/internal/str_format/arg.cc \
	$(SUB_PATH)/strings/internal/str_format/bind.cc \
	$(SUB_PATH)/strings/internal/str_format/extension.cc \
	$(SUB_PATH)/strings/internal/str_format/float_conversion.cc \
	$(SUB_PATH)/strings/internal/str_format/output.cc \
	$(SUB_PATH)/strings/internal/str_format/parser.cc \
	$(SUB_PATH)/strings/internal/charconv_bigint.cc \
	$(SUB_PATH)/strings/internal/charconv_parse.cc \
	$(SUB_PATH)/strings/internal/escaping.cc \
	$(SUB_PATH)/strings/internal/memutil.cc \
	$(SUB_PATH)/strings/internal/ostringstream.cc \
	$(SUB_PATH)/strings/internal/utf8.cc \
	$(SUB_PATH)/strings/ascii.cc \
	$(SUB_PATH)/strings/charconv.cc \
	$(SUB_PATH)/strings/cord.cc \
	$(SUB_PATH)/strings/escaping.cc \
	$(SUB_PATH)/strings/match.cc \
	$(SUB_PATH)/strings/numbers.cc \
	$(SUB_PATH)/strings/str_cat.cc \
	$(SUB_PATH)/strings/str_replace.cc \
	$(SUB_PATH)/strings/str_split.cc \
	$(SUB_PATH)/strings/string_view.cc \
	$(SUB_PATH)/strings/substitute.cc \
	$(SUB_PATH)/synchronization/internal/create_thread_identity.cc \
	$(SUB_PATH)/synchronization/internal/graphcycles.cc \
	$(SUB_PATH)/synchronization/internal/per_thread_sem.cc \
	$(SUB_PATH)/synchronization/internal/waiter.cc \
	$(SUB_PATH)/synchronization/barrier.cc \
	$(SUB_PATH)/synchronization/blocking_counter.cc \
	$(SUB_PATH)/synchronization/mutex.cc \
	$(SUB_PATH)/synchronization/notification.cc \
	$(SUB_PATH)/time/internal/cctz/src/civil_time_detail.cc \
	$(SUB_PATH)/time/internal/cctz/src/time_zone_fixed.cc \
	$(SUB_PATH)/time/internal/cctz/src/time_zone_format.cc \
	$(SUB_PATH)/time/internal/cctz/src/time_zone_if.cc \
	$(SUB_PATH)/time/internal/cctz/src/time_zone_impl.cc \
	$(SUB_PATH)/time/internal/cctz/src/time_zone_info.cc \
	$(SUB_PATH)/time/internal/cctz/src/time_zone_libc.cc \
	$(SUB_PATH)/time/internal/cctz/src/time_zone_lookup.cc \
	$(SUB_PATH)/time/internal/cctz/src/time_zone_posix.cc \
	$(SUB_PATH)/time/internal/cctz/src/zone_info_source.cc \
	$(SUB_PATH)/time/civil_time.cc \
	$(SUB_PATH)/time/clock.cc \
	$(SUB_PATH)/time/duration.cc \
	$(SUB_PATH)/time/format.cc \
	$(SUB_PATH)/time/time.cc \
    $(SUB_PATH)/types/bad_any_cast.cc \
    $(SUB_PATH)/types/bad_optional_access.cc \
    $(SUB_PATH)/types/bad_variant_access.cc