#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)


int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);

#endif /* MAIN_H */
