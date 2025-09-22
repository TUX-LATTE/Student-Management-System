#include <stdio.h>


int main(void)
{
    puts("\t\t\tWelcome to the Student Management System");

    int studentID = 0;

    int mathsGrade = 0; 
    int scienceGrade = 0; 
    int englishGrade = 0;

    printf("%s", "Enter your ID: ");
    scanf("%d", &studentID);

    printf("%s", "Enter the Maths grade: ");
    scanf("%d", &mathsGrade);

    printf("%s", "Enter the Science grade: ");
    scanf("%d", &scienceGrade);

    printf("%s", "Enter the English grade: ");
    scanf("%d", &englishGrade);

    printf("Student ID: %d\nMaths: %d\tScience: %d\tEnglish: %d\t\n", studentID, mathsGrade, scienceGrade, englishGrade);

    

    return 0;
}