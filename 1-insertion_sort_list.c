#include "sort.h"
void insertion_sort_list(listint_t **list)
{
	listint_t **temp;
	listint_t **empty;
	listint_t **current;
	listint_t **head;
	current = head;
	temp = head;
	while(current->next != NULL)
	{
		if(temp->n > current->next->n)
		{

