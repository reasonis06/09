#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

#if 0
int main(void)
{
	int i;
	int grade[SIZE];
	int score[SIZE];
	
	for(i=0; i<SIZE; i++) {
		grade[i] = rand() % 100; // random number's range: 0~99
		score[i] = grade[i];
	}
	
	for(i=0; i<SIZE; i++) {
		printf("score[%d] = %d\n", i, score[i]);
		printf("grade[%d] = %d\n", i, score[i]);
	}
	
	system("PAUSE");
	return 0;
}
#endif
int main(void){
	int i;
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,4,5};
	int flag_same = 1; // flag variable
	
	for(i=0; i<SIZE; i++) {
		if(a[i] != b[i]) {
			printf("%d-th element is different.\n", i);
			flag_same = 0;
		}
	}

printf("Are a and b the same? %d\n", flag_same);

	system("PAUSE");
	return 0;
}
