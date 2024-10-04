#include<stdio.h>

int main()
{
	int count = 2;
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);

	while (count < num)
	{
		if (num % count == 0)
		{
			printf("It is not a prime number.");
			break;
		}
		else
			count++;
	}

	if (count == num)
		printf("It is a prime number.");
}

