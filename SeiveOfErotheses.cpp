//Time complexity of seive is O(nlog(logn))
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;   //generating 10^7 primes
vector<bool>isPrime(N,1);    //it is telling that initially all elements are primes
int main()
{
  isPrime[0]=isPrime[1]=false;
  for(int i=2;i<N;i++)
  {
    if(isPrime[i]==true)
    {
      for(int j=2*i;j<N;j+=i)
      {
        isPrime[j]=false;
      }

    }
  }
  for(int i=1;i<30;i++)
  {
    cout<<i<<"-> "<<isPrime[i]<<endl;
  }


}
