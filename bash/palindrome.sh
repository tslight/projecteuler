#!/usr/bin/env bash

# brute force!
declare -i i j largest

for ((i=999; i>=100; i--)); do
    for ((j=i; j>=100; j--)); do
	result=$((i*j))
	reverse=$(echo $result | rev)
	if [[ $result == $reverse && $result -gt $largest ]]; then
	    largest=$result
	    I=$i
	    J=$j
	fi
    done
done

echo "$I x $J = $largest"
