#!/bin/bash
g++ -o obj/Main.o -c src/Main.cpp
g++ -o bin/Main.exe obj/Main.o -lGL -lGLU -lglut
./bin/Main.exe
