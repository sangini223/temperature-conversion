#include<stdio.h>
int main()
{
  float t1, t2,c,f;
  char y;
  printf("press F:to enter in fahrenheit\n");
  printf("press C:to enter in celsius\n");
  scanf("%c",&y);
  
  if(y=='F')
  {
       printf("\nEnter Temperature in Fahrenheit : ");
       scanf("%f",&t2);
       //Converting Fahrenheit into Celsius
       c = (t2-32)*5/9;
       printf("\nTemperature in Celsius  : %f",c);
  }
  
  else if (y=='C')
  {
       printf("Enter Temperature in Celsius : ");
       scanf("%f",&t1);
       //Temperature From Celsius To Fahrenheit
       f=(t1*9/5)+32;
       printf("\nTemperature in Fahrenheit : %f",f);
}
  else{
      printf("invalid");
  }
 
  return 0;
}