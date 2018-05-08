#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int i = 20, j;
    bool multiple = false;

    while (i >= 20) {

	for (j=1; j<=20; j++) {

	    if (i%j == 0) {
		multiple=true;
	    } else {
		multiple=false;
		break;
	    }
	}

	if (multiple == true) {
	    printf("Multiple found at %d\n" ,i);
	    break;
	}
	i++;
    }
}
