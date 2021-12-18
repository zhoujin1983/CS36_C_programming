/**********************************************************/
/*Lab 5 Question 7                                        */
/*Name:       Jin Zhou                                    */
/*Student ID: 1091825                                     */
/*Date:       12/13/2021                                  */
/*This Program counts the number of times the pattern is  */
/*repeated in the text                                    */
/*                                                        */
/**********************************************************/
#include <stdio.h>

int main()
{

    int n1=0, n2=0, count=0;
    int match=0;
    char str[100], pattern[100];

    printf("Enter string : ");
    fgets(str, sizeof str, stdin);

    printf("Enter the pattern : ");
    fgets(pattern, sizeof pattern, stdin);
    printf("\n");

    while(str[n1]!='\0'){
        n1++;
    }

    while(pattern[n2]!='\0'){
        n2++;
    }

    n1-=1;
    n2-=1;

    for (int i=0;i<n1-n2+1;i++){

        match = 0;
        for (int j=0;j<n2;j++){
            if (str[i+j]==pattern[j]){
                match=1;
            }
            else {
                match =0;
                break;
                }
            }


        if (match ==1){
        count++;
        }
    }

    if (count >0){
        printf("Pattern found %d times\n", count);
    }
    else{
        printf("Pattern not found \n");
    }
}
/*
Test run 1:
Enter string : She sells sea shells on the sea shore
Enter the pattern : sea

Pattern found 2 times

Test run 2:
Enter string : Some people farther down the coast evacuate to go to a safer areas.
Enter the pattern : to

Pattern found 2 times

Test run 3:


*/
