#include <unistd.h>
#include<stdio.h>

int main()
{
	int a = 5;
	int *ptr = &a;
	printf ("%p\n", ptr);
	printf("%d", ptr);
}