/**********************************************************/
/*Lab 5 Question 4                                        */
/*Name:       Jin Zhou                                    */
/*Student ID: 1091825                                     */
/*Date:       12/13/2021                                  */
/*This Program reads and prints the text until * is       */
/*encountered                                             */
/*                                                        */
/**********************************************************/
#include <stdio.h>

int main()
{
    int i=0;
    // I suppose the string max length is 100.
    char ch, str[100];
    printf("Enter * to end \n");
    printf("Enter the text : ");

    ch = getchar();
    while (ch != '*')
    {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';

    printf("The text is : %s\n", str);
    printf("The count of the characters is : %d\n", i);
}
/*
Test run 1:
Enter * to end
Enter the text : Hi there*
The text is : Hi there
The count of the characters is : 8

Test run 2:
Enter * to end
Enter the text : How are you*Ok
The text is : How are you
The count of the characters is : 11

Test run 3:
Enter * to end
Enter the text : Good morning ladies!*
The text is : Good morning ladies!
The count of the characters is : 20
*/
