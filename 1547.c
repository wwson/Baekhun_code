#include <stdio.h>

int main(void) {
  int M,a,b,cup[3]={1,2,3},temp;
  scanf("%d",&M);
  for(int i=0;i<M;i++){
    scanf("%d %d",&a,&b);
    temp=cup[a-1];
    cup[a-1]=cup[b-1];
    cup[b-1]=temp;
  }
  for(int i=0;i<3;i++){
    if(cup[i]==1) printf("%d\n",i+1);
  }
  return 0;
}
