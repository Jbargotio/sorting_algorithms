#include "sort.h"
void merge(int *array,int p, int q, int r);
void mergeSort(int *array, int l, int r);

void merge_sort(int *array,size_t size)
{
	mergeSort(array, 0, (int)size -1);
}
void mergeSort(int *array, int l,int r)
{
	if(l < r)
	{
		int m = l + (r -l ) / 2;
		mergeSort(array, l, m);
		mergeSort(array, m+1,r);

		merge(array, l, m, r);
	}
}

void merge(int *array,int p,int q, int r)
{
	int n1 = q - p + 1;
        int n2 = r - q;
        int *L;
	int i, j, k;
	int *M;
       	L = malloc(n1 * sizeof(int));
	M = malloc(n2 * sizeof(int));		
	
for (i = 0; i < n1;i++)
{
     L[i] = array[p + i];
}
for(j = 0;j < n2;j++)
{
    M[j] = array[q + 1 + j];
}
i = 0;
j = 0;
k = p;
while(i < n1 && j < n2)
{
	if(L[i] <= M[j])
	{
		array[k] = L[i];
		i++;
	}
	else
	{
		array[k] = M[j];
		j++;
	}
	k++;
}

while(i <n1)
{
	array[k] = L[i];
	i++;
	k++;
}
while(j < n2)
{
	array[k] = M[j];
	j++;
	k++;
}
}
