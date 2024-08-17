#!/bin/bash
sudo apt install build-essential

gcc integers.cpp -lstdc++ -o integers
gcc squares.cpp -lstdc++ -o squares
gcc take.cpp -lstdc++ -o take

./integers | ./squares | ./take 25

rm integers squares take