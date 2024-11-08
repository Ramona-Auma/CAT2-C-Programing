//Program to calculate taxes
/*Program to calculate taxes
Author: Ramona Auma
Reg No: CT101/G/21863/24
Date: 7/11/2024
*/
#include<stdio.h>
int main(){
    float hours_worked, hourly_wage, gross_pay, taxes, net_pay;
    float regular_pay, overtime_pay, total_pay;
    float tax_rate1=0.15, tax_rate2=0.20;
    float tax_limit=600.0;

    printf("Enter hours worked in a week:");
    scanf("%f",&hours_worked);

    printf("Enter hourly wage(in dollars):");
    scanf("%f",&hourly_wage);
//calculate overtime and regular pay
    if (hours_worked<=40){
        regular_pay=hours_worked*hourly_wage;
        overtime_pay=0;
    }else(hours_worked>40);{
        overtime_pay=(hours_worked-40)*(hourly_wage*1.5);//time and a half for overtime
    }
//calculate gross pay
    gross_pay=regular_pay+overtime_pay;
    //taxes
    if (gross_pay<=tax_limit){
        taxes=gross_pay*tax_rate1; //tax rate for the first $600
    }else{
        taxes=(tax_limit*tax_rate1)+((gross_pay-tax_limit)*tax_rate2);// both first $600
        //and the rest
        //calculate net pay
        net_pay=gross_pay-taxes;

        //print result
        printf("gross pay is.2f\n",gross_pay);
        printf("taxes are .2f\n",taxes);
        printf("net pay is .2f\n",net_pay);

        return 0;
    }
 }