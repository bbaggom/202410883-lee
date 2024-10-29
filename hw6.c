#include<stdio.h>

int main(void) {
	int nums[5];
	int i=0;

	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);
	
	printf("Odd numbers: ");
	while (i < 5) {
		if (nums[i] % 2 != 0) {
			printf("%d ", nums[i]);
		}
		i++;
	}
	i = 0;
	printf("\nEven numbers: ");
	while (i < 5) {
		if (nums[i] % 2 == 0) {
			printf("%d ", nums[i]);
		}
		i++;
	}
}
	
