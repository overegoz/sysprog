#!/bin/bash

echo First num: $1
echo Second num: $2

mysum=$(expr $1 + $2)
echo ">> sum is: $mysum"

exit 0
