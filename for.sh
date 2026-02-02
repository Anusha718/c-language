#!/bin/bash

for i in 1 2 3 4 5 10
do 
	echo $i
done

###another method
for i in 1 2 3 4 5;do echo $i;done


##enable escape characters with -e
echo -e "\n\n" 


##another method
for i in {1..10}
do
	echo $i
done

##enable escape characters with -e
echo -e "\n\n" 

##another 

for ((i=1;i<=10;i++))
do
	echo $i
done


