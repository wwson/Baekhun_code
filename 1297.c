#include <stdio.h>
#include <math.h>

int main(){
  int l,a,b;
  double c,t1,t2;
  scanf("%d %d %d",&l,&a,&b);
  c=sqrt(pow(a,2)+pow(b,2));
  t1=a*l/c;
  t2=b*l/c;
  
  printf("%d %d\n",(int)t1,(int)t2);
  return 0;
}
