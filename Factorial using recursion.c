/******************************************************************************

Name:Nimesh Bhavsar
Subject: CSE2012 DAA-Lab
Reg.Number: 20BCE0542

*******************************************************************************/


/**
 Finding Factorial using recursion
 **/
#include<stdio.h>
long int MultNum(int n);
int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, MultNum(n));
    return 0;
}

long int MultNum(int n) {
    if (n>=1)
        return n*MultNum(n-1);
    else
        return 1;
}

