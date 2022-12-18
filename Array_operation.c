#include <stdio.h>
#include <stdlib.h>

int n,i,a[100],ele,pos;
void create()
{
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter the elements: ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Array created!");
}

void display()
{
  printf("The array is: \n");
  for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}

void insert()
{
  printf("Enter the element you want to insert: ");
  scanf("%d",&ele);
  printf("Enter the position you want to insert: ");
  scanf("%d",&pos);
  for(i=n-1;i>=pos;i--)
    {
       a[i+1]=a[i]; 
    }
  a[pos] = ele;
  n = n+1;
}

void delete()
{
  printf("Enter the position you want to delete: \n");
  scanf("%d",&pos);
  for(i=pos;i<n-1;i++)
    {
       a[i]=a[i+1]; 
    }
  n = n-1;
}


int main()
{
  int ch;
  while(1)
    {
      printf("1.Create\n");
      printf("2.Dislay\n");
      printf("3.Insert\n");
      printf("4.Delete\n");
      printf("5.Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&ch);
      switch(ch)
        {
          case 1: create();
                  break;
          case 2: display();
                  break;
          case 3: insert();
                  break;
          case 4: delete();      
                  break;
          case 5: exit(0);
                  break;
          default: printf("Invalid choice!");
        }
    }
  return 0;
}
