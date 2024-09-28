#include<stdio.h>

int main()
{	
	int count = 0;
	int gap = 0;
	int star = 0;

	for(count; count<5; count++)
	{
		for (gap=0; gap+count<4; gap++)
		{
			printf(" ");
		}
		
		for (star=0; star<2*count+1; star++)
		{
			printf("*");
		}
		printf("\n");
	}
		
}
