#include <stdio.h>
#include <stdlib.h>

int SumOddNumbers(int arr[], size_t size);

int main(void){
	int numbers[] = {1, 2, 4, 5, 7, 8, 10, 11};
	printf("Verilen dizideki tek sayıların toplamı = %d\n", SumOddNumbers(numbers, sizeof(numbers) / sizeof(numbers[0])));
	return 0;
}

int SumOddNumbers(int arr[], size_t size){
	int sum = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] % 2 != 0)
			sum += arr[i];
	}
	return sum;
}
