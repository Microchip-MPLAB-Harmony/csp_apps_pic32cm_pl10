# cmake files support debug production
include("${CMAKE_CURRENT_LIST_DIR}/rule.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/file.cmake")

set(adc_sample_default_library_list )

# Handle files with suffix s, for group default-XC32
if(adc_sample_default_default_XC32_FILE_TYPE_assemble)
add_library(adc_sample_default_default_XC32_assemble OBJECT ${adc_sample_default_default_XC32_FILE_TYPE_assemble})
    adc_sample_default_default_XC32_assemble_rule(adc_sample_default_default_XC32_assemble)
    list(APPEND adc_sample_default_library_list "$<TARGET_OBJECTS:adc_sample_default_default_XC32_assemble>")
endif()

# Handle files with suffix S, for group default-XC32
if(adc_sample_default_default_XC32_FILE_TYPE_assembleWithPreprocess)
add_library(adc_sample_default_default_XC32_assembleWithPreprocess OBJECT ${adc_sample_default_default_XC32_FILE_TYPE_assembleWithPreprocess})
    adc_sample_default_default_XC32_assembleWithPreprocess_rule(adc_sample_default_default_XC32_assembleWithPreprocess)
    list(APPEND adc_sample_default_library_list "$<TARGET_OBJECTS:adc_sample_default_default_XC32_assembleWithPreprocess>")
endif()

# Handle files with suffix [cC], for group default-XC32
if(adc_sample_default_default_XC32_FILE_TYPE_compile)
add_library(adc_sample_default_default_XC32_compile OBJECT ${adc_sample_default_default_XC32_FILE_TYPE_compile})
    adc_sample_default_default_XC32_compile_rule(adc_sample_default_default_XC32_compile)
    list(APPEND adc_sample_default_library_list "$<TARGET_OBJECTS:adc_sample_default_default_XC32_compile>")
endif()

# Handle files with suffix cpp, for group default-XC32
if(adc_sample_default_default_XC32_FILE_TYPE_compile_cpp)
add_library(adc_sample_default_default_XC32_compile_cpp OBJECT ${adc_sample_default_default_XC32_FILE_TYPE_compile_cpp})
    adc_sample_default_default_XC32_compile_cpp_rule(adc_sample_default_default_XC32_compile_cpp)
    list(APPEND adc_sample_default_library_list "$<TARGET_OBJECTS:adc_sample_default_default_XC32_compile_cpp>")
endif()

add_executable(adc_sample_default_image_sM__Mvvm ${adc_sample_default_library_list})

set_target_properties(adc_sample_default_image_sM__Mvvm PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${adc_sample_default_output_dir})
set_target_properties(adc_sample_default_image_sM__Mvvm PROPERTIES OUTPUT_NAME "default")
set_target_properties(adc_sample_default_image_sM__Mvvm PROPERTIES SUFFIX ".elf")

target_link_libraries(adc_sample_default_image_sM__Mvvm PRIVATE ${adc_sample_default_default_XC32_FILE_TYPE_link})


# Add the link options from the rule file.
adc_sample_default_link_rule(adc_sample_default_image_sM__Mvvm)

# Add bin2hex target for converting built file to a .hex file.
string(REGEX REPLACE [.]elf$ .hex adc_sample_default_image_name_hex ${adc_sample_default_image_name})
add_custom_target(adc_sample_default_Bin2Hex ALL
    COMMAND ${MP_BIN2HEX} \"${adc_sample_default_output_dir}/${adc_sample_default_image_name}\"
    BYPRODUCTS ${adc_sample_default_output_dir}/${adc_sample_default_image_name_hex}
    COMMENT "Convert built file to .hex")
add_dependencies(adc_sample_default_Bin2Hex adc_sample_default_image_sM__Mvvm)




# The following code exposes targets created in this project so they
# may be consumed by other projects

if(enable_dependent_codeadc_sample_default_sM__Mvvm)
    add_custom_command(
        OUTPUT ${adc_sample_default_output_dir}/${sourceFileNameadc_sample_default_sM__Mvvm}.c
        COMMAND ${MP_BIN2HEX} --image ${adc_sample_default_full_path_to_image} --image-generated-c ${sourceFileNameadc_sample_default_sM__Mvvm}.c --image-generated-h ${sourceFileNameadc_sample_default_sM__Mvvm}.h --image-copy-mode ${modeadc_sample_default_sM__Mvvm} --image-offset ${addressadc_sample_default_sM__Mvvm}
        WORKING_DIRECTORY ${adc_sample_default_output_dir}
        DEPENDS adc_sample_default_image_sM__Mvvm)
    add_custom_target(
        adc_sample_default_processed_fileimage_sM__Mvvm 
        DEPENDS ${adc_sample_default_output_dir}/${sourceFileNameadc_sample_default_sM__Mvvm}.c
        )
    add_library(
        adc_sample_default_processed_file_objectimage_sM__Mvvm
        OBJECT
        EXCLUDE_FROM_ALL
        ${adc_sample_default_output_dir}/${sourceFileNameadc_sample_default_sM__Mvvm}.c)
    add_dependencies(adc_sample_default_processed_file_objectimage_sM__Mvvm adc_sample_default_processed_fileimage_sM__Mvvm)
    add_library(
        adc_sample_default_dependent_image_sM__Mvvm
        INTERFACE
        EXCLUDE_FROM_ALL)
    target_link_libraries(adc_sample_default_dependent_image_sM__Mvvm
    INTERFACE    
 adc_sample_default_processed_file_objectimage_sM__Mvvm)
endif()


