#include <stdio.h>

int main(void)
{
    puts("\t\t\tWelcome to the Student Management System");

    int studentID = 0;

    unsigned int mathsGrade = 0; 
    unsigned int scienceGrade = 0; 
    unsigned int englishGrade = 0;

    int cont = 1;


    while(cont)
    {
        printf("%s", "Enter your ID: ");
        scanf("%d", &studentID);
    
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
        
    
        int totalGrades = mathsGrade + scienceGrade + englishGrade;
        double average = (double) totalGrades / 3;
    
    
        int highestGrade = mathsGrade;
        
        if(highestGrade < scienceGrade)
        {
            highestGrade = scienceGrade;
        }
        
        if(highestGrade < englishGrade)
        {
            highestGrade = englishGrade;
        }
    
        
        int lowestGrade = mathsGrade;
    
        if(lowestGrade > scienceGrade)
        {   
            lowestGrade = scienceGrade;
        }
        
        if(lowestGrade > englishGrade)
        {
            lowestGrade = englishGrade;
        }
    
    
        printf("Highest: %d\t Lowest: %d\n", highestGrade, lowestGrade);
    
    
        printf("%s", "Performance: ");
        if(average >= 90)
        {
            printf("%s", "Excellent!");
        }
        else if(average >= 80)
        {
            printf("%s", "Very Good");
        }
        else if(average >= 70)
        {
            printf("%s", "Good");
        }
        else if(average >= 60)
        {
            printf("%s", "Pass");
        }
        else if(average < 60)
        {
            printf("%s", "Fail!");
        }

        
        printf("\nWant to continue(Any Key: Yes/0: No)?: ");
        scanf("%d", &cont);
    }
    return 0;
}