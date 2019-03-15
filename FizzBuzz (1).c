#include <stdio.h>//this is the library that i am using for this code.
int main (void){
  for(int i = 0; i<=100; i++){//i=0 and adds 1 all the way to 100.
   
    if(i%15==0){
      printf("fizzbuzz\n");//if i = 15 the this program will print fizzbuzz or if its a multiple of 3 and 5.
   }    

    else if(i%3==0){
        printf("fizz\n");//if the number is a multiple of 3 then this will print fizz.
    }
      
     else if(i%5==0){
          printf("buzz\n");//if the number is a multiple of 5 then this coed will print buzz.
      }
      
       else{printf("%i\n", i);//this makes the programs display the numbers.
       }
      
 }   
}
