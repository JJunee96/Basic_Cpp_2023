#include <stdio.h>
//int main(void)
//{
//	int sum, average;
//	int num[10];
//	for (int i = 0; i < 10; i++)
//		scanf_s("%d", &num[i]);
//	sum = calculate_sum(num);
//	average = sum / 10;
//	printf("%d\n", average);
//	return 0;
//}
//
//int calculate_sum(int* array)
//{
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//		sum += array[i];
//	return sum;
//}

int main(void)
{
	int sum, average;
	int num[10];
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &num[i]);
	sum = calculate_sum(num);
	average = sum / 10;
	printf("%d\n", average);
	return 0;
}

int calculate_sum(int* array)
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += *(array + i);			// array[i] = *(array + i)
	}									// array[0] = *array
	return sum;
}