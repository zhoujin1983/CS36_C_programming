/*******************************************************/
/*Name:       Jin Zhou                                 */
/*Student ID: 1091825                                  */
/*Homework 1 Program Set 1                             */
/*Date:       9/16/2021                                */
/*This Program obtains user's three initials and the   */
/*quantities of coins in the order of quarters, dimes  */
/*nickels and pennies, then computes and displays      */
/*the total value of the coins                         */
/*                                                     */
/*******************************************************/


#include<stdio.h>

int main()
{
  //Declaration
  char first, middle, last;
  int num_of_q, num_of_d,num_of_n,num_of_p,num_of_dl,num_of_c, total_c;

  //data/input
  printf("Enter your initials, first, middle and last: ");
  scanf("%c%c%c",&first,&middle,&last);
  printf("\n");
  printf("Hello %c.%c.%c., let's see what your coins are worth.\n",first,middle,last);
  printf("Enter number of quarters: ");
  scanf("%d",&num_of_q);
  printf("Enter number of dimes: ");
  scanf("%d",&num_of_d);
  printf("Enter number of nickels: ");
  scanf("%d",&num_of_n);
  printf("Enter number of pennies: ");
  scanf("%d",&num_of_p);
  printf("\n");
  //processing
  total_c = num_of_q * 25 + num_of_d * 10 + num_of_n * 5 + num_of_p * 1;
  num_of_dl = total_c / 100;
  num_of_c = total_c % 100;

  //output
  printf("Number of quarters is %d.\n",num_of_q);
  printf("Number of dimes is %d.\n",num_of_d);
  printf("Number of nickels is %d.\n",num_of_n);
  printf("Number of pennies is %d.\n",num_of_p);
  printf("\n");
  printf("Your coins are worth %d dollars and %d cents.",num_of_dl,num_of_c);

  return 0;
}
/*
Test run 1
Enter your initials, first, middle and last: JTK

Hello J.T.K., let's see what your coins are worth.
Enter number of quarters: 4
Enter number of dimes: 0
Enter number of nickels: 0
Enter number of pennies: 0

Number of quarters is 4.
Number of dimes is 0.
Number of nickels is 0.
Number of pennies is 0.

Your coins are worth 1 dollars and 0 cents.

Test run 2
Enter your initials, first, middle and last: RHT

Hello R.H.T., let's see what your coins are worth.
Enter number of quarters: 0
Enter number of dimes: 10
Enter number of nickels: 0
Enter number of pennies: 0

Number of quarters is 0.
Number of dimes is 10.
Number of nickels is 0.
Number of pennies is 0.

Your coins are worth 1 dollars and 0 cents.

Test run 3
Enter your initials, first, middle and last: AGM

Hello A.G.M., let's see what your coins are worth.
Enter number of quarters: 8
Enter number of dimes: 4
Enter number of nickels: 3
Enter number of pennies: 6

Number of quarters is 8.
Number of dimes is 4.
Number of nickels is 3.
Number of pennies is 6.

Your coins are worth 2 dollars and 61 cents.

Test run  4
Enter your initials, first, middle and last: WSO

Hello W.S.O., let's see what your coins are worth.
Enter number of quarters: 5
Enter number of dimes: 10
Enter number of nickels: 7
Enter number of pennies: 5

Number of quarters is 5.
Number of dimes is 10.
Number of nickels is 7.
Number of pennies is 5.

Your coins are worth 2 dollars and 65 cents.

Test run 5
Enter your initials, first, middle and last: SRL

Hello S.R.L., let's see what your coins are worth.
Enter number of quarters: 7
Enter number of dimes: 3
Enter number of nickels: 0
Enter number of pennies: 0

Number of quarters is 7.
Number of dimes is 3.
Number of nickels is 0.
Number of pennies is 0.

Your coins are worth 2 dollars and 5 cents.
*/
