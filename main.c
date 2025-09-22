#include <stdio.h>


int main(void)
{
    puts("\t\t\tWelcome to the Student Management System");

    int studentID = 0;

    unsigned int mathsGrade = 0; 
    unsigned int scienceGrade = 0; 
    unsigned int englishGrade = 0;

    printf("%s", "Enter your ID: ");
    scanf("%d"
    , &studentID);

    printf("%s", "Enter the Maths grade: ");
    scanf("%d", &mathsGrade);

    if(mathsGrade < 0 || mathsGrade > 100)
    {
        puts("Out of expected range input, Try again later!");
        return 1;
    }
    
    printf("%s", "Enter the Science grade: ");
    scanf("%d", &scienceGrade);

    if(scienceGrade < 0 || scienceGrade > 100)
    {
        puts("Out of expected range input, Try again later!");
        return 1;
    }

    printf("%s", "Enter the English grade: ");
    scanf("%d", &englishGrade);

    if(englishGrade < 0 || englishGrade > 100)
    {
        puts("Out of expected range input, Try again later!");
        return 1;
    }

    printf("Student ID: %d\nMaths: %d\tScience: %d\tEnglish: %d\t\n", studentID, mathsGrade, scienceGrade, englishGrade);

    return 0;
}