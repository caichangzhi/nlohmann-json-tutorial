include(FetchContent)

FetchContent_Declare(json
    GIT_REPOSITORY https://github.com/ArthurSonzogni/nlohmann_json_cmake_fetchcontent
    GIT_TAG v3.9.1
    GIT_SHALLOW ON
)

message(STATUS "Fetch json")
FetchContent_MakeAvailable(json)
message(STATUS "Fetch json - done")
