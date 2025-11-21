# The following variables contains the files used by the different stages of the build process.
set(adc_window_sleepwalking_default_default_XC32_FILE_TYPE_assemble)
set_source_files_properties(${adc_window_sleepwalking_default_default_XC32_FILE_TYPE_assemble} PROPERTIES LANGUAGE ASM)

# For assembly files, add "." to the include path for each file so that .include with a relative path works
foreach(source_file ${adc_window_sleepwalking_default_default_XC32_FILE_TYPE_assemble})
        set_source_files_properties(${source_file} PROPERTIES INCLUDE_DIRECTORIES "$<PATH:NORMAL_PATH,$<PATH:REMOVE_FILENAME,${source_file}>>")
endforeach()

set(adc_window_sleepwalking_default_default_XC32_FILE_TYPE_assembleWithPreprocess)
set_source_files_properties(${adc_window_sleepwalking_default_default_XC32_FILE_TYPE_assembleWithPreprocess} PROPERTIES LANGUAGE ASM)

# For assembly files, add "." to the include path for each file so that .include with a relative path works
foreach(source_file ${adc_window_sleepwalking_default_default_XC32_FILE_TYPE_assembleWithPreprocess})
        set_source_files_properties(${source_file} PROPERTIES INCLUDE_DIRECTORIES "$<PATH:NORMAL_PATH,$<PATH:REMOVE_FILENAME,${source_file}>>")
endforeach()

set(adc_window_sleepwalking_default_default_XC32_FILE_TYPE_compile
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/exceptions.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/initialization.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/interrupts.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/libc_syscalls.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/peripheral/adc/plib_adc0.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/peripheral/clock/plib_clock.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/peripheral/evsys/plib_evsys.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/peripheral/nvic/plib_nvic.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/peripheral/pm/plib_pm.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/peripheral/port/plib_port.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/peripheral/rtc/plib_rtc_timer.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/peripheral/sercom/usart/plib_sercom1_usart.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/peripheral/systick/plib_systick.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/startup_xc32.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/stdio/xc32_monitor.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/main.c")
set_source_files_properties(${adc_window_sleepwalking_default_default_XC32_FILE_TYPE_compile} PROPERTIES LANGUAGE C)
set(adc_window_sleepwalking_default_default_XC32_FILE_TYPE_compile_cpp)
set_source_files_properties(${adc_window_sleepwalking_default_default_XC32_FILE_TYPE_compile_cpp} PROPERTIES LANGUAGE CXX)
set(adc_window_sleepwalking_default_default_XC32_FILE_TYPE_link)

# The linker script used for the build.
set(adc_window_sleepwalking_default_LINKER_SCRIPT "${CMAKE_CURRENT_SOURCE_DIR}/../../../src/config/default/PIC32CM6408PL10048.ld")
set(adc_window_sleepwalking_default_image_name "default.elf")
set(adc_window_sleepwalking_default_image_base_name "default")

# The output directory of the final image.
set(adc_window_sleepwalking_default_output_dir "${CMAKE_CURRENT_SOURCE_DIR}/../../../out/adc_window_sleepwalking")

# The full path to the final image.
set(adc_window_sleepwalking_default_full_path_to_image ${adc_window_sleepwalking_default_output_dir}/${adc_window_sleepwalking_default_image_name})
