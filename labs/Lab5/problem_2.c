/**********************************************************/
/*Lab 5 Question 2                                        */
/*Name:       Jin Zhou                                    */
/*Student ID: 1091825                                     */
/*Date:       12/13/2021                                  */
/*This Program finds the second largest integer number    */
/*using array of numbers                                  */
/*                                                        */
/**********************************************************/
#include <stdio.h>

//function prototype
void read_array(int a[], int n);
void display_array(int a[], int n);

int main()
{
    //Declaration
    int size=100;
    int n, a[size];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\n");

    read_array(a, n);
    display_array(a, n);

    return 0;
}

void read_array(int a[], int n)
{
    for (int i=0; i<n; i++)
        {
        printf("Enter the number: ");
        scanf("%d", &a[i]);
        }
}

void display_array(int a[], int n)
{
    int max1, max2;
    printf("\n");
    printf("The numbers you entered are: ");
    for (int i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
    printf("\n");

    max1=a[0];
    max2=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        if (a[i]>max2 && a[i]!=max1)
        {
            max2 =a[i];
        }
    }

    printf("The largest of these numbers is: %d\n", max1);
    printf("The second largest of these numbers is: %d", max2);

    printf("\n");
}
/*
Test run 1:
Enter the number of elements in the array: 6

Enter the number: 10
Enter the number: 35
Enter the number: 60
Enter the number: 34
Enter the number: 20
Enter the number: 46

The numbers you entered are: 10 35 60 34 20 46
The largest of these numbers is: 60
The second largest of these numbers is: 46

Test run 2:
Enter the number of elements in the array: 6

Enter the number: 12
Enter the number: 47
Enter the number: 52
Enter the number: 75
Enter the number: 68
Enter the number: 18

The numbers you entered are: 12 47 52 75 68 18
The largest of these numbers is: 75
The second largest of these numbers is: 68

Test run 3:
Enter the number of elements in the array: 4

Enter the number: 49
Enter the number: 57
Enter the number: 63
Enter the number: 87

The numbers you entered are: 49 57 63 87
The largest of these numbers is: 87
The second largest of these numbers is: 63
*/
