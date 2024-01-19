cmake_minimum_required(VERSION 3.6.0)
project(CalculationCanvas VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 14)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)
pkg_check_modules(GTK REQUIRED gtk+-3.0)
pkg_check_modules(HARFBUZZ REQUIRED harfbuzz)

include_directories(${GTKMM_INCLUDE_DIRS} ${GTK_INCLUDE_DIRS} ${HARFBUZZ_INCLUDE_DIRS})

link_directories(${GTKMM_LIBRARY_DIRS} ${GTK_LIBRARY_DIRS} ${HARFBUZZ_LIBRARY_DIRS})

set(LIBRARIES_TO_LINK
    ${GTKMM_LIBRARIES}
    ${GTK_LIBRARIES}
    ${HARFBUZZ_LIBRARIES}
)

add_executable(CalculationCanvas main.cpp calculation_canvas.cpp)

target_link_libraries(CalculationCanvas PRIVATE ${LIBRARIES_TO_LINK})

set(CMAKE_OSX_ARCHITECTURES "arm64")
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)