#!/bin/bash

myvar="Hi there!"

echo $myvar
echo "$myvar"
echo '$myvar'
echo \$myvar

echo Enter some text:
read myvar
echo '$myvar' is now: $myvar
exit 0
