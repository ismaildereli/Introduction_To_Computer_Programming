#include <stdio.h>
#include <stdlib.h>

void roll_dice(int *f1, int *f2, int *f3, int *f4, int *f5, int *f6);

int main(void){
  int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
	roll_dice(&f1, &f2, &f3, &f4, &f5, &f6);
	printf("%d\n", f1);
	printf("%d\n", f2);
	printf("%d\n", f3);
	printf("%d\n", f4);
	printf("%d\n", f5);
	printf("%d\n", f6);
	return 0;
}

void roll_dice(int *f1, int *f2, int *f3, int *f4, int *f5, int *f6){
	for(int i = 0; i < 6000; i++){
		int roll = rand() % 6;
		switch(roll){
			case 1:
				(*f1)++;
				break;
			case 2:
				(*f2)++;
				break;
			case 3:
				(*f3)++;
				break;
			case 4:
				(*f4)++;
				break;
			case 5:
				(*f5)++;
				break;
			case 0:
				(*f6)++;
				break;
		}
	}
}
