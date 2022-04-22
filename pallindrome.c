#include<stdio.h>
void main()
{

int x,rem,y;
int rev=0;

printf("enter a no  ");
scanf("%d",&x);
y=x;
while(x!=0)
{
    rem=x%10;
    rev=rev*10+rem;
    x=x/10;
    
    }
    if(y==rev)
    printf("%d no is palindrome no",rev);
    else
    printf("not");
    }