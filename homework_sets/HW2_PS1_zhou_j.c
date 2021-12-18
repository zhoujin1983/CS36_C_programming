/*******************************************************/
/*Name:       Jin Zhou                                 */
/*Student ID: 1091825                                  */
/*Homework 1 Program Set 1                             */
/*Date:       10/7/2021                                */
/*This Program will allow the user to select a filing  */
/*status through a menu and calculate the amount of    */
/*tax due                                              */
/*                                                     */
/*******************************************************/


#include<stdio.h>

int main()
{
  //Declaration
  char status;
  float income, tax_owed;

  printf("************Menu****************\n");
  printf("1) Single                       \n");
  printf("2) Married Filing Jointly       \n");
  printf("3) Married Filing Separately    \n");
  printf("4) Head of Household            \n");
  printf("5) Exit                         \n");
  printf("\n");
  printf("********************************\n");
  printf("\n");

  //data/input
  printf("Enter status : ");
  status = getchar();


  //if statement/processing
  if (status >= '1' && status <= '4')
  {
    printf("Enter your taxable TI: $");
    scanf("%f",&income);
    printf("\n");
    switch(status)
    {
        case '1':

            if (income <= 24000)
            {
                tax_owed = income * 0.15;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else if (income > 24000 && income <= 58000)
            {
                tax_owed = 3600.00+(income - 24000)*0.28;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else if (income > 58000 && income <= 121300)
            {
                tax_owed = 13162.00+(income - 58000)*0.31;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else if (income > 121300 && income <= 263750)
            {
                tax_owed = 32738.50+(income - 121300)*0.36;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else
            {
                tax_owed = 84020.50+(income - 263750)*0.396;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            break;

        case '2':
            if (income <= 40100)
            {
                tax_owed = income * 0.15;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else if (income > 40100 && income <= 96900)
            {
                tax_owed = 6015.00+(income - 40100)*0.28;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }

            else if (income > 96900 && income <= 147700)
            {
                tax_owed = 21919.00+(income - 96900)*0.31;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else if (income > 147700 && income <= 263750)
            {
                tax_owed = 37667.00+(income - 147700)*0.36;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else
            {
                tax_owed = 79445.00+(income - 263750)*0.396;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            break;

        case '3':
            if (income <= 20050)
            {
                tax_owed = income * 0.15;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else if (income > 20050 && income <= 48450)
            {
                tax_owed = 3007.50+(income - 20050)*0.28;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else if (income > 48450 && income <= 73850)
            {
                tax_owed = income = 10959.50+(income - 48450)*0.31;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else if (income > 73850 && income <= 131875)
            {
                tax_owed = 18833.50+(income - 73850)*0.36;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else
            {
                tax_owed = 39722.50+(income - 131875)*0.396;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            break;

        case '4':
            if (income <= 32150)
            {
                tax_owed = income * 0.15;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else if (income > 32150 && income <= 83050)
            {
                tax_owed = 4822.50+(income - 32150)*0.28;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else if (income > 83050 && income <= 134500)
            {
                tax_owed = 19074.50+(income - 83050)*0.31;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else if (income > 134500 && income <= 263750)
            {
                tax_owed = 35074.00+(income - 134500)*0.36;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            else
            {
                tax_owed = 81554.00+(income - 263750)*0.396;
                printf("The taxes owed are : $%.2f\n",tax_owed);
            }
            return 0;
   }
  }
  else if (status=='5')
  {
    printf("\n");
    printf("Exit Program...\n");
  }
  else
  {
    printf("\n");
    printf("You entered a wrong status. Program Exit ...\n");
  }
return 0;
}
/*
Test run 1
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 1
Enter your taxable TI: $50000

The taxes owed are : $10880.00

Test run 2
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 5

Exit Program...

Test run 3
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : a

You entered a wrong status. Program Exit ...


Test run 4:
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 7

You entered a wrong status. Program Exit ...


Test run 5:
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 2
Enter your taxable TI: $45000

The taxes owed are : $7387.00


Test run 6:
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 4
Enter your taxable TI: $5784567

The taxes owed are : $2267797.50


Test run 7:
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : f

You entered a wrong status. Program Exit ...


Test run 8:
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 6

You entered a wrong status. Program Exit ...
*/
