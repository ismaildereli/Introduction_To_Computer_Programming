#include <stdio.h>
#include <stdlib.h>

void OddAndEvenNumbers(int base[], int odd[], int even[], size_t size);

int main(void){
	int numbers[] = {1, 2, 4, 5, 7, 8, 10, 11};
	int odds[sizeof(numbers) / sizeof(numbers[0]) + 1];
	int evens[sizeof(numbers) / sizeof(numbers[0]) + 1];
	OddAndEvenNumbers(numbers, odds, evens, sizeof(numbers) / sizeof(numbers[0]));
	printf("Dizi içerisindeki çift sayılar:\n");
	for(int i = 1; i < evens[0]; i++){
		printf("%d\n", evens[i]);
	}
	printf("Dizi içerisindeki tek sayılar:\n");
	for(int i = 1; i < odds[0]; i++){
		printf("%d\n", odds[i]);
	}
	return 0;
}

void OddAndEvenNumbers(int base[], int odd[], int even[], size_t size){
	int sum = 0, o = 1, e = 1;
	for(int i = 0; i < size; i++){
		if(base[i] % 2 == 0){
			even[e++] = base[i];
		}else{
			odd[o++] = base[i];
		}
	}
	even[0] = e;
	odd[0] = o;
}
