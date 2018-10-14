set(GTEST_SHUFFLE 1)

include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

add_executable(
    cpp-test
    main.cpp
    AstarTest.cpp
    MapTest.cpp
    ObstacleTest.cpp
    OutputTest.cpp
    
    ../app/Astar.cpp
    ../app/Map.cpp
    ../app/Obstacle.cpp
    ../app/Output.cpp
)

target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include 
                                           ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(cpp-test PUBLIC gtest ${Boost_LIBRARIES})
