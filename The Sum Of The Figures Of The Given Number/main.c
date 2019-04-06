#include <stdio.h>
#include <stdlib.h>

int SumOfFigures(int n);

int main(void){
	printf("%d sayısının rakamları toplamı = %d\n", 1453, csum(1453));
	return 0;
}

int SumOfFigures(int n){
	if(n == 0)
		return 0;
	return (n % 10 + SumOfFigures(n / 10));
}
