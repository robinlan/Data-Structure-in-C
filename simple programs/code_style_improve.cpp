//Financial Management : input getting money each month ; output their mean
//It's better to add comments in every statement

#include<iostream>
using namespace std;
int main(){
 double avg, sum=0.0,a[12]={0};
 int i;
 for(i=0;i<12;i++){
  cin>>a[i]; //cin can make input more precisely
  sum+=a[i]; ////printf can make output more precisely
 }
 avg=sum/12;
 printf("$%.2f \n",avg);
 return 0;
}