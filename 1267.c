#include <stdio.h>

int main(void) {
  int n,M,Y,count=0,unc=0,sum=0,inc=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++) scanf("%d",&arr[i]);
  for(int i=0;i<n;i++){
    if((arr[i]/30+1)*10<(arr[i]/60+1)*15){
      count++;
    }
    else if((arr[i]/30+1)*10>(arr[i]/60+1)*15) unc++;
    else inc++;
  }
  if(count<unc){
    for(int i=0;i<n;i++) sum+=(arr[i]/60+1)*15;
    printf("M %d\n",sum);
  }
  else if(count>unc){
    for(int i=0;i<n;i++) sum+=(arr[i]/30+1)*10;
    printf("Y %d\n",sum);
  }
  else{
    for(int i=0;i<n;i++) sum+=(arr[i]/30+1)*10;
    printf("Y M %d\n",sum);
  }
  return 0;
}
