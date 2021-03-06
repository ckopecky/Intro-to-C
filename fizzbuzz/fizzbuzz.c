#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/
int fizzbuzz(int n);
int i;

#ifndef TESTING
int main(void)
{
    fizzbuzz(5);

    return 0;
}
#endif

int fizzbuzz(int n){
    int counter = 0;
    for( i = 0; i < n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("Fizzbuzz %d %d\n", i, counter);
        }
        else if(i % 5 == 0){
            printf("Buzz %d %d\n", i, counter);
        }
        else if(i % 3 == 0){
            printf("Fizz %d %d\n", i, counter);
        }
        else{
            counter +=1;
            printf("%d %d\n", i, counter);
            
        }
    }
    printf("%d\n", counter);
    return counter;
}