#include<bits/stdc++.h>

using namespace std;


void fun(int arr[][]){
  return;
}

int power(int base,int pow){

  

  if(pow == 0)return 1;

  int smlAns = power(base,pow-1); 
  
  return smlAns*base;
}

int main(){
  int arr[5][4];
  fun(arr);
  cout<<power(2,3);

  return 0;
}

