#include<stdio.h>

int fact (int n);

int main()
{
    int n, ans;

    printf("Enter a number: ");
    scanf("%d",&n);

    ans = fact(n);

    printf("The factorial of %d is %d \n",n,ans);
    return 0;
}


int fact (int n)
{   
    int y;

    if (n==1)
    {
        return 1;
    }
    y = (n * fact(n-1));
    
    return  y;
}


