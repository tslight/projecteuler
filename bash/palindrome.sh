#!/usr/bin/env bash

# brute force!
declare -i i j largest
for ((i=99; i>=10; i--)); do
    for ((j=99; j>=i; j--)); do

	result=$((i*j))
	reverse=$(echo $result | rev)

	if ((result <= largest)); then
	    break 2
	fi

	if [[ $result == $reverse ]]; then
	    largest=$result
	    I=$i
	    J=$j
	fi
    done
done

echo "$I x $J = $largest"
