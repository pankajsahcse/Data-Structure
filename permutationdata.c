#include<stdio.h>

void permutation(char *s,int i,int n)
{
    static int count;
    int j;

  if (i==n)
  {
    count++;
    printf(( "%d) %s \t",count,s ));
  }

  else{
    for ( j = i; i <= n; j++)
    {
       swap((s+i),(s+j));
       permutation(s,i+1,n);
       swap((s+i),(s+j));  
    }
    
  }

}


int main(){
    char *str;
    printf("Enter a String :");
    gets(str);
    permutation(str,0,strlen(str)-1);
    
}