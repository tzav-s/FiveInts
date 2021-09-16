#include <stdio.h>
#include "simpio.h"

#define SIZE 4

void fill_it(int tab[]);
void newTable (int tab[]);
void print_it(int tab[]);

int main ()
{ int tab[SIZE];

  fill_it(tab);
  newTable(tab);
  print_it(tab);

  system("PAUSE");
  return 0;

}
void fill_it(int tab[])
{
    int i;
    for(i=0;i<=SIZE;i++)
    {
        printf("Enter number:");
        tab[i]=GetInteger();

    }
}
void newTable (int tab[])
{
    int x,i;

    x=tab[SIZE];
    for(i=SIZE;i>=0;i--)
   {
        tab[i]=tab[i-1];
   }
    tab[0]=x;
}


void print_it(int tab[])
{
    int i;
    for (i=0;i<=SIZE;i++)
    {
        printf("%d ",tab[i]);
    }
}

