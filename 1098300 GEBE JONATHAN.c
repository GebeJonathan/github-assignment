

// Program to find average of even numbers
// till a given even number.
#include <stdio.h>
  
// Function to calculate the average
// of even numbers
int averageEven(int n)
{
    if (n % 2 != 0) {
        printf("Invalid Input");
        return -1;
    }
  
    int sum = 0, count = 0;
    while (n >= 2) {
  
        // count even numbers
        count++;
  
        // store the sum of even numbers
        sum += n;
  
        n = n - 2;


}
    return sum / count;
}
  
// driver function
int main()
{
    int n = 16;
    printf("%d", averageEven(n));
    return 0;
}


#include <stdio.h> 
  
int main() 
{  
 int n,b,i,m; 
  
 printf("Enter the no upto which do you want to print prime no \n"); 
 scanf("%d",&m); 
 for(b=2;b<=m;b++) 
 { 
  
   i=2; 
  while(b%i!=0) 
   { 
    i++; 
   } 
    
  if(i==b) 
   { 
  printf("%d\n",b) ; 
  } 
   
  } 
  return 0;


}