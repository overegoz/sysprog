#!/bin/bash

filename=testfile.txt
touch $filename  # create a new file
echo "Hello world!" > $filename
echo "Nice to meet you." >> $filename
echo -n "Enter an int: "
read n1
echo -n "Enter another int: "
read n2
n3=$(expr "$n1" + "$n2")
echo "Result: $n3"
exit 0
