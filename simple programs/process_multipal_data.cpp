//Doubles : count the number of numbers that are two times value than another

#include<iostream>
using namespace std;
int main(){
 int i, j, n, count, a[20];
 cin>>a[0];
 while(a[0]!=-1){ //multiple tests
  n=1;
  for(;;n++){
   cin>>a[n];
   if(a[n]==0)break;
  }
  count=0; //the result
  for(i=0;i<n-1;i++){ //compare all elements
   for(j=i+1;j<n;j++){
    if(a[i]*2==a[j] || a[j]*2==a[i]) //if satisfy two times value
	count++; //cumulate
   }
  }
  cout<<count<<endl;
  cin>>a[0]; //the next turn
 }
 return 0;
}