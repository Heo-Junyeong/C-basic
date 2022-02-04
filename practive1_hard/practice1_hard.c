/*
%--------------------------------------------------------------------------
% C language practice 1 (basic)
% Let's start the code :)
%
% Developed by Heo Junyeong Heo
%--------------------------------------------------------------------------
*/

#include "common.h"

#define PI atan(1)*4
#define PI2F 6.28318530718f

#define SIZE_1D_ARRAY(x) (sizeof(x)/sizeof(x[0]))

/*problem 1*/
int LCM(const int a, const int b)
{
	// Least Common Multiplier for a and b
	int i = 1, j = 1;
	while (i * a != j * b) i* a > j* b ? j++ : i++;
	return i * a;
}
int LCM_n(int* arr, size_t size)
{
	// generalize for arrary have n size
	int ret = 1;
	for (size_t i = 0; i < size; i++) ret = LCM(arr[i], ret);
	return ret;
}

/*problem2*/
void prime_number(const int n)
{
	// print prime number until 10

	bool flag = false; // if i is prime number that flag is "false".

	for (int i = 2; i <= n; i++)
	{
		flag = false;

		for (int j = 2; j < i; j++)
			if (i % j == 0) flag = true;

		if (!flag) printf("%d ", i);
	}
}

/*problem3*/
void circlep(const int r)
{
	for (int x = -2 * r; x <= 2 * r; x += 2)
	{
		for (int y = -r; y <= r; y++)
		{
			if ((x * x + y * y) <= r * r) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
int main(void)
{
	printf("%%%%----------------Practice 1----------------%%%%\n");
	printf("%%%%-------------Example Solution-------------%%%%\n");
	printf("%%%%---------------Hello world!!--------------%%%%\n\n");
	puts("");

	int arr[5] = { 10, 20, 30, 40, 50 };
	printf("LCM_n, {10, 20, 30, 40, 50} = %d", LCM_n(arr, SIZE_1D_ARRAY(arr)));
	
	puts("");
	printf("Prime number, lower = 63\n");
	prime_number(63);

	puts("");
	printf("circle print, radius = 22\n");
	circlep(22);

	printf("\n%%%%--------------GoodBye World-------------%%%%\n\n");
}