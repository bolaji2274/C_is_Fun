#include <stdio.h>
#include <string.h>

int main(){
    char my_string[100]; //we declare a string that can accept up to 100 character
    int lens;
    int i;

    printf("Enter your string : ");
    gets(my_string);
    lens = strlen(my_string);
    printf("Length of %s is : %d\n",my_string,lens);
    for(i=1; i < 10; i++){
        printf("%s\n",my_string);
    }
    printf("The first character of the string is : %c",my_string[0]);
    return 0;
}
