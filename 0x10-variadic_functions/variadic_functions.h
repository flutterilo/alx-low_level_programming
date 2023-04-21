#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void char_num_print(int num);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct format - Struct op
* @c: char
* @type: type of it 
*/
typedef struct format
{
	char c;
	void *type;
} format_t;

#endif
