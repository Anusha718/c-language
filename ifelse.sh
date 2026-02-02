#!/bin/bash
set -x #to debug
set -e #to terminate script if any error withut executing all script
set -o pipefail

a=5
read b

if [ $a -gt $b ]
then
	echo "$a is big"
else
	echo "$b is big"
fi


## another method for numeric comparison
if ((a > b));then
	echo "$a is big"
else
	echo "$b is big"
fi


##if-elif

read name

if [ $name == "Anusha" ];then   #use = or == for string comarison
	echo "this is $name"
elif [ $name == "Aadhya" ];then
	echo "this is $name"
else
	echo "this is $name"
fi
	