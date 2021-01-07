#!/bin/bash

g++ -c main.cpp
g++ main.o Gracz.cpp Przedmiot.cpp -o GRA.app -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network
