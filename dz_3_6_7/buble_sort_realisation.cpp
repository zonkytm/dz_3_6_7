#include "buble_sorting.h"








void bubble_sorting(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int bufer_i = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = bufer_i;

			}
		}
	}
}
void bubble_sorting(double* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int bufer_i = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = bufer_i;

			}
		}
	}
}


void bubble_sorting(complex* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				complex bufer_i (arr[j]);
				arr[j] = arr[j + 1];
				arr[j + 1] = bufer_i;

			}
		}
	}
}


void print_arr(double* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
void print_arr(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}

void print_arr(complex* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i].Re<<"+ "<<arr[i].Im<<"i " << '\t';
	}
	cout << endl;
}