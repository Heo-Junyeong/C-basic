#include "array1d.h"

void print_1d_arrayi(dtype* arr, const size_t size)
{
	// int형태로 출력
	for (int i = 0; i < size; i++) printf("%2d ", arr[i]);
	printf("\n");
}
void print_1d_arrayf(dtype* arr, const size_t size)
{
	// float형태로 출력
	for (int i = 0; i < size; i++) printf("%.3f ", arr[i]);
	printf("\n");
}
void zeros_1d_array(dtype* arr, const size_t size)
{
	for (int i = 0; i < size; i++) arr[i] = 0;
}
dtype sum_1d_array(dtype* arr, const size_t size)
{
	dtype sum = 0;
	for (int i = 0; i < size; i++) sum += arr[i];
	return sum;
}
void reverse_1d_array(dtype* arr, const size_t size)
{
	dtype* tmp = (dtype*)malloc(sizeof(dtype) * size);

	for (int i = 0; i < size; i++) tmp[size - i - 1] = arr[i];
	for (int i = 0; i < size; i++) arr[i] = tmp[i];

	free(tmp);
}
dtype min_1d_array(dtype* arr, const size_t size)
{
	dtype min = arr[0];
	for (int i = 0; i < size; i++)
		if (min > arr[i])
			min = arr[i];
	return min;
}
dtype max_1d_array(dtype* arr, const size_t size)
{
	dtype max = arr[0];
	for (int i = 0; i < size; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}
dtype* concat_1d_array(dtype* src, dtype* dst, const size_t src_size, const size_t dst_size)
{
	dtype* tmp = (dtype*)malloc(sizeof(dtype) * (src_size + dst_size));
	int i;
	for (i = 0; i < src_size; i++) tmp[i] = src[i];
	for (int j = 0; j < dst_size; j++) tmp[i++] = dst[j];

	return tmp;
}