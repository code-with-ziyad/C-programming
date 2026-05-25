#include <stdio.h>
int main(){
 
 int age;

 printf("Enter your Age: ");
 scanf("%d", &age);

 if (age >= 18 && age <= 25 )
 {
    printf("You are eligible for this Job.");

 }
 else if (age < 18)
 {
    printf("Not Eligible! Your Age is less then 18");
 }
 
 else{
    printf("Not Eligible! Your age is Greater then 25");
 }
 

}