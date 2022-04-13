add_executable(jsondemo jsondemo.cpp)

find_package(OpenCV REQUIRED)

set_target_properties(jsondemo PROPERTIES CXX_STANDARD 17)

file(GLOB_RECURSE srcs *.cpp *.h)

target_include_directories(jsondemo
PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:$<INSTALL_PREFIX>/include>
    ${OpenCV_SOURCE_DIR}/include
)

target_link_libraries(jsondemo
PRIVATE
    ${OpenCV_SOURCE_DIR}/x64/vc15/lib/opencv_world420.lib
    nlohmann_json::nlohmann_json
)