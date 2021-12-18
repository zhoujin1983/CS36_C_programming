/**********************************************************/
/*Homework 5 Program Set 1                                */
/*Name:       Jin Zhou                                    */
/*Student ID: 1091825                                     */
/*Date:       12/13/2021                                  */
/*This Program calculates salary raise for employees      */
/*by using functions                                      */
/*                                                        */
/**********************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 6

struct Employee
{
//declare your struct data members here
    char name[20];
    float sal;
    float rate;
    float raise;
    float newSal;
};

//function prototype here

void load(struct Employee e[], int n);
void ARate(struct Employee e[], int n);
void calcRaise(struct Employee e[], int n);
void sort(struct Employee e[], int n);
void total(struct Employee e[], int n,float *ts,float *tr,float *tn);
void title();
void print(struct Employee e[], int n);
void printTotals(float ts,float tr, float tn);
void savetext(struct Employee e[], int n);
void getText(struct Employee e[], int n);
void savebn(struct Employee e[], int n);
void getbn(struct Employee e[], int n);

int main()
{
    //declaration of variables
    struct Employee e[SIZE];
    float ts,tr,tn;
    //load data into struct, calculate raises, salaries and new salaries and print the original array of struct

    load(e,SIZE);
    ARate(e,SIZE);
    calcRaise(e,SIZE);
    total(e,SIZE,&ts,&tr,&tn);
    printf("Original Array of Structure before Sorting\n\n");
    title();
    print(e,SIZE);
    printTotals(ts,tr,tn);

    // sort the struct of array and print the sorted struct of array
    sort(e,SIZE);
    total(e,SIZE,&ts,&tr,&tn);
    printf("Array of Structure after Sorting\n\n");
    title();

    print(e,SIZE);
    printTotals(ts,tr,tn);

    //**************Section for text files*****************
    printf("\n\n");
    printf("From Save Text file\n\n");
    title();
    //save the struct of array to a text file
    savetext(e,SIZE);
    //retrieve the text file and print the data
    getText(e,SIZE);
    print(e,SIZE);
    total(e,SIZE,&ts,&tr,&tn);
    printTotals(ts,tr,tn);

    //**************Section for binary files*****************
    printf("\n\n");
    printf("From Save Binary file\n\n");
    title();
    //save struct of array to a binary file
    savebn(e,SIZE);
    //retrieve data from binary file and print the data
    getbn(e,SIZE);
    print(e,SIZE);
    total(e,SIZE,&ts,&tr,&tn);
    printTotals(ts,tr,tn);
    return 0;
}


void load (struct Employee e[], int n)
{
//write the codes to let user enter employee’s name and salary
    for (int i=0;i<n;i++){
        printf("Enter the employee's name: ");
        fgets(e[i].name, 20, stdin);
        // replace the last input '\n' to end of string '\0'
        int j=0;
        while (e[i].name[j]!='\n'){
        j++;
        }
        e[i].name[j]='\0';
        printf("Enter Salary: ");
        scanf("%f", &e[i].sal);
        getchar();
    }
}


void ARate(struct Employee e[], int n)
{
//assign each employee rate to the struct’s rate data member here by checking salary range
    for (int i=0;i<n;i++){
        if(e[i].sal >= 0.00 && e[i].sal < 30000.00){
            e[i].rate = 7.00;
        }
        else if (e[i].sal >= 30000.00 && e[i].sal <= 40000.00){
            e[i].rate = 5.50;
        }
        else if (e[i].sal > 40000.00){
            e[i].rate = 4.00;
        }
    }
}


void calcRaise(struct Employee e[], int n)
{
//calculate the raise and new salary for each employee and store into the struct’s raise and new salary data members
    for (int i=0;i<n;i++){
        e[i].raise = e[i].sal * e[i].rate/100;
        e[i].newSal = e[i].sal +e[i].raise;
    }
}


void sort(struct Employee e[], int n)
{
//sort the struct in ascending order
    struct Employee temp;
    for (int i=0;i<n-1;i++)
        for (int j=0;j<n-1;j++)
            if (strcmp(e[j].name,e[j+1].name)>0){
                temp = e[j];
                e[j] = e[j+1];
                e[j+1] = temp;
            }
}


void total(struct Employee e[], int n, float *ts, float *tr, float *tn )
{
    *ts = 0;
    *tr = 0;
    *tn = 0;
    for (int i=0;i<n;i++){
        *ts+=e[i].sal;
        *tr+=e[i].raise;
        *tn+=e[i].newSal;
    }
}


void title()
{
    printf("\t\t\tCalculation of Salary Raises\n\n");
    printf("Employee\t");
    printf("Salary\t\t");
    printf("Rate  \t");
    printf("Raise\t\t");
    printf("New Salary\n\n");
}


void print(struct Employee e[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%s\t\t", e[i].name);
        printf("%10.2f\t", e[i].sal);
        printf("%4.2f\t", e[i].rate);
        printf("%8.2f\t", e[i].raise);
        printf("%8.2f\t\n", e[i].newSal);
    }
}


void printTotals(float ts,float tr, float tn)
{
    printf("Total\t\t");
    printf("%10.2f\t\t", ts);
    printf("%8.2f\t", tr);
    printf("%8.2f\n\n", tn);
}


void savetext(struct Employee e[], int n)
{
//save the struct to text file employees.txt
    FILE *f;
    f = fopen("employees.txt", "w");
    for (int i=0;i<n;i++){
        fprintf(f, "%s\n", e[i].name);
        fprintf(f, "%f %f %f %f\n", e[i].sal, e[i].rate, e[i].raise, e[i].newSal);
    }
    fclose(f);
}


void getText(struct Employee e[], int n)
{
//retrieve the data from employees.txt file
    FILE *f;
    f = fopen("employees.txt", "r");
    for (int i=0;i<n;i++){
        fgets(e[i].name, sizeof e[i].name, f);
        // replace the last input '\n' to end of string '\0'
        int j=0;
        while (e[i].name[j]!='\n'){
        j++;
        }
        e[i].name[j]='\0';
        fscanf(f, "%f %f %f %f\n", &e[i].sal, &e[i].rate, &e[i].raise, &e[i].newSal);
    }
    fclose(f);
}


void savebn(struct Employee e[], int n)
{
//save the struct to a binary file employees.bin
    FILE *f;
    f = fopen("employees.bin", "wb");
    fwrite(&e[0], sizeof e[0], n, f);
    fclose(f);
}


void getbn(struct Employee e[], int n)
{
//retrieve the data from the employees.bin file
    FILE *f;
    f = fopen("employees.bin", "rb");
    fread(&e[0], sizeof e[0], n, f);
    fclose(f);
}
/*
Test run 1:
Enter the employee's name: Susan
Enter Salary: 25000
Enter the employee's name: Jim
Enter Salary: 30000
Enter the employee's name: Gloria
Enter Salary: 35000
Enter the employee's name: Ros
Enter Salary: 40000
Enter the employee's name: Ben
Enter Salary: 40001
Enter the employee's name: Tim
Enter Salary: 45000
Original Array of Structure before Sorting

                        Calculation of Salary Raises

Employee        Salary          Rate    Raise           New Salary

Susan             25000.00      7.00     1750.00        26750.00
Jim               30000.00      5.50     1650.00        31650.00
Gloria            35000.00      5.50     1925.00        36925.00
Ros               40000.00      5.50     2200.00        42200.00
Ben               40001.00      4.00     1600.04        41601.04
Tim               45000.00      4.00     1800.00        46800.00
Total            215001.00              10925.04        225926.03

Array of Structure after Sorting

                        Calculation of Salary Raises

Employee        Salary          Rate    Raise           New Salary

Ben               40001.00      4.00     1600.04        41601.04
Gloria            35000.00      5.50     1925.00        36925.00
Jim               30000.00      5.50     1650.00        31650.00
Ros               40000.00      5.50     2200.00        42200.00
Susan             25000.00      7.00     1750.00        26750.00
Tim               45000.00      4.00     1800.00        46800.00
Total            215001.00              10925.04        225926.03



From Save Text file

                        Calculation of Salary Raises

Employee        Salary          Rate    Raise           New Salary

Ben               40001.00      4.00     1600.04        41601.04
Gloria            35000.00      5.50     1925.00        36925.00
Jim               30000.00      5.50     1650.00        31650.00
Ros               40000.00      5.50     2200.00        42200.00
Susan             25000.00      7.00     1750.00        26750.00
Tim               45000.00      4.00     1800.00        46800.00
Total            215001.00              10925.04        225926.03



From Save Binary file

                        Calculation of Salary Raises

Employee        Salary          Rate    Raise           New Salary

Ben               40001.00      4.00     1600.04        41601.04
Gloria            35000.00      5.50     1925.00        36925.00
Jim               30000.00      5.50     1650.00        31650.00
Ros               40000.00      5.50     2200.00        42200.00
Susan             25000.00      7.00     1750.00        26750.00
Tim               45000.00      4.00     1800.00        46800.00
Total            215001.00              10925.04        225926.03

*/
