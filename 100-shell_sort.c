#include "sort.h"
void swap(int *x, int *y);
void shell_sort(int *array, size_t size)
{
	size_t incr,i,j;
	incr = 1;
	while(incr <= (size -1)/9)
		incr = 3 * incr + 1;
	while(incr >= 1)
	{
		for(i = incr; i < size;i++)
		{
			j = i;
			while(j >= incr && array[j- incr] > array[j])
			{
				swap(array + j, array + (j - incr));
				j -=incr;
			}
		}
		incr = incr / 3;
		print_array(array,size);
	}
}
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
