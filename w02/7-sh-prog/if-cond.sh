#!/bin/bash

echo -n "Enter a number: "
read num
if [ "$num" -lt "10" ]
then 
	echo "Less than 10"
elif [ "$num" -gt "10" ]
then
	echo "Greater than 10"
else
	echo "It is 10"
fi
exit 0
