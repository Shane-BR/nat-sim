cmake_minimum_required(VERSION 3.30)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
set(C_STANDARD C99)
set(CMAKE_C_COMPILER clang)

project(natsim)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

find_package(glfw3 CONFIG REQUIRED)
find_package(cglm CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)

file(GLOB SOURCES CMAKE_CONFIGURE_DEPENDS src/*.c)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/includes/nat-sim)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/includes)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw cglm::cglm glad::glad)
