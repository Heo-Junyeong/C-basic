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

char score2grade(const int score)
{
	// (problem 1) score to grade 
	char grade;
	if (score >= 90) grade = 'A';	// score >= 90 -> grade 'A'
	else if (score >= 80) grade = 'B';  // score < 90 && score >= 80 -> grade 'B'
	else if (score >= 70) grade = 'C';	// score < 80 && score >= 70 -> grade 'C'
	else if (score >= 60) grade = 'D';	// score < 70 && score >= 60 -> grade 'D'
	else grade = 'F';	// score < 60

	return grade;
}
void timestable_9(const int n)
{
	// (problem 2) printf for n timestable
	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n * i);
}
int factorial(const int n)
{
	// (problem 3) n of factorial
	int ret = n;
	for (int i = n - 1; i > 0; --i) ret *= i;
	return ret;
}
float circumference(const float r)
{
	// (problem 4 - 1)
	return PI2F * r; // 2 * pi *r
}
float area(const float r)
{
	// (problem 4 - 2) 
	return PI * r * r; // pi*(r^2)
}
int sum_a2b(const int lower, const int upper)
{
	// (problem 5) 
	int sum = 0;
	for (int i = lower; i <= upper; i++) sum += i;
	return sum;
}
int main(void)
{
	printf("%%%%----------------Practice 1----------------%%%%\n");
	printf("%%%%-------------Example Solution-------------%%%%\n");
	printf("%%%%--------------Hello world!!--------------%%%%\n\n");
	puts("");

	printf("Problem 1, socore 67 grade = %c\n", score2grade(67));
	
	printf("Problem 2, n = 4\n"); timestable_9(4);

	printf("Problem 3, factorial(5) = %d \n", factorial(5));

	printf("Problem 4, r = 2\n l = %f, A = %f \n", circumference(2.0f), area(2.0f));

	printf("Problem 5, lower = 1, upper = 10, sum = %d \n", sum_a2b(1, 10));

	printf("\n%%%%--------------GoodBye World-------------%%%%\n\n");
}