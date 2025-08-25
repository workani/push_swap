#include "../../include/push_swap.h"
#include "../../include/ops_base.h"

bool push_src_to_dest(List **src, List **dest)
{
	int item;
	
	if (!pop(src, &item))
		return (false);
	push(dest, item);
	return (true);
}

void swap_value(List *src)
{
	int tmp;

	ft_printf("sa\n");
	tmp = src->value;
	src->value = src->next->value;
	src->next->value = tmp;
}

void rotate(List *src)
{
	int temp;
	
	while (src != NULL && src->next != NULL)
	{
		temp = src->value;
		src->value = src->next->value;
		src->next->value = temp;
		src = src->next;
	}	
}


void reverse_rotate(List *src)
{
	int temp;
	
	while (src->next != NULL)
	{
    	src = src->next;
	}
	while (src->prev != NULL)
	{
		temp = src->value;
		src->value = src->prev->value;
		src->prev->value = temp;
		src = src->prev;
	}
}
