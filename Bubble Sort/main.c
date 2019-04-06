#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], size_t size);

int main(void){
	int numbers[] = {1, 2, 4, 5, 7, 8, 10, 11};
	bubbleSort(numbers, sizeof(numbers) / sizeof(numbers[0]));
	printf("Sıralı dizi:\n");
	for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
		printf("%d\n", numbers[i]);
	}
	return 0;
}

void BubbleSort(int arr[], size_t size){
	for(int i = 1; i < size; i++){
		for(int j = i; j > 0; j--){
			if(arr[j] > arr[j - 1]){
				break;
			}else{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j] = temp;
			}
		}
	}
}
