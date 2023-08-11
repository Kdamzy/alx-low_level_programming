#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The number %d is ", n);
    
    if (n > 0) 
    {
        printf("is positive");
    }
    else if (n == 0)
    {
        printf("is zero");
    } 
    else
    {
        printf("is negative");
    }
    
    printf("\n");
    
    return (0);
}
