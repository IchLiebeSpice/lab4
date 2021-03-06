// lab4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main(void)
{
	char a[] = "                       sad sad sad                  ";
	size_t walker = strlen(a);

	printf("Before: |%s|\n\n", a);

	while (walker > 0 && isspace(a[walker - 1]))
		--walker;

	a[walker] = '\0';

	walker = strspn(a, " \t\n\v");
	memmove(a, a + walker, strlen(a + walker) + 1);

	printf("After: |%s|\n", a);

	return 0;
}
