#include <stdio.h>

int main()
{
    int A = 0;
	
	while((scanf("%i", &A)) != EOF)
		printf("%c\n", (A % 6 == 0) ? ('Y') : ('N'));

    return 0;
}
