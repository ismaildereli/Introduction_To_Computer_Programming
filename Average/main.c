#include <stdio.h>

float avg();

int main(){
	unsigned int c;
	printf("Girilen notların ortalaması: %.2f\n", avg());
	return 0;
}

float avg(){
	int count = 0;
	float sum = 0;
	int n = 0;
	while(n >= 0){
		printf("%d. notu giriniz: ", count + 1);
		scanf("%d", &n);
		if(n < 0)
			break;
		sum += n;
		count++;
	}
	return sum / count;
}
