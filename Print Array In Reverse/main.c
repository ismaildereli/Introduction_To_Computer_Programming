#include <stdio.h>
#include <stdlib.h>

void PrintArrayReverse(char arr[], size_t size);

int main(void){
	char chars[] = {'n', 'a', 'b', 'e', 'r'};
	printf("Verilen dizinin elemanları:\n");
	PrintArrayReverse(chars, sizeof(chars) / sizeof(chars[0]));
	return 0;
}

void PrintArrayReverse(char arr[], size_t size){
	if(size == 0)
		return;
	printf("%c\n", arr[--size]);
	PrintArrayReverse(arr, size);
}
