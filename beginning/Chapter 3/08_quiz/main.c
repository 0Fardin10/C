#include <stdio.h>

int main()
{
    /*
        Quick Quiz: Write a program to find grade of a student given his marks based on below:
            90 - 100 => A
            80 - 89  => B
            70 - 79  => C
            60 - 69  => D
            50 - 59  => E
            <50      => F
    */

    char grade;
    int marks;

    // ইউজার থেকে ইনপুট নেওয়া হচ্ছে
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // শর্তগুলো যাচাই
    if(marks >= 90 && marks <= 100){
        grade = 'A';
    }
    else if(marks >= 80 && marks < 90){
        grade = 'B';
    }
    else if(marks >= 70 && marks < 80){
        grade = 'C';
    }
    else if(marks >= 60 && marks < 70){
        grade = 'D';
    }
    else if(marks >= 50 && marks < 60){
        grade = 'E';
    }
    else{
        grade = 'F';
    }

    printf("Marks: %d => Grade: %c\n", marks, grade);

    return 0;
}

