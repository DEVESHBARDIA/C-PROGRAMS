#include <stdio.h>
#include <math.h>
int main()
{
  float unit,charge,total;
  char name[20];
  printf("Enter the name :");
  gets(name);
  printf("Enter units :");
  scanf("%f",&unit);
  if (unit>=1 && unit<=200)
  {
    charge = 0.8*unit;
  }
  else if (unit>=201 && unit <=300)
  {
    charge = 0.8*200 + 0.9*(unit - 200);
  }
  else if (unit>300)
  {
    charge = (0.8*200)+ (0.9*100)+(1*(unit -300));
  }
  total = charge + 100;
  if (total > 400)
  {
    total = total + (0.15*total);
  }
  printf("Name :%s\n",name);
  printf("No. of units :%f\n",unit);
  printf("Total bill :Rs %f\n",total);
  return 0;
}
