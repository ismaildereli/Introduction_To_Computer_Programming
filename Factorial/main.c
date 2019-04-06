#include <stdio.h>
#include <stdlib.h>

int Factorial(int n);

int main(void){
	printf("%d! = %d\n", 3, Factorial(3));
	return 0;
}

int Factorial(int n){
	if(n == 0)
		return 1;
	return n * Factorial(n - 1);
}
