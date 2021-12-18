/**********************************************************/
/*Lab 5 Question 5                                        */
/*Name:       Jin Zhou                                    */
/*Student ID: 1091825                                     */
/*Date:       12/13/2021                                  */
/*This Program reads a sentence which is a single string  */
/*then counts the number of characters in the text entered*/
/*                                                        */
/**********************************************************/
#include <stdio.h>


int main()
{
    // I suppose the string max length is 100.
    int i=0, count=0;
    char str[100];
    printf("Enter the sentence : ");
    fgets(str, sizeof str, stdin);

    while(str[i]!='\0'){
        if (str[i]==' ' || str[i] =='\n' || str[i]=='\t'){
            count++;
        }
        i++;
    }
    printf("The total count of the words is : %d\n", count);
}
/*
Test run 1:
Enter the sentence : How are you
The total count of the words is : 3

Test run 2:
Enter the sentence : I wish you a Merry Christmas and happy new year!
The total count of the words is : 10

Test run 3:
Enter the sentence : Running regularly develops strong leg muscles.
The total count of the words is : 6
*/
