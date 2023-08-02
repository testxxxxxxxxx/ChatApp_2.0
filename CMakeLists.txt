cmake_minimum_required(VERSION 2.8.11)

project(test_0)

file(GLOB MAIN_APP_SRC

    "*.hpp"
    "*.cpp"
    "Scripts/*.cpp"
    "Config/*.cpp"

)

include(FindPkgConfig)
pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)

link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})

set(CURLIBRARY "-lcurl")
find_package(CURL REQUIRED)

include_directories(${CURL_INCLUDE_DIRS})

add_executable(test_0 ${MAIN_APP_SRC})

target_include_directories(test_0 PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(test_0 PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})
target_link_libraries(test_0 PRIVATE ${CURL_LIBRARIES})

install(TARGETS test_0 DESTINATION bin)
install(FILES ${MAIN_APP_SRC} DESTINATION src)