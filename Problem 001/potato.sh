#!/bin/bash

sum=0
for ((i=1; i<1000; i++)); do
	if [ $(($i % 3)) -eq 0 ] || [ $(($i % 5)) -eq 0 ]; then
		sum=$(($sum + $i))
	fi
done

echo $sum
