#!/bin/bash

set -e
#set -x
set -o pipefail

for i in {1..30}
do
	if (( i % 2  == 0 ))
	then
		echo "$i"
	fi
done


## another method


for i in {1..30}

do
	if [ `expr $i % 2` == 0 ]
	then
		echo $i
	fi
done

#write a shell script to print numbers divided by 3 or 5 and not 15

for i in {1..30}
do
    if (( (i % 3 == 0 || i % 5 == 0) && (i % 15 != 0) )); then
        echo "$i"
    fi
done