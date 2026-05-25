#include <stdio.h>
int main(){

    int age;
    char name[20];
    
    // Name Section

    printf("Enter your Name: ");
    scanf("%s", name);


    // Age Section

    printf("Enter your Age: ");
    scanf("%d",  &age);



    printf("My Name is %s", name);
    printf(" & I am %d", age);
    printf(" year old");

     
    return 0;

   
}