#include <stdio.h>
#include <stdlib.h>

int main() {
    int largest;
    int result;
    int reverse = 0;
    int remainder;
    int i, j, n, I, J;
    for (i=99; i>10; i--) {
	for (j=99; j>10; j--) {
	    result = i*j;
	    n = result;
	    while (n != 0) {
		remainder = n%10;
		reverse = reverse*10 + remainder;
		n /= 10;
	    }
	    if (result == reverse) {
		largest=result;
		I = i;
		J = j;
		break;
	    }
	}
    }
    printf("%d x %d = %d\n", I,J,largest);
}
