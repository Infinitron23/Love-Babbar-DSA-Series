#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)
#define endl "\n";

int main(){

       int N;
       cin>>N;
       vector<int> array;
       for(int i=0; i<N; i++){
           int num;
           cin>>num;
           array.push_back(num);
       }
       int min = array[0], max = array[0];
       for(int i=1; i < N; i++){
           if(array[i] > max)
           max = array[i];
           if(array[i] < min)
           min = array[i];
       }
       cout<<min<<" "<<max;
   return 0;
}

//Time Complexity - O(n)
//Space Complexity - O(1)