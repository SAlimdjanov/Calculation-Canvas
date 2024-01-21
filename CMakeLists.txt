cmake_minimum_required(VERSION 3.14.0)
project(CalculationCanvas VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 14)

find_package(wxWidgets COMPONENTS core base adv REQUIRED)
include(${wxWidgets_USE_FILE})

set(SRCS main.cpp calculation_canvas.cpp)

if (WIN32)
    set(SRCS ${SRCS} wxWidgetTest.rc main.cpp)
endif(WIN32)

add_executable(${PROJECT_NAME} WIN32 ${SRCS})
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})

set(CMAKE_OSX_ARCHITECTURES "arm64")
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)