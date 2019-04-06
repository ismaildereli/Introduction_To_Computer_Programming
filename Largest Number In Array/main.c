#include <stdio.h>

int maximum(int arr[], size_t size);

int main(){
	int numbers[] = {6, 8, 9, 54, 84, 12, 5};
	printf("Dizi içerisindeki en büyük sayı = %d\n", maximum(numbers, sizeof(numbers) / sizeof(numbers[0])));
	return 0;
}

int maximum(int arr[], size_t size){
	int max = arr[0];
	for(int i = 1; i < size; i++){
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}
