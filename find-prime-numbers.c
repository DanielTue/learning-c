#include <stdio.h>                                                                                                       
                                                                                                                         
/* We use a nested for loop as we want to find the prime numbers from 2 to 250*/                         
                                                                                                                         
int main ()                                                                                                              
{                                                                                                                        
   int i, j;                                                                                                             
                                                                                                                         
   for(i=2; i<250; i++) {                                                                                                
      for(j=2; j <= (i/j); j++)                                                                                          
        if(!(i%j)) break;                                                                                                
      if(j > (i/j)) printf("%d is a prime number\n", i);                                                                 
   }                                                                                                                     
                                                                                                                         
   return 0;  
