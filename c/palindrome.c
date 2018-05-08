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

    i=999;
    while (i>=100) {
	j=999;
	while (j>=i) {

	    result = i*j;

	    if (result <= largest) {
		return largest;
	    }

	    reversed = reverse(result);

	    if (result == reversed) {
		largest = result;
	    }
	    j--;
	}
	i--;
    }
}

int main() {
    int largest;

    largest = find_largest();
    printf("%d\n", largest);
}
