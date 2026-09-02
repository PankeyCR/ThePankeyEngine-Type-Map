cmake_minimum_required(VERSION 3.15)

project(PankeyEngine_Type_Map)

if(NOT TARGET ThePankeyEngine_Type_Map)

    add_library(ThePankeyEngine_Type_Map INTERFACE)

    target_include_directories(
        ThePankeyEngine_Type_Map
          INTERFACE
            ${CMAKE_CURRENT_SOURCE_DIR}
    )

endif()