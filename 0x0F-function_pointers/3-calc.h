#ifndef CALC_H
#define CALC_H
int (*get_op_func(char *s))(int, int);
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

/**
 * struct op - struct
 * @op: operator
 * @f: ...
 */

typedef struct op
{
	char *op;
	int (*f)(int, int);
}op_t;

#endif
