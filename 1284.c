#include <stdio.h>

int main(void) {
  int adr,tot[100],n=0,i,add[100];
  for(i=0;;i++){
    scanf("%d",&adr);
    if(adr!=0){
      add[i]=adr;
      n++;
      tot[i]=2;
    }
    else break;
  }
  for(i=0;i<n;i++){
    if(add[i]>0&&add[i]<10){
      if(add[i]==1) tot[i]+=2;
      else tot[i]+=3;
    }
    else if(add[i]>9&&add[i]<100){
      tot[i]+=1;
      if(add[i]/10==1) tot[i]+=2;
      else if(add[i]/10!=1) tot[i]+=3;
      if(add[i]%10==0) tot[i]+=4;
      else if(add[i]%10==1) tot[i]+=2;
      else if(add[i]%10!=1&&add[i]%10!=0) tot[i]+=3;
    }
    else if(add[i]>99&&add[i]<1000){
      tot[i]+=2;
      if(add[i]/100==1) tot[i]+=2;
      else if(add[i]/100!=1) tot[i]+=3;
      if((add[i]%100)/10==1) tot[i]+=2;
      else if((add[i]%100)/10==0) tot[i]+=4;
      else if((add[i]%100)/10!=1&&(add[i]%100)/10!=0) tot[i]+=3;
      if((add[i]%100)%10==1) tot[i]+=2;
      else if((add[i]%100)%10==0) tot[i]+=4;
      else if((add[i]%100)%10!=0&&(add[i]%100)%10!=1) tot[i]+=3;
    }
    else if(add[i]>999&&add[i]<10000){
      tot[i]+=3;
      if(add[i]/1000==1) tot[i]+=2;
      else if(add[i]/1000!=1) tot[i]+=3;
      if((add[i]%1000)/100==1) tot[i]+=2;
      else if((add[i]%1000)/100==0) tot[i]+=4;
      else if((add[i]%1000)/100!=1&&(add[i]%1000)/100!=0) tot[i]+=3;
      if(((add[i]%1000)%100)/10==1) tot[i]+=2;
      else if(((add[i]%1000)%100)/10==0) tot[i]+=4;
      else if(((add[i]%1000)%100)/10!=0&&(((add[i]%1000)%100)/10)!=0) tot[i]+=3;
      if(((add[i]%1000)%100)%10==1) tot[i]+=2;
      else if(((add[i]%1000)%100)%10==0) tot[i]+=4;
      else if(((add[i]%1000)%100)%10!=0&&((add[i]%1000)%100)%10!=1) tot[i]+=3;
    }
    printf("%d\n",tot[i]);
  }
  return 0;
}
