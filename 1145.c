#include <stdio.h>
#include <math.h>

int num[5];
int Min=1;

int main(void) {
  for(int i=0;i<5;i++) scanf("%d",&num[i]);
  while(1){
    int cnt=0;
    for(int i=0;i<5;i++){
      if(Min>=num[i]&&Min%num[i]==0) cnt++;
    }
    if(cnt>=3) break;
    Min++;
  }
  printf("%d\n",Min);
  return 0;
}
