#include<stdio.h>
int main()
{
    int units;
    float bill;
    printf("Enter the number of units consumed: ");
    scanf("%d",&units);
    //Bill have if 1 to 50 untis thus pay 1 ruppes per unit, if 51 to 100 units thus pay 2 ruppes per unit, if 101 to 200 units thus pay 3 ruppes per unit, if 201 to 300 units thus pay 4 ruppes per unit and if above 300 units thus pay 5 ruppes per unit.Also add 20% add on final payment as surcharge.
    if(units<=50)
    {
        bill=units*1;
    }
    else if(units<=100)
    {
        bill=50*1+(units-50)*2;
    }
    else if(units<=200)
    {
        bill=50*1+50*2+(units-100)*3;
    }
    else if(units<=300)
    {
        bill=50*1+50*2+100*3+(units-200)*4;
    }
    else
    {
        bill=50*1+50*2+100*3+100*4+(units-300)*5;
    }   
    bill+=bill*0.20; // Adding 20% surcharge        
    printf("The total bill is: %.2f",bill);
    //If unit has 312 thus calculate reppes with 5 ruppes per unit and add 20% surcharge on final bill. Thus total bill is 50*1+50*2+100*3+100*4+12*5= 50+100+300+400+60=910. Now add 20% surcharge thus total bill is 910 + (910*0.20) = 1092.00
    return 0;
}