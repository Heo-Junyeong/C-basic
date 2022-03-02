/*
%--------------------------------------------------------------------------
% C language practice 2
% Let's start the code :)
%
% Developed by Heo Junyeong Heo
%--------------------------------------------------------------------------
*/

#include "array1d.h"

int main(void)
{
	dtype arr1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//float arr1f[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	dtype arr2[5] = { 10, 20, 30, 40, 50 };
	
	dtype* ret;
	
	print_1d_arrayi(arr1, 10);

	reverse_1d_array(arr1, 10);
	print_1d_arrayi(arr1, 10);

	zeros_1d_array(arr1, 10);
	print_1d_arrayi(arr1, 10);

	printf("arr1 : sum = %d\n", sum_1d_array(arr1, 10));
	printf("arr1 : min = %d, max = %d\n", min_1d_array(arr1, 10), max_1d_array(arr1, 10));

	ret = concat_1d_array(arr1, arr2, SIZE_1D_ARRAY(arr1), SIZE_1D_ARRAY(arr2));
	print_1d_arrayi(ret, SIZE_1D_ARRAY(arr1) + SIZE_1D_ARRAY(arr2));
}