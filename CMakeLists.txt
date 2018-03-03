cmake_minimum_required(VERSION 3.4)
project(Hero-fight)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set (CMAKE_C_STANDARD 99)

set(SOURCE_FILES
        src/main.cpp
        src/characters/Character.cpp
        src/characters/Character.h src/characters/jobs/Job.cpp src/characters/jobs/Job.h src/characters/jobs/Warrior.cpp src/characters/jobs/Warrior.h src/characters/jobs/Wizard.cpp src/characters/jobs/Wizard.h src/characters/strikes/Strike.cpp src/characters/strikes/Strike.h src/characters/strikes/SwordStrike.cpp src/characters/strikes/SwordStrike.h src/characters/strikes/Fireball.cpp src/characters/strikes/Fireball.h)
add_executable(Hero-fight ${SOURCE_FILES})