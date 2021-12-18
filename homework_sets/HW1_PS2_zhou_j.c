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


Test run 5:
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
*/
