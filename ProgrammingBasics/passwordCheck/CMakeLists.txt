cmake_minimum_required(VERSION 3.11.0)
project(passwordCheck)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        main
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg

enable_testing()

add_executable(${PROJECT_NAME} main.cpp validation.cpp)
add_executable(${PROJECT_NAME}-ut test.cpp validation.cpp)
add_executable(${PROJECT_NAME}-bonus-ut testBonus.cpp validation.cpp)

target_link_libraries(${PROJECT_NAME}-ut gtest_main)
target_link_libraries(${PROJECT_NAME}-bonus-ut gtest_main)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}-ut)
