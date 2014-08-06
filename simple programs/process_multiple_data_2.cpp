//Sum of Consecutive Prime Numbers : to turn a number into multiple prime numbers' su\
NBvnn

#include<iostream>
using namespace std;
const int maxp = 2000,n = 10000; //prime frame length , and up-limit of input
int prime[maxp],total=0; //prime array & initialization                                                                                                                              
bool ispime(int k){
 for(int i=0;i<total;i++){
  if(k % prime[i]==0)
   return false;
 }
 return true;
}

int main(){
 for(int i=2;i<=n;i++){ //create prime array
  if(isprime(i))
   prime[total++]=i; //give it anumber first than total plus 1
  prime[total]=n+1;
 }
 int m;
 cin>>m;
 while(m){ //won't stop untill m=0
  int ans=0;
  for(int i=0;m>=prime[i];i++){ //break if m<prime[i]
   int cnt=0; //sum of conseque
   for(int j=i;j<total&&cnt<m;j++)
    cnt+=prime[j];
   if(cnt==m)
    ++ans;
  }
  cout<<ans<<endl;
  cin>>m;
 }
 return 0;
}