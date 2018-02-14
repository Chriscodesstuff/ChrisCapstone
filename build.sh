#!/bin/bash
g++ -I include -o obj/Tuple.o -c src/Tuple.cpp
g++ -I include -o obj/Vector.o -c src/Vector.cpp
g++ -I include -o obj/Barrier.o -c src/Barrier.cpp
g++ -I include -o obj/Actor.o -c src/Actor.cpp
g++ -I include -o obj/World.o -c src/World.cpp
g++ -I include -o obj/Main.o -c src/Main.cpp
g++ -o bin/Main.exe obj/Main.o obj/Tuple.o obj/Vector.o obj/Barrier.o obj/Camera.o obj/World.o -lGL -lGLU -lglut -pthread
./bin/Main.exe
