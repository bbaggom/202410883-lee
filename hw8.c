#include <stdio.h>
#include <math.h>

double solveproblem(int* param) {
	double average, ntotal=0, result;
	int total=0;

	for (int i = 0; i < 5; i++) {
		total += param[i];
	}

	average = (double)total / 5;

	for (int i = 0; i < 5; i++) {
		ntotal += (double) pow((double)param[i]-average, (double)2);
	}

	result = (double)sqrt(ntotal / 5);

	return result;
}

int main(void) {
	int arr[5];
	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d",&arr[0],&arr[1], &arr[2], &arr[3], &arr[4]);
	printf("\nStandard Deviation = %.3lf", solveproblem(arr));
	return 0;
}

