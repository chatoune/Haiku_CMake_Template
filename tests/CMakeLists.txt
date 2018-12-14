add_subdirectory(/Storage/github/googletest/googletest
		${PROJECT_BINARY_DIR}/gtest)
include(CTest)

add_executable(test_template test_template.cpp)

target_link_libraries(test_template dynamic static gtest gtest_main)

add_test(test_template tests/test_template)
