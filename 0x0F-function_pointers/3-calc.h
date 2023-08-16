#ifndef CALC_H
#define CALC_H

/**
 * struct op - a struct operator
 * @op: operator
 * @f: function
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif