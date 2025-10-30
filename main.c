#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
	int i;
	int average;
	int score[SIZE];
	
	int sum = 0;
	for(i=0; i<SIZE; i++){
		printf("Enter a score : ");
		scanf("%d", &score[i]);
		sum += score[i];
	}
	
	average = sum / SIZE;
	
	printf("average score : %d\n", average);
	
	system("PAUSE");
	return 0;
}
