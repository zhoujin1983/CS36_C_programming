/**********************************************************/
/*Lab 5 Question 6                                        */
/*Name:       Jin Zhou                                    */
/*Student ID: 1091825                                     */
/*Date:       12/13/2021                                  */
/*This Program replaces all the commas with semi colons in*/
/*a text,and displays the new texts with semi colons      */
/*                                                        */
/**********************************************************/
#include <stdio.h>

int main()
{
    // I suppose the string max length is 100.
    int n;
    char str[100];
    printf("Enter the text : ");
    n = sizeof str;
    fgets(str, n, stdin);

    for (int i=0;i<n;i++){
        if (str[i]==','){
            str[i]=';';
        }
    }
    printf("The copied text is : %s\n", str);
}

/*
Test run 1:
Enter the text : Hello, how are you
The copied text is : Hello; how are you

Test run 2:
Enter the text : Nails are still projecting out of the floor, so be careful where you walk.
The copied text is : Nails are still projecting out of the floor; so be careful where you walk.

Test run 3:
Enter the text : The wind slows down, and the storms eventually disperse.
The copied text is : The wind slows down; and the storms eventually disperse.
*/
