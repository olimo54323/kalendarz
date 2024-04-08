cmake_minimum_required(VERSION 3.25)
project(projekt_PK)

set(CMAKE_CXX_STANDARD 14)

include_directories(projekt_PK)

add_executable(projekt_PK
        projekt_PK/c_business_event.cpp
        projekt_PK/c_business_event.h
        projekt_PK/c_event.cpp
        projekt_PK/c_event.h
        projekt_PK/c_event_date.cpp
        projekt_PK/c_event_date.h
        projekt_PK/c_event_time.cpp
        projekt_PK/c_event_time.h
        projekt_PK/c_formal_event.cpp
        projekt_PK/c_formal_event.h
        projekt_PK/c_private_event.cpp
        projekt_PK/c_private_event.h
        projekt_PK/c_strategy.cpp
        projekt_PK/c_strategy.h
        projekt_PK/class_function.h
        projekt_PK/function.cpp
        projekt_PK/function.h
        projekt_PK/main.cpp)
