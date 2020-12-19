#include<stdio.h>

int main() {

  printf("hello, world.\n");
  printf("this is my first training program.\n");
  printf("My language :\n");
  printf("\tPython.\n");
  printf("\tC. \n");
  printf("Celsius to Fahrenheit : \n");
  printf("\n");

int lower,upper,step;
float fahr, celsius;
lower = 0;
upper = 300;
step = 20;

celsius = lower;

while(celsius <= upper){
  //celsius = (5.0/9.0)*(fahr-32.0);
  fahr = (celsius)*(9.0/5.0)+ 32.0;
  printf("%4.0f %6.1f\n", celsius,fahr);
  celsius += step;

}

return 0;

}
