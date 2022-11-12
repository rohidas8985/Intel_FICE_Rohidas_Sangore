#include<stdio.h>
#include<time.h>
#include <unistd.h> 
double time_spent=0.0;


int main() 
{
clock_t begin=clock();
int intType;
    float floatType;
    double doubleType;
    char charType;

  printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));

  clock_t end =clock();
  time_spent+=(double)(end-begin)/(CLOCKS_PER_SEC/1000);
  printf("The elapsed time is %f seconds",time_spent);
  return 0;
}


