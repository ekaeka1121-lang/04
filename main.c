#include <stdio.h>

int main (void)
{ 
    int x, y;
    int res;
    //scanf
    printf("Input two integers:");
    scanf("%i %i", &x, &y);
    
    //operation
    res = x + y;
    //printf
    printf("%i + %i = %i\n" , x, y , res);

    //operation
    res = x - y;
    //printf
    printf("%i - %i = %i\n" , x, y , res);

    //operation
    res = x * y;
    //printf
    printf("%i * %i = %i\n" , x, y , res);

    //operation
    res = x / y;
    //printf
    printf("%i / %i = %i\n" , x, y , res);

    //operation
    res = x % y;
    //printf
    printf("%i %% %i = %i\n" , x, y , res);
    
    return 0;

}