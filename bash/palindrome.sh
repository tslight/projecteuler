#!/usr/bin/env bash

# brute force!
largest=
for ((i=100;i<1000;i++)); do
    for ((j=100;j<1000;j++)); do
	result=$((i*j))
	reverse=$(echo $result | rev)
	if [[ $result == $reverse ]]; then
	    if ((result>largest)); then
		largest=$result
		I=$i
		J=$j
	    fi
	fi
    done
done

echo "$I x $J = $largest"
