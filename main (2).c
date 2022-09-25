/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = -3;
    a = -a-a+!a;
    printf("a = %d\n", a);
    a = 2;
    int b =1, c, d;
    c = a < b;
    d = (a>b) && (c > b);
    printf ("c = %d\t d = %d\n", c, d);
    
    
    
    return 0;
}
