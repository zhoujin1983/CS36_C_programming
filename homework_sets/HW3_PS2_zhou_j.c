/*******************************************************/
/*Name:       Jin Zhou                                 */
/*Student ID: 1091825                                  */
/*Homework 3 Program Set 1                             */
/*Date:       10/28/2021                               */
/*This Program calculates salary raise for employees   */
/*                                                     */
/*                                                     */
/*                                                     */
/*******************************************************/


#include<stdio.h>

int main()
{
  //Declaration
  int times;
  float sal, rate, raise, NewSal,totSal,totraise,totNewSal;

  //data/input
  printf("How many salaries do you want to enter? ");
  scanf("%d", &times);
  printf("                      Salary         Rate    Raise     New Salary\n");
  printf("-----------------------------------------------------------------\n");


  //processing and output
  for (int i = 1; i<=times; i++ )
  {
      printf("Salary : ");
      scanf("%f", &sal);
      if (sal >= 0 && sal < 30000)

         {
             rate = 0.07;
             raise = sal * rate;
             NewSal = sal + raise;
         }

      if (sal >= 30000 && sal <= 40000)

         {
             rate = 0.055;
             raise = sal * rate;
             NewSal = sal + raise;
          }

      if (sal > 40000)

          {
              rate = 0.04;
              raise = sal * rate;
              NewSal = sal + raise;

          }


      printf("                    %10.2f %10.2f %10.2f %10.2f\n",sal,rate*100,raise,NewSal);
      totSal += sal;
      totraise += raise;
      totNewSal += NewSal;
  }

    printf("-----------------------------------------------------------------\n");
    printf("Total               %10.2f            %10.2f %10.2f\n",totSal,totraise,totNewSal);

return 0;
}
/*
Test run 1:
How many salaries do you want to enter? 4
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 25000
                      25000.00       7.00    1750.00   26750.00
Salary : 30000
                      30000.00       5.50    1650.00   31650.00
Salary : 35000
                      35000.00       5.50    1925.00   36925.00
Salary : 40000
                      40000.00       5.50    2200.00   42200.00
-----------------------------------------------------------------
Total                130000.00               7525.00  137525.00

Test run 2:
How many salaries do you want to enter? 3
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 45632
                      45632.00       4.00    1825.28   47457.28
Salary : 75623
                      75623.00       4.00    3024.92   78647.92
Salary : 12000
                      12000.00       7.00     840.00   12840.00
-----------------------------------------------------------------
Total                133255.00               5690.20  138945.20

Test run 3:
How many salaries do you want to enter? 2
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 736954
                     736954.00       4.00   29478.16  766432.19
Salary : 365847
                     365847.00       4.00   14633.88  380480.88
-----------------------------------------------------------------
Total               1102801.00              44112.04 1146913.00
*/
