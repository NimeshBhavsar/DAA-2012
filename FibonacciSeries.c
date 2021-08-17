//Nimesh Bhavsar
//20BCE0542



#include <stdio.h>

int fiboRec(int n){
    if(n<2)
    return (n);
    
    return(fiboRec(n-1)+fiboRec(n-2));
}
int fiboItr(int n){
    int a=0,b=1,c;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main()
{
    int n;
    printf("//20BCE0542");
    printf("\nEnter a Number");
    scanf("%d",&n);
    int f1=fiboRec(n);
    int f2=fiboItr(n);
    printf("Recursion method: %d",f1);
    printf("\nIteration method: %d",f2);

    return 0;
}
