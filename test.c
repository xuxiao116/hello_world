#include "stdio.h"
#include "make_test.h"

int main()
{
  int a,i,b,c;
  a = 10;
  b = 100; 
  printf("A:%d\n",a);
  c = compare(a,b);
  printf("C:%d\n",c);
 for(i=0; i<9 ; i++)
 {
  printf("B:%d\n",b);
 }
 // system("pause");
  return 0;

}

