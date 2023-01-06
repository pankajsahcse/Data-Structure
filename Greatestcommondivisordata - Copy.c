// ********* Find greatest common divisor by Recursion  // ********* 

#include<stdio.h>
int GDC(int a,int b)
{
    if (a==b)
    {
       return (a);
    }
    else if (a%b==0)
    {
        return (b);
    }
     else if (b%a==0)
    {
        return (a);
    }

    else if (a>b)
    {
        return (GDC(a%b,b));
    }
    else if (a<b)
    {
      return (GDC(a,b%a));
    }
    
}

int main(){
    int a,b;
    printf("Enter the First number :");
    scanf("%d", &a);
     printf("Enter the Second number :");
    scanf("%d", &b);

    printf("GDC OF THE NUMBER IS %d", GDC(a,b));
}