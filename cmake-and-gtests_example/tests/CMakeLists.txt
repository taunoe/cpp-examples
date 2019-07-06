### tests folder ###

# Add gtest sources folder. Provides gtest , gtest_main.
add_subdirectory(/usr/src/gtest
                 ${PROJECT_BINARY_DIR}/gtest)

include(CTest) # Include testing cmake package.

add_executable(test_mina test_mina.cpp)
target_link_libraries(test_mina 
                      mina
                      gtest gtest_main)

add_test(test_mina tests/test_mina)
