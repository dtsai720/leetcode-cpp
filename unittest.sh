#!/bin/bash

cmake -S . -B build
cmake --build build
for file in $(find . -type f | grep -P 'runTest\d+$'); do
    ./"$file"
done
