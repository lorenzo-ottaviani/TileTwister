cmake_minimum_required(VERSION 3.10)
project(2048)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Chemin vers SDL2 (modifie si besoin)
set(SDL2_PATH "C:/libs/SDL2-2.32.10/i686-w64-mingw32")

# Includes et libs SDL2
include_directories(${SDL2_PATH}/include)
link_directories(${SDL2_PATH}/lib)

add_executable(2048
    src/main.cpp
    src/Game.cpp
    src/Grille.cpp
    src/Affichage.cpp
    src/InputManager.cpp
)

target_link_libraries(2048
    mingw32
    SDL2main
    SDL2
)
