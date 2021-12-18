/**********************************************************/
/*Lab 5 Question 1                                        */
/*Name:       Jin Zhou                                    */
/*Student ID: 1091825                                     */
/*Date:       12/13/2021                                  */
/*This Program interchanges the largest and the smallest  */
/*number in an array                                      */
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
    printf("Enter the desired size of the array: ");
    scanf("%d",&n);

    read_array(a, n);
    printf("\n");
    display_array(a, n);

    return 0;
}

void read_array(int a[], int n)
{
    for (int i=0; i<n; i++)
        {
        printf("Enter a number for position %d:", i);
        scanf("%d", &a[i]);
        }
}

void display_array(int a[], int n)
{
    int min,max,min_pos=0,max_pos=0,temp;
    printf("The elements of the array are:\n");
    for (int i=0; i<n; i++)
        {
            printf("arr[%d]=%d ", i, a[i]);
        }
    printf("\n");

    min=a[0];
    max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min)
        {
            min=a[i];
            min_pos=i;
        }

        if(a[i]>max)
        {
            max=a[i];
            max_pos=i;
       }
    }

    temp=a[min_pos];
    a[min_pos]=a[max_pos];
    a[max_pos]=temp;

    printf("\n\n");
    printf("The elements of the array after the interchange are:\n");

    for(int i=0;i<n;i++)
        printf("arr[%d]=%d ", i, a[i]);

    printf("\n");
}
/*
Test run 1:
Enter the desired size of the array: 5
Enter a number for position 0:3
Enter a number for position 1:6
Enter a number for position 2:3
Enter a number for position 3:7
Enter a number for position 4:9

The elements of the array are:
arr[0]=3 arr[1]=6 arr[2]=3 arr[3]=7 arr[4]=9


The elements of the array after the interchange are:
arr[0]=9 arr[1]=6 arr[2]=3 arr[3]=7 arr[4]=3

Test run 2:
Enter the desired size of the array: 4
Enter a number for position 0:8
Enter a number for position 1:7
Enter a number for position 2:2
Enter a number for position 3:16

The elements of the array are:
arr[0]=8 arr[1]=7 arr[2]=2 arr[3]=16


The elements of the array after the interchange are:
arr[0]=8 arr[1]=7 arr[2]=16 arr[3]=2

Test run 3:
Enter the desired size of the array: 5
Enter a number for position 0:38
Enter a number for position 1:17
Enter a number for position 2:95
Enter a number for position 3:37
Enter a number for position 4:12

The elements of the array are:
arr[0]=38 arr[1]=17 arr[2]=95 arr[3]=37 arr[4]=12


The elements of the array after the interchange are:
arr[0]=38 arr[1]=17 arr[2]=12 arr[3]=37 arr[4]=95
*/
