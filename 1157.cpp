#include <stdio.h>
#include <ctype.h>

int main(void) {
  char word[1000001];
  int alphabetCnt[26]={0, };
  scanf("%s",word);
  for(int i=0;word[i]!='\0';i++) alphabetCnt[toupper(word[i])-'A']++;
  int max=0;
  char c='?';
  for(int alpha=0;alpha<='Z'-'A';alpha++){
    if(alphabetCnt[alpha]>max){
      max=alphabetCnt[alpha];
      c=alpha;
    }
    else if(alphabetCnt[alpha]==max) c='?';
  }
  putchar((c=='?')? '?':c+65);
  printf("\n");
  return 0;
}
