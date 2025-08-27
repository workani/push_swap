#include "../../include/push_swap.h"

int	caculate_cost(List *item)
{
	int	cost;
	int	pos;
	int	pair_pos;

	cost = item->cost_a + item->cost_b;
	pos = item->pos;
	pair_pos = item->pair_pos;
	while (pos < 0 && pair_pos < 0)
	{
		pos++;
		pair_pos++;
		cost--;
	}
	while (pos > 0 && pair_pos > 0)
	{
		pos--;
		pair_pos--;
		cost--;
	}
	return (cost);
}

void	find_and_set_pairs_b(List *a, List *b)
{
	List	*pair;

	while (a != NULL)
	{
		pair = find_smaller_than(b, a->value);
		if (!pair)
			pair = find_max(b);
		a->pair_pos = pair->pos;
		a->cost_b = pair->cost_b;
		a = a->next;
	}
}


void	find_and_set_pairs_a(List *a, List *b)
{
	List	*pair;

	while (b != NULL)
	{
		pair = find_larger_than(a, b->value);
		if (!pair)
			pair = find_min(a);
		b->pair_pos = pair->pos;
		b->cost_a = pair->cost_a;
		b = b->next;
	}
}


List	*get_cheapest_element(List *stack)
{
	List	*result;
	int		cheapest_cost;
	int		new_cost;

	cheapest_cost = INT_MAX;
	while (stack != NULL)
	{
		new_cost = caculate_cost(stack);
		if (new_cost < cheapest_cost)
		{
			cheapest_cost = new_cost;
			result = stack;
		}
		stack = stack->next;
	}
	return (result);
}
void	set_cost_and_pairs(List *a, List *b, bool sorting_a)
{
	assign_cost_and_position(a, true);
	assign_cost_and_position(b, false);
	if (sorting_a)
		find_and_set_pairs_a(a, b);
	else
		find_and_set_pairs_b(a, b);
}