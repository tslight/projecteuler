#include <stdio.h>
#include <stdlib.h>

int reverse(int n) {
    int reversed = 0, remainder;

    while(n != 0)
    {
	remainder = n%10;
	reversed = reversed*10 + remainder;
	n /= 10;
    }

    return reversed;
}

int find_largest() {
    int largest = 0, result, reversed;
    int i, j;

    for (i=999; i>=100; i--) {
	for (j=i; j>=100; j--) {
	    result = i*j;
	    reversed = reverse(result);
	    if (result == reversed && result > largest) {
		largest = result;
	    }
	}
    }

    return largest;
}

int main() {
    int largest;

    largest = find_largest();

    printf("%d\n", largest);
}
