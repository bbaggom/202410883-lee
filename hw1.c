#include<stdio.h>

int main()
{
	int num_1, num_2;
	int result_1, result_2, result_3;
	printf("Input two integers: ");
	scanf("%d %d", &num_1, &num_2);
	result_1 = num_1 & num_2;
	result_2 = num_1 | num_2;
	result_3 = num_1 ^ num_2;

	printf("%d & %d = %d \n", num_1, num_2, result_1);
	printf("%d | %d = %d \n", num_1, num_2, result_2);
	printf("%d ^ %d = %d \n", num_1, num_2, result_3);
	
	return 0;
}