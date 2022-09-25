/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, dup;
    long fact = 1;
    printf("Enter a number to find a factorial : ");
    scanf ("%d", &num);
    dup = num;
    if (num < 0)
    {
        printf("No factorial for negative number: ");
    }
    else
    {
        while (num > 0)
        {
            fact *= num;
            num--;
        }
    }
    printf("The factorial of %d = %ld\n",dup, fact);
    
    return 0;
}
