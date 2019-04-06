#include <stdio.h>
#include <stdlib.h>

int ScalarMultiplication(int arr1[], int arr2[], size_t size);

int main(void){
	int numbers[] = {1, 2, 4, 5, 7, 8, 10, 11};
	int numbers2[] = {5, 7, 8, 6, 4, 9, 5, 1};
	printf("Verilen dizilerin vektörel çarpımı = %d\n", scalarMultiplication(numbers, numbers2, sizeof(numbers) / sizeof(numbers[0])));
	return 0;
}

int ScalarMultiplication(int arr1[], int arr2[], size_t size){
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum += arr1[i] * arr2[i];
	}
	return sum;
}
