#include <stdio.h>
#include <stdlib.h>

int sum(int n);

int main(void){
	printf("1 ile %d arasındaki sayıların toplamı = %d\n", 8, sum(8));
	return 0;
}

int sum(int n){
	if(n == 0)
		return 0;
	return n + sum(n - 1);
}
