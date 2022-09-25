/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 11;
    
    printf("a = %d\t", a);
    printf("a = %o\t", a);
    printf("a = %x\n", a);
    
    int c = 50000;
    unsigned int b = 50000;
    
    printf("c = %d, b = %u\n", c,b);
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("%d", ch);
    return (0);
}
