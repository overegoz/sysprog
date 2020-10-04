#!/bin/bash

tell_me_more()
{
	echo $1 goes to $2
}

echo -n "Enter your name: "
read name

echo -n "Enter a name of a city: "
read city

tell_me_more $name $city

exit 0
