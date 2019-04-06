#include <stdio.h>
#include <stdlib.h>

void invests(double money, int year, double interest);
double power(double n, int sub);

int main(int argc, char *argv[]){
	invests(atof(argv[1]), atoi(argv[2]), atof(argv[3]));
}

void invests(double money, int year, double interest){
	for(int i = 1; i <= year; i++){
		printf("%d. yıldaki birikiminiz: %f\n", i, money * (power(1.0 + interest, i)));
	}
}

double power(double n, int sub){
	double result = 1.0;
	for(int i = 1; i <= sub; i++){
		result *= n;
	}
	return result;
}
