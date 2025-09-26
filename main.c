#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    puts("\t\t\tWelcome to the Student Management System");

    int studentID = 0;  //There is no validation for student ID yet

    unsigned short mathsGrade = 0; 
    unsigned short scienceGrade = 0; 
    unsigned short englishGrade = 0;

    short totalGrades = 0;
    float average = 0;

    unsigned short highestGrade = 0, lowestGrade = 0;

    bool runProgram = true;


    while(runProgram)
    {
        printf("%s", "Enter your ID: ");
        scanf("%d", &studentID);
    
        printf("%s", "Enter the Maths grade: ");
        scanf("%hd", &mathsGrade);
    
        if(mathsGrade < 0 || mathsGrade > 100)
        {
            puts("Out of expected range input, Try again later!");
            return 1;
        }
        
        printf("%s", "Enter the Science grade: ");
        scanf("%hd", &scienceGrade);
    
        if(scienceGrade < 0 || scienceGrade > 100)
        {
            puts("Out of expected range input, Try again later!");
            return 1;
        }
    
        printf("%s", "Enter the English grade: ");
        scanf("%hd", &englishGrade);
    
        if(englishGrade < 0 || englishGrade > 100)
        {
            puts("Out of expected range input, Try again later!");
            return 1;
        }
    
    
        
        
        totalGrades = mathsGrade + scienceGrade + englishGrade;
        average = (float) totalGrades / 3;
        
        
        //--------------------------------------------My logic-----------------------------------------------//
        // highestGrade = mathsGrade;
        
        // if(highestGrade < scienceGrade)
        // {
        //     highestGrade = scienceGrade;
        // }
            
        // if(highestGrade < englishGrade)
        // {
        //     highestGrade = englishGrade;
        // }
                
                
        // lowestGrade = mathsGrade;
                
        // if(lowestGrade > scienceGrade)
        // {   
        //     lowestGrade = scienceGrade;
        // }
                    
        // if(lowestGrade > englishGrade)
        // {
        //     lowestGrade = englishGrade;
        // }
                        
        //-------------------------------------------Chatgpt Logic-----------------------------------------------//
        if(mathsGrade > scienceGrade)
        {
            highestGrade = mathsGrade;
            lowestGrade = scienceGrade;
        }
        else
        {
            highestGrade = scienceGrade;
            lowestGrade = mathsGrade;
        }
                        
        if(highestGrade < englishGrade)
        {
            highestGrade = englishGrade;
        }


        printf("Student ID: %d\nMaths: %hd\tScience: %hd\tEnglish: %hd\t\n", studentID, mathsGrade, scienceGrade, englishGrade);
        printf("Highest: %d\t Lowest: %d\n", highestGrade, lowestGrade);
        printf("Average: %.2f\n", average);
    

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
        
        int temp = 0;
        scanf("%d", &temp);

        runProgram = (temp != 0);

        /* -------------------------------------------LOGIC USED BEFORE!-----------------------------------------
           
            int runProgram = 1;
           
            printf("\nWant to continue(Any Key: Yes/0: No)?: ");
            scanf("%d", &runProgram);

            And why not this: 
               Software Engineering Observation 4.4:
                   First, make your code simple, clean and correct; then make it fast and small, but only if necessary.
        */

    }
    return 0;
}