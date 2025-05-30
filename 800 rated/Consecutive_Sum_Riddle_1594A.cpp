// A. Consecutive Sum Riddle
// Theofanis has a riddle for you and if you manage to solve it, he will give you a Cypriot snack halloumi for free (Cypriot cheese). You are given an integer n. You need to find two integers l and r such that −1018≤l<r≤1018 and l+(l+1)+…+(r−1)+r=n.

// Input
// The first line contains a single integer t (1≤t≤104) — the number of test cases.

// The first and only line of each test case contains a single integer n(1≤n≤1018).

// Output
// For each test case, print the two integers l and r such that −1018≤l<r≤1018 and l+(l+1)+…+(r−1)+r=n.

// It can be proven that an answer always exists. If there are multiple answers, print any.

// Example
// Input
// 7
// 1
// 2
// 3
// 6
// 100
// 25
// 3000000000000
// Output
// 0 1
// -1 2 
// 1 2 
// 1 3 
// 18 22
// -2 7
// 999999999999 1000000000001
// Note

// In the first test case, 0+1=1
// In the second test case, (−1)+0+1+2=2
// In the fourth test case, 1+2+3=6
// In the fifth test case, 18+19+20+21+22=100
// In the sixth test case, (−2)+(−1)+0+1+2+3+4+5+6+7=25


#include <iostream>
using namespace std;
 
void solve(){
    long long n;
    cin>>n;
    cout<< (-1*(n-1))<< " "<<n<<"\n";
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}