#ifndef _PRINTF_H
#define _PRINTF_H
int _printf(const char *format, ...);
int _putchar(char *buffer, int size_buffer);
/**
 * struct fmt - to link given char to function to print
 * @in: char evaluated
 * @fn: function pointer to use
 */
typedef struct fmt
{
	char in;
	int (*fn)(va_list al, char **pbuf);
} fmt;
#endif /* _PRINTF_H */
