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
       for(int i=0, j = N-1; i < j; i++, j--){
           int temp = array[i];
           array[i] = array[j];
           array[j] = temp;
       }
       for(int i=0; i<N; i++){
           cout<<array[i]<<" ";
       }
   return 0;
}

//Time Complexity = O(n)
//Space Complexity = O(1)