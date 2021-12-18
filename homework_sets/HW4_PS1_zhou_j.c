/**********************************************************/
/*Program Set 1                                           */
/*Name:       Jin Zhou                                    */
/*Student ID: 1091825                                     */
/*Date:       11/17/2021                                  */
/*This Program determines calculates salary raise for     */
/*employees with functions                                */
/*                                                        */
/**********************************************************/

#include <stdio.h>

//function prototype
void load(char *, float *);
float determine_rate(float salary);
float cal_raise(float rate, float salary);
float cal_new_salary(float salary, float raise);

void output(char name[], float salary, float rate, float raise, float new_salary);
void total(float salary, float raise, float new_salary);

int main()
{
    //Declaration
    int n;
    char name[20];
    float salary, rate, raise, new_salary;
    float total_salary=0, total_raise=0, total_new_salary=0;

    //Data/input
    printf("How many employees : ");
    scanf(" %d", &n);
    getchar(); // I add this here to get rid of new line character in buffer

    //Processing & output
    for (int i =0; i<n; i++)
    {
        load(&name, &salary);
        rate = determine_rate(salary);
        raise = cal_raise(rate, salary);
        new_salary = cal_new_salary(salary, raise);
        total_salary += salary;
        total_raise += raise;
        total_new_salary += new_salary;
        output(name, salary, rate, raise, new_salary);
    }
    total(total_salary, total_raise, total_new_salary);
    return 0;

}


void load(char *name, float *salary)
{
    printf("\n");
    printf("Enter the Employee's name: ");
    gets(name);
    printf("Enter salary : ");
    scanf("%f", &(*salary));
    getchar(); // I add this here to get rid of new line character in buffer
}

float determine_rate(float salary)
{
    float rate = 0;
    if (salary <30000)
        rate = 0.07;
    else if (salary<=40000)
        rate = 0.055;
    else
        rate = 0.04;
    return rate;
}

float cal_raise(float rate, float salary)
{
    return rate*salary;
}

float cal_new_salary(float salary, float raise)
{
    return salary+raise;
}

void output(char name[], float salary, float rate, float raise, float new_salary)
{
    printf("\n");
    printf("Employee\'s Name   : %s\n", name);
    printf("Salary            : %13.2f\n", salary);
    printf("Rate              : %12.1f%%\n", rate*100);
    printf("Raise             : %13.2f\n", raise);
    printf("New salary        : %13.2f\n", new_salary);
}

void total(float total_salary, float total_raise, float new_salary){
    printf("\n");
    printf("Total salary      : %13.2f\n", total_salary);
    printf("Total raise       : %13.2f\n",  total_raise);
    printf("Total new salary  : %13.2f\n", new_salary);
}
/*
Test run 1:
How many employees : 2

Enter the Employee's name: Daisy Yellow
Enter salary : 25000.00

Employee's Name   : Daisy Yellow
Salary            :      25000.00
Rate              :          7.0%
Raise             :       1750.00
New salary        :      26750.00

Enter the Employee's name: Rose Red
Enter salary : 30000.00

Employee's Name   : Rose Red
Salary            :      30000.00
Rate              :          5.5%
Raise             :       1650.00
New salary        :      31650.00

Total salary      :      55000.00
Total raise       :       3400.00
Total new salary  :      58400.00

Test run 2:
How many employees : 3

Enter the Employee's name: Marigold Orange
Enter salary : 40000.00

Employee's Name   : Marigold Orange
Salary            :      40000.00
Rate              :          5.5%
Raise             :       2200.00
New salary        :      42200.00

Enter the Employee's name: Iris Blue
Enter salary : 40001.00

Employee's Name   : Iris Blue
Salary            :      40001.00
Rate              :          4.0%
Raise             :       1600.04
New salary        :      41601.04

Enter the Employee's name: Lilacs Purple
Enter salary : 45000.00

Employee's Name   : Lilacs Purple
Salary            :      45000.00
Rate              :          4.0%
Raise             :       1800.00
New salary        :      46800.00

Total salary      :     125001.00
Total raise       :       5600.04
Total new salary  :     130601.04

Test run 3:
How many employees : 1

Enter the Employee's name: Periwinkle Pink
Enter salary : 35000.00

Employee's Name   : Periwinkle Pink
Salary            :      35000.00
Rate              :          5.5%
Raise             :       1925.00
New salary        :      36925.00

Total salary      :      35000.00
Total raise       :       1925.00
Total new salary  :      36925.00

Test run 4:
How many employees : 2

Enter the Employee's name: William White
Enter salary : 654820.00

Employee's Name   : William White
Salary            :     654820.00
Rate              :          4.0%
Raise             :      26192.80
New salary        :     681012.81

Enter the Employee's name: Bob Black
Enter salary : 12587.00

Employee's Name   : Bob Black
Salary            :      12587.00
Rate              :          7.0%
Raise             :        881.09
New salary        :      13468.09

Total salary      :     667407.00
Total raise       :      27073.89
Total new salary  :     694480.88

Test run 5:
How many employees : 5

Enter the Employee's name: Daisy Yellow
Enter salary : 25000.00

Employee's Name   : Daisy Yellow
Salary            :      25000.00
Rate              :          7.0%
Raise             :       1750.00
New salary        :      26750.00

Enter the Employee's name: Rose Red
Enter salary : 30000.00

Employee's Name   : Rose Red
Salary            :      30000.00
Rate              :          5.5%
Raise             :       1650.00
New salary        :      31650.00

Enter the Employee's name: Iris Blue
Enter salary : 40001.00

Employee's Name   : Iris Blue
Salary            :      40001.00
Rate              :          4.0%
Raise             :       1600.04
New salary        :      41601.04

Enter the Employee's name: Grey Gray
Enter salary : 50000.00

Employee's Name   : Grey Gray
Salary            :      50000.00
Rate              :          4.0%
Raise             :       2000.00
New salary        :      52000.00

Enter the Employee's name: Max Gold
Enter salary : 35489.00

Employee's Name   : Max Gold
Salary            :      35489.00
Rate              :          5.5%
Raise             :       1951.90
New salary        :      37440.89

Total salary      :     180490.00
Total raise       :       8951.94
Total new salary  :     189441.92
*/
