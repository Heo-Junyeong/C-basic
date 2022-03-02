#ifndef __ARRAY_1D_H__
#define __ARRAY_1D_H__

#include "common.h"

typedef int dtype; // for generic programming

#define SIZE_1D_ARRAY(x) (sizeof(x)/sizeof(x[0]))

void print_1d_arrayi(dtype*, const size_t);
void print_1d_arrayf(dtype*, const size_t);
void zeros_1d_array(dtype*, const size_t);
dtype sum_1d_array(dtype*, const size_t);
void reverse_1d_array(dtype*, const size_t);
dtype min_1d_array(dtype*, const size_t);
dtype max_1d_array(dtype*, const size_t);
dtype* concat_1d_array(dtype*, dtype*, const size_t, const size_t);

#endif