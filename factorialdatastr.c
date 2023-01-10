// *********** Factorial series in c language // ***********

// #include <stdio.h>
// int main()
// {
//     int n, fact = 1, i;

//     printf("Enter the number :");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     printf("The factorial of %d is =%d", n, fact);

//     return 0;
// }






// *********** Factorial series in data structure by Recursion  // ***********

// *********** Recursion >>>> Any function which call itself is known as Recursion or Recursive.

// 5= 5*4*3*2*1=120
// fact (5) = 5* fact(4)
//               4*fact(3)
//                  3*fact(2)
//                     2*fact(1)
//                        1*fact(0)




// Code for factorial number by recursion
#include<stdio.h>

int fact(int n)
{
    if (n>0)
    {
      return (n*fact(n-1));
    }
    else 
    {
       return (1);
    }
    
}
int main(){
    int n;
    printf("Enter a number which you want to factorial :");
    scanf("%d", &n);

    printf("factorial of this number is %d", fact(n));


}


