#include <stdio.h>

int main(){
    // variable = allocated space in memory to store a value.
    //            We refer ti a variable's name to access the stored value.
    //            That variable now behaves as if it was the value it contains.
    //            BUT we need to declare what type of data we are storing.

    int x; //declaration
    x = 10; //initialization
    int y = 32; // declaration + initialization

    int age = 25; // integer
    float gpa = 7.3; // floating point number
    char grade = 'A'; // single character
    char name[] = "Hitesh"; //array of characters

    // printf("Hello %s\n", name);
    // printf("You are %d years old\n",age);
    // printf("Your average grade is %c\n", grade);
    // printf("Your GPA is %f\n", gpa);

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%-2.2f\n", item1);
    printf("Item 2: $%6.2f\n", item2);
    printf("Item 3: $%6.2f\n", item3);


    return 0;
}