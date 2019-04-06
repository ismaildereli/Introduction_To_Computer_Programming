#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(void){
	printf("%d! = %d\n", 3, factorial(3));
	return 0;
}

int factorial(int n){
	if(n == 0)
		return 1;
	return n * factorial(n - 1);
}
