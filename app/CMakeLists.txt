add_executable(shell-app main.cpp Astar.cpp Map.cpp Obstacle.cpp Output.cpp)
target_link_libraries(shell-app ${Boost_LIBRARIES})
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${Boost_INCLUDE_DIRS}
)