#!/bin/bash
cat /proc/cpuinfo | grep flag | head -1
cd /home/grid/testbed/tb031/lab/vec_samples/src 
ml icc
array=( "-xSSE2" "-xSSE3" "-xAVX"  )
for a in "${array[@]}"; do
  for b in {1..3}; do
    num1=$(date +%M)
    num2=$(date +%S)
    echo icpc -std=c++17 -O$b $a lab.cpp -o file-$num1-$num2
    icpc -std=c++17 -O$b $a lab.cpp -o file-$num1-$num2
    echo "$a $b:"
    time ./file-$num1-$num2
  done 
done