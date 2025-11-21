# cmake files support debug production
include("${CMAKE_CURRENT_LIST_DIR}/rule.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/file.cmake")

set(adc_dmac_sleepwalking_default_library_list )

# Handle files with suffix s, for group default-XC32
if(adc_dmac_sleepwalking_default_default_XC32_FILE_TYPE_assemble)
add_library(adc_dmac_sleepwalking_default_default_XC32_assemble OBJECT ${adc_dmac_sleepwalking_default_default_XC32_FILE_TYPE_assemble})
    adc_dmac_sleepwalking_default_default_XC32_assemble_rule(adc_dmac_sleepwalking_default_default_XC32_assemble)
    list(APPEND adc_dmac_sleepwalking_default_library_list "$<TARGET_OBJECTS:adc_dmac_sleepwalking_default_default_XC32_assemble>")
endif()

# Handle files with suffix S, for group default-XC32
if(adc_dmac_sleepwalking_default_default_XC32_FILE_TYPE_assembleWithPreprocess)
add_library(adc_dmac_sleepwalking_default_default_XC32_assembleWithPreprocess OBJECT ${adc_dmac_sleepwalking_default_default_XC32_FILE_TYPE_assembleWithPreprocess})
    adc_dmac_sleepwalking_default_default_XC32_assembleWithPreprocess_rule(adc_dmac_sleepwalking_default_default_XC32_assembleWithPreprocess)
    list(APPEND adc_dmac_sleepwalking_default_library_list "$<TARGET_OBJECTS:adc_dmac_sleepwalking_default_default_XC32_assembleWithPreprocess>")
endif()

# Handle files with suffix [cC], for group default-XC32
if(adc_dmac_sleepwalking_default_default_XC32_FILE_TYPE_compile)
add_library(adc_dmac_sleepwalking_default_default_XC32_compile OBJECT ${adc_dmac_sleepwalking_default_default_XC32_FILE_TYPE_compile})
    adc_dmac_sleepwalking_default_default_XC32_compile_rule(adc_dmac_sleepwalking_default_default_XC32_compile)
    list(APPEND adc_dmac_sleepwalking_default_library_list "$<TARGET_OBJECTS:adc_dmac_sleepwalking_default_default_XC32_compile>")
endif()

# Handle files with suffix cpp, for group default-XC32
if(adc_dmac_sleepwalking_default_default_XC32_FILE_TYPE_compile_cpp)
add_library(adc_dmac_sleepwalking_default_default_XC32_compile_cpp OBJECT ${adc_dmac_sleepwalking_default_default_XC32_FILE_TYPE_compile_cpp})
    adc_dmac_sleepwalking_default_default_XC32_compile_cpp_rule(adc_dmac_sleepwalking_default_default_XC32_compile_cpp)
    list(APPEND adc_dmac_sleepwalking_default_library_list "$<TARGET_OBJECTS:adc_dmac_sleepwalking_default_default_XC32_compile_cpp>")
endif()

add_executable(adc_dmac_sleepwalking_default_image_xVzwFORf ${adc_dmac_sleepwalking_default_library_list})

set_target_properties(adc_dmac_sleepwalking_default_image_xVzwFORf PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${adc_dmac_sleepwalking_default_output_dir})
set_target_properties(adc_dmac_sleepwalking_default_image_xVzwFORf PROPERTIES OUTPUT_NAME "default")
set_target_properties(adc_dmac_sleepwalking_default_image_xVzwFORf PROPERTIES SUFFIX ".elf")

target_link_libraries(adc_dmac_sleepwalking_default_image_xVzwFORf PRIVATE ${adc_dmac_sleepwalking_default_default_XC32_FILE_TYPE_link})


# Add the link options from the rule file.
adc_dmac_sleepwalking_default_link_rule(adc_dmac_sleepwalking_default_image_xVzwFORf)

# Add bin2hex target for converting built file to a .hex file.
string(REGEX REPLACE [.]elf$ .hex adc_dmac_sleepwalking_default_image_name_hex ${adc_dmac_sleepwalking_default_image_name})
add_custom_target(adc_dmac_sleepwalking_default_Bin2Hex ALL
    COMMAND ${MP_BIN2HEX} \"${adc_dmac_sleepwalking_default_output_dir}/${adc_dmac_sleepwalking_default_image_name}\"
    BYPRODUCTS ${adc_dmac_sleepwalking_default_output_dir}/${adc_dmac_sleepwalking_default_image_name_hex}
    COMMENT "Convert built file to .hex")
add_dependencies(adc_dmac_sleepwalking_default_Bin2Hex adc_dmac_sleepwalking_default_image_xVzwFORf)




# The following code exposes targets created in this project so they
# may be consumed by other projects

if(enable_dependent_codeadc_dmac_sleepwalking_default_xVzwFORf)
    add_custom_command(
        OUTPUT ${adc_dmac_sleepwalking_default_output_dir}/${sourceFileNameadc_dmac_sleepwalking_default_xVzwFORf}.c
        COMMAND ${MP_BIN2HEX} --image ${adc_dmac_sleepwalking_default_full_path_to_image} --image-generated-c ${sourceFileNameadc_dmac_sleepwalking_default_xVzwFORf}.c --image-generated-h ${sourceFileNameadc_dmac_sleepwalking_default_xVzwFORf}.h --image-copy-mode ${modeadc_dmac_sleepwalking_default_xVzwFORf} --image-offset ${addressadc_dmac_sleepwalking_default_xVzwFORf}
        WORKING_DIRECTORY ${adc_dmac_sleepwalking_default_output_dir}
        DEPENDS adc_dmac_sleepwalking_default_image_xVzwFORf)
    add_custom_target(
        adc_dmac_sleepwalking_default_processed_fileimage_xVzwFORf 
        DEPENDS ${adc_dmac_sleepwalking_default_output_dir}/${sourceFileNameadc_dmac_sleepwalking_default_xVzwFORf}.c
        )
    add_library(
        adc_dmac_sleepwalking_default_processed_file_objectimage_xVzwFORf
        OBJECT
        EXCLUDE_FROM_ALL
        ${adc_dmac_sleepwalking_default_output_dir}/${sourceFileNameadc_dmac_sleepwalking_default_xVzwFORf}.c)
    add_dependencies(adc_dmac_sleepwalking_default_processed_file_objectimage_xVzwFORf adc_dmac_sleepwalking_default_processed_fileimage_xVzwFORf)
    add_library(
        adc_dmac_sleepwalking_default_dependent_image_xVzwFORf
        INTERFACE
        EXCLUDE_FROM_ALL)
    target_link_libraries(adc_dmac_sleepwalking_default_dependent_image_xVzwFORf
    INTERFACE    
 adc_dmac_sleepwalking_default_processed_file_objectimage_xVzwFORf)
endif()


