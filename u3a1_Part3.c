/* Jesseca Wirtz - IT-FP2240 - Part 3
 * 5/11/20
 */

#include <stdio.h>

main()
{
    //declare the variables to be used.
    //i and j are used in the for loop
    //grades is the array and ans holds the Y or N for the
    //users answer
    int i = 0;
    int j = 0;
    int grades[20] = {0};
    char ans;

    //prompts the user to enter a grade and type Y or No for if
    //there are more grades to enter
    //if the user selects Y to enter more grades, the for loop executes

        for (i = 0; i < 20; i++)
        {
            printf("\nEnter next grade: ");
            scanf(" %d", &grades[i]);

            printf("\nEnter another grade (Y/N)?");
            scanf(" %c", &ans);

            //if the user selects N, the for loop breaks and
            //the code skips to the bottom
            if (ans == 'n' || ans == 'N')
            {
                break;
            }
        }


    //outputs the number of grades entered and the order the grades
    //were inputted
    printf("You have entered %d grades.", i + 1);
    printf("\nThe grades you have entered are: \n");
    //for loop is used to output the grades from the array
    for (j = 0; j <= i; j++)
    {
        printf("\nGrade %d is %d.", j + 1, grades[j]);
    }

    return 0;
}
