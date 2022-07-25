add_executable(callbackdemo callbackdemo.cpp)

set_target_properties(callbackdemo PROPERTIES CXX_STANDARD 17)

file(GLOB_RECURSE srcs *.cpp *.h)

target_include_directories(callbackdemo
PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:$<INSTALL_PREFIX>/include>
    ${OpenCV_SOURCE_DIR}/include
)

target_link_libraries(callbackdemo
PRIVATE
    OpenMP::OpenMP_CXX
    ${OpenCV_SOURCE_DIR}/x64/vc15/lib/opencv_world420.lib
    nlohmann_json::nlohmann_json
)