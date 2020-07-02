project(rapidjson)
file(GLOB HEADERS
    "*.h"
    "error/*.h"
    "internal/*.h"
    "msinttypes/*.h")
file(GLOB SOURCES "*.cc")
add_library(rapidjson ${HEADERS} ${SOURCES})
target_include_directories(rapidjson PUBLIC "..")

