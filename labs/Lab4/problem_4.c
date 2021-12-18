/**********************************************************/
/*Lab 4 Question 4                                        */
/*Name:       Jin Zhou                                    */
/*Student ID: 1091825                                     */
/*Date:       11/17/2021                                  */
/*This Program calculates a salesperson's pay with        */
/*function                                                */
/**********************************************************/

#include<stdio.h>

//function prototype
float get_sales();
float get_advanced_pay();
float determine_comm_rate(float sales);


int main()

{
//declaration
double sales, advanced_pay, comm_rate, pay;


//call functions
sales = get_sales();
advanced_pay = get_advanced_pay();
comm_rate = determine_comm_rate(sales);


//calculations

pay = sales * comm_rate - advanced_pay;


//output
printf("The pay is $%.2f", pay);
if(pay < 0)
{
    printf("\nThe salesperson must reimburse the company.");
}
return 0;
}

float get_sales()
{
    float sales;
    printf("Enter the monthly sales: ");
    scanf("%f", &sales);
    return sales;

}

float get_advanced_pay()
{
    float advanced_pay;
    printf("Enter the amount of advanced pay, or enter 0 if no advanced pay was given.\n");
    printf("Advanced pay: ");
    scanf("%f", &advanced_pay);
    return advanced_pay;
}

float determine_comm_rate(float sales)
{
    float comm_rate = 0;

    if (sales < 10000.00)
        comm_rate = 0.10;
    else if (sales <= 14999.99)
        comm_rate = 0.12;
    else if (sales <= 17999.99)
        comm_rate = 0.14;
    else if (sales <= 21999.99)
        comm_rate =  0.16;
    else
        comm_rate = 0.18;
    return comm_rate;

}

/*
Test run 1:
Enter the monthly sales: 14550.00
Enter the amount of advanced pay, or enter 0 if no advanced pay was given.
Advanced pay: 1000.00
The pay is $746.00

Test run 2:
Enter the monthly sales: 9500
Enter the amount of advanced pay, or enter 0 if no advanced pay was given.
Advanced pay: 0
The pay is $950.00

Test run 3 :
Enter the monthly sales: 12000.00
Enter the amount of advanced pay, or enter 0 if no advanced pay was given.
Advanced pay: 2000.00
The pay is $-560.00
The salesperson must reimburse the company.
*/



