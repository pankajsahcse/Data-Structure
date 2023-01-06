// ********Fabonacci series in c language  // ********

// #include <stdio.h>
// int main() {

//   int i, n;

 
//   int t1 = 0, t2 = 1;
//  // initialize first and second terms
//   // initialize the next term (3rd term)
//   int nextTerm = t1 + t2;

 
//   printf("Enter the number of terms: ");
//   scanf("%d", &n);

//   // print the first two terms t1 and t2
// //   printf("Fibonacci Series: %d, %d, ", t1, t2);

//   // print 3rd to nth terms
//   for (i = 1; i <= n; ++i) {
//      nextTerm = t1 + t2;
//     printf("%d, ", nextTerm);
//     t1 = t2;
//     t2 = nextTerm;
   
//   }

//   return 0;
// }




// ******** Fabonacci series by Recursion // ********


#include<stdio.h>

int fab(int n)
{
  if (n==1 || n==2)
  {
   return (1);
  }
  else{
    return (fab(n-1)+fab(n-2));
  }
  
}

int main(){
  int n;
  printf("Enter a number till fabonacci series you want :");
  scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
 printf(" %d", fab(i));
}

}