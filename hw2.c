#include<stdio.h>

int main()
{
	//1version

	/*
	float km;
	float mile;
	printf("Please enter kilometers: ");
	scanf("%f", &km);
	mile = km / 1.609;

	printf("%.1f km is equal to %.1f miles", km, mile);
	
	return 0;
	*/

	//2version

	float km;
	printf("Please enter kilometers: ");
	scanf("%f", &km);
	printf("%.1f km is equal to %.1f miles", km, km/1.609);
	return 0;
}
