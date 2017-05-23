#include <stdio.h>

int sum(int *a, int SIZE);

int main() {
	int a[5] = { 85, 89, 65, 59, 100 };
	int i;
	int arrLength = sizeof(a) / sizeof(int);

	printf("합은 %d 입니다.", sum(a, arrLength));
	scanf("%d", &i);
	return 0;
}

int sum(int *a, int SIZE){
	int sum = 0;
	int i;
	for(i = 0; i < SIZE; i++)
		sum += *a++;
	return sum;
}