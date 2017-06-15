#!/bin/bash

INPUT_FILE=input.txt
MAX=100000
MAX_NUMBER=100
AMOUNT=${1:-$MAX}

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