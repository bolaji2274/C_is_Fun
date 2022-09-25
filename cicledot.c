/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float fahrenheit;
    float celsius;
    
    printf("Enter your degree celsius: ");
    scanf ("%f", &celsius);
    fahrenheit = ((celsius * 9/5) + 32);
    printf ("%.2f celsius = %.2f fahrenheit\n", celsius, fahrenheit);
    
    int r;
    const float PI = 3.14;
    float area, perimeter;
    printf("Enter your radius: ");
    scanf("%d", &r);
    area = PI * pow(r,2);
    perimeter = 2 * PI * r;
    printf ("Area = %.2f\n", area);
    printf("The perimeter is = %.2f\n", perimeter);
    
    
    return 0;
}
