#include <stdio.h>

int main()
{

  float a=5, c=5, b, d;



  printf("input b=");
  scanf("%f", &b);
  printf("a=a+b-2\n");
  a=a+b-2;
  printf("a=%.2f\n",a);
  printf("b=%.2f\n",b);

  printf("-------------\n");

  printf("c=%.2f\n",c);
  c=c+1;
  printf("c=c+1\n");
  printf("c=%.2f\n",c);

  printf("-------------\n");

  printf("input d=");
  scanf("%f", &d);
  d=c-a+d;
  printf("d=c-a+d\n");
  printf("d=%.2f\n",d);

  printf("-------------\n");

  printf("a=a*c\n");
  a=a*c;
  printf("a=%.2f\n",a);

  printf("-------------\n");

  printf("c=c-1\n");
  c=c-1;
  printf("c=%.2f\n", c);

  printf("-------------\n");

  printf("a=a/10\n");
  a=a/10;
  printf("a=%.2f\n",a);

  printf("-------------\n");

  printf("c=c/2\n");
  c=c/2;
  printf("c=%.2f\n",c);

  printf("-------------\n");

  printf("b=b-1\n");
  b=b-1;
  printf("b=%.2f\n",b);

  printf("-------------\n");

  printf("d=d*(c+b+a)\n");
  d=d*(c+b+a);
  printf("d=%.2f\n",d);


  return 0;
}
