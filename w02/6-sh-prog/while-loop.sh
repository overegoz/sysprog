#!/bin/bash

user_input=""
while [ "$user_input" != "bye" ]
do
	echo -n "Enter text (bye to quit): "
	read user_input
	echo "You entered: $user_input"
done
