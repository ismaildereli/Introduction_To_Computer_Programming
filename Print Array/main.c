#include <stdio.h>
#include <stdlib.h>

void PrintArray(int arr[], size_t size);

int main(void){
	int numbers[] = {1, 8, 9, 3, 15, 6, 9};
	printf("Verilen dizinin elemanları:\n");
	PrintArray(numbers, sizeof(numbers) / sizeof(numbers[0]));
	return 0;
}

void PrintArray(int arr[], size_t size){
	if(size == 0)
		return;
	PrintArray(arr, --size);
	printf("%d\n", arr[size]);
}
