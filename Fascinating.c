#include<stdio.h>

int isfascinating(int);

int main(){
  int num;
  printf("\nEnter a 3 digit number:");
  scanf("%d",&num);
  if(isfascinating(num)==1)
  { printf("%d is a fascinating number",num); }
  else
  {printf("%d is not a fascinating number",num);    }
  return 0;
  }

  int isfascinating(int n){
  int n2=n*2;
  int n3=n*3;
  int i;
  int freq[11]={0};
  while(n!=0){
  freq[n%10]++;
  n/=10;
  }
  while(n2!=0){
        freq[n2%10]++;
         n2/=10;
  }
  while(n3!=0){
        freq[n3%10]++;
        n3/=10;
  }
  for(i=1;i<=9;i++){
        if(freq[i]!=1)
        return 0;
      else
        return 1;
  }
  }
