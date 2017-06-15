#!/bin/bash

MAX=100000
MAX_NUMBER=100
AMOUNT=${2:-$MAX}
INPUT_FILE=${1:-"input.txt"}

# Clean the input file
echo -n > $INPUT_FILE

# Add the amount
echo $AMOUNT > $INPUT_FILE

# Add the random numbers
for ((i=0; i<$AMOUNT; i++))
    do
        RANDOM_NUMBER=$(($RANDOM % $(($MAX_NUMBER+1)) ))
        echo -n "${RANDOM_NUMBER} " >> $INPUT_FILE
    done