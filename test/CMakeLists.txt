if(BUILD_TEST)
    set(unit_tests
            test_fibonacci)

    foreach(unit_test ${unit_tests})
        add_executable("${unit_test}" "${unit_test}.c")
        target_link_libraries("${unit_test}" unity)
        add_test(NAME "${unit_test}"
                COMMAND "./${unit_test}")
        add_coverage("${unit_test}")
    endforeach()
endif()