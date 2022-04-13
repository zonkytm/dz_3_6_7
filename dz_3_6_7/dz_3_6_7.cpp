#include "buble_sorting.h"
#include "Figure.h"


int main()
{
	const int  size = 5;
	int arr[size] = { 2,1,3,4,-1 };
	double arr1[size] = { 2.0,-1.5,34,1.2,3.3 };

	complex arr_2[size];
	for (int i = 0; i < size; i++)
	{
		arr_2[i].Re = rand() % 10 + 1;
		arr_2[i].Im = rand() % 10 + 1;
	}


	print_arr(arr, size);
	bubble_sorting(arr, size);
	print_arr(arr, size);


	print_arr(arr1, size);
	bubble_sorting(arr1, size);
	print_arr(arr1, size);


	print_arr(arr_2, size);
	bubble_sorting(arr_2, size);
	print_arr(arr_2, size);
}