/**********************************************************/
/*Lab 5 Question 3                                        */
/*Name:       Jin Zhou                                    */
/*Student ID: 1091825                                     */
/*Date:       12/13/2021                                  */
/*This Program finds whether the array of integers contain*/
/*a duplicate number                                      */
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
    printf("Enter the desired size of the array:");
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
        scanf("%d", &a[i]);
        }
}

void display_array(int a[], int n)
{
    printf("The numbers you entered are: ");
    for (int i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
    printf("\n");

    int found_duplicates = 0;
    for (int i =0;i<n;i++){
        for (int j=i+1;j<=n;j++){
            if (a[i]==a[j]){
                found_duplicates = 1;
                printf("Duplicated number %d found at location %d and %d\n", a[i], i, j);
            }
        }
    }

    if (found_duplicates==0){
        printf("No duplicates are found in array\n");
    }
    printf("\n");
}
/*
Test run 1:
Enter the desired size of the array:6
1
2
3
3
4
5

The numbers you entered are: 1 2 3 3 4 5
Duplicated number 3 found at location 2 and 3

Test run 2:
Enter the desired size of the array:6
1
2
3
4
5
6

The numbers you entered are: 1 2 3 4 5 6
No duplicates are found in array

Test run 3:
Enter the desired size of the array:6
1
2
3
2
4
2

The numbers you entered are: 1 2 3 2 4 2
Duplicated number 2 found at location 1 and 3
Duplicated number 2 found at location 1 and 5
Duplicated number 2 found at location 3 and 5
*/
