#include "function.h"
#include "include.h"

void allocate_memory_dinmassiv(int**& ar, int height, int width);
void random_fill_array_dinmassiv(int** ar, int height, int width, const int min, const int max);
void print_array_dinmassiv(int** ar, int height, int width);
void free_memory_dinmassiv(int** ar);


int main()
{
	int height=5;
	int width = 10;
	int** ar = new int* [height]; // динамический массив указателей
	allocate_memory_dinmassiv(ar, height, width);
	random_fill_array_dinmassiv(ar, height, width, 1, 100);
	print_array_dinmassiv(ar, height, width);
	free_memory_dinmassiv(ar);
}