#include <stdio.h>

int main(void){
	int grade;
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;
	int dCount = 0;
	int fCount = 0;

	printf("Enter the letter grades.\n");
	printf("Enter the EOF character to end input.\n");
	
	while((grade = getchar()) != EOF){
		switch(grade){
			case 'a':
				++aCount;
				break;
			case 'b':
				++bCount;
				break;
			case 'c':
				++cCount;
				break;
			case 'd':
				++dCount;
				break;
			case 'f':
				++fCount;
				break;
			case '\n':
				break;
			default:
				printf("Incorrect letter grade entered.\n");
				printf("Enter a new grade.\n");
		}
	}
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);
	return 0;
}
