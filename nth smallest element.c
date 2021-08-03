/******************************************************************************

Name:Nimesh Bhavsar
Subject: CSE2012 DAA-Lab
Reg.Number: 20BCE0542

*******************************************************************************/


/**
 Consider an integer array ‘data’ and another integer ‘n’. 
 Write a program that will return the nth smallest element in the array ‘data’.
 **/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of Array");
    scanf("%d",&n);
    printf("Enter %d elements of the array",n);
    int num[n];
    
    for(int i=0;i<n;i++)
    scanf("%d",&num[i]);
    
    
    int k;
    printf("Enter nth smallest element to be searched");
    scanf("%d",&k);
    int a;
     for (int i = 0; i < k; ++i) //Sorted the code till kth element because we dont need only till kth term of Array
        for (int j = i + 1; j < n; ++j)
            if (num[i] > num[j]) 
            {
                a =  num[i];
                num[i] = num[j];
                num[j] = a;
            }
     for (int i = 0; i < n; ++i)
            printf("%d\n", num[i]);
    printf("The %dth smallest element is: %d",k,num[k-1]);
    
    return 0;
}
