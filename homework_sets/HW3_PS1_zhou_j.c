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
  float sal, rate, raise, NewSal,totSal,totraise,totNewSal;

  //data/input
  printf("                      Salary         Rate    Raise     New Salary\n");
  printf("-----------------------------------------------------------------\n");
  printf("Salary : ");
  scanf("%f", &sal);

  //processing and output
  while (sal != -1)
  {
      if (sal >= 0 && sal < 30000)

         {rate = 0.07;}

      else if (sal >= 30000 && sal <= 40000)

         {rate = 0.055;}

      else if (sal > 40000)

          {rate = 0.04;}

      raise = sal * rate;
      NewSal = sal + raise;

      printf("                    %10.2f %10.2f %10.2f %10.2f\n",sal,rate*100,raise,NewSal);
      totSal += sal;
      totraise += raise;
      totNewSal += NewSal;

      printf("Salary : ");
      scanf("%f", &sal);
  }

    printf("-----------------------------------------------------------------\n");
    printf("Total               %10.2f            %10.2f %10.2f\n",totSal,totraise,totNewSal);

return 0;
}
/*
Test run 1:
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
Salary : -1
-----------------------------------------------------------------
Total                130000.00               7525.00  137525.00

Test run 2:
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : -1
-----------------------------------------------------------------
Total                     0.00                  0.00       0.00


Test run 3:
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 459632
                     459632.00       4.00   18385.28  478017.28
Salary : 245871
                     245871.00       4.00    9834.84  255705.84
Salary : 32678
                      32678.00       5.50    1797.29   34475.29
Salary : -1
-----------------------------------------------------------------
Total                738181.00              30017.41  768198.44


Test run 4:
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 12354
                      12354.00       7.00     864.78   13218.78
Salary : 36987
                      36987.00       5.50    2034.29   39021.29
Salary : 35000
                      35000.00       5.50    1925.00   36925.00
Salary : 48963
                      48963.00       4.00    1958.52   50921.52
Salary : -1
-----------------------------------------------------------------
Total                133304.00               6782.58  140086.58

Test run 5 :
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 36987
                      36987.00       5.50    2034.29   39021.29
Salary : 12546
                      12546.00       7.00     878.22   13424.22
Salary : 785214
                     785214.00       4.00   31408.56  816622.56
Salary : -1
-----------------------------------------------------------------
Total                834747.00              34321.06  869068.06
*/
