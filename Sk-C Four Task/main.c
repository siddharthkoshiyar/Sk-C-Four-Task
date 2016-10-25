//
//  main.c
//  Sk-C Four Task
//
//  Created by Student P_04 on 25/10/16.
//  Copyright © 2016 Siddharth Koshiyar. All rights reserved.
//

#include <stdio.h>
void primefactor(int number1);
void leapyear(int year);
void sumofalldigits(int number2);
void reverseorder(int number3);
int number1,year,number2,number3;
int main()
{
    int choice;
    printf("Enter the number between 1 to 4 below given choice\n");
    printf(" 1. Prime Factor\n");
    printf(" 2. Leapyear\n");
    printf(" 3. sum of all digits\n");
    printf(" 4. reverser order\n");
    scanf("%d",&choice);
    switch(choice)
    
    {
            
        case 1:
            primefactor(number1);
            break;
            
        case 2:
            leapyear(year);
            break;
            
        case 3:
            sumofalldigits(number2);
            break;
            
        case 4:
            reverseorder(number3);
            break;
            
    }
}
void primefactor(int number1)
{
    int i;
    printf("Enter the number\n");
    scanf("%d",&number1);
    for(i=2;number1>1;i++)
    {
        while(number1%i==0)
        {
            printf("%d ",i);
            number1=number1/i;
        }
    }
    
   }

void sumofalldigits(int number2)
{
    int sum=0,r;
    printf("Enter a number: ");
    scanf("%d",&number2);
    while(number2){
        r=number2%10;
        number2=number2/10;
        sum=sum+r;
    }
    printf("Sum of digits is %d",sum);
    
}

void leapyear(year)
{
    
    
    printf("Enter a year\n");
    scanf("%d", &year);
    
    if ( year%400 == 0)
        printf("%d is a leap year\n",year);
    else if ( year%100 == 0)
        printf("%d is not a leap year\n",year);
    else if ( year%4 == 0 )
        printf("%d is a leap year\n",year);
    else
        printf("%d is not a leap year\n",year);
}
void reverseorder(int number3)
{
    int reversenumber=0;
    
    
    printf("Enter a number to reverse\n");
    scanf("%d", &number3);
    
    while (number3!= 0)
    {
        reversenumber = reversenumber * 10;
        reversenumber = reversenumber + number3%10;
        number3= number3/10;
    }
    
    printf("reverse number is %d\n",reversenumber);
}


