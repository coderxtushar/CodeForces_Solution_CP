// AGGRCOW - Aggressive cows
// #binary-search

// Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000).

// His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

// Input
// t – the number of test cases, then t test cases follows.
// * Line 1: Two space-separated integers: N and C
// * Lines 2..N+1: Line i+1 contains an integer stall location, xi

// Output
// For each test case output one integer: the largest minimum distance.

// Example
// Input:

// 1
// 5 3
// 1
// 2
// 8
// 4
// 9
// Output:

// 3
// Output details:

// FJ can put his 3 cows in the stalls at positions 1, 4 and 8,
// resulting in a minimum distance of 3.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkStall(int n, int c, vector<int>& stalls, int mid){
    int cowCount = 1;
    int lastCowPos = stalls[0];

    for(int i=1; i<n;i++){
        if(stalls[i]-lastCowPos>=mid){
            cowCount++; 
            lastCowPos = stalls[i];
        }
    }
    if(cowCount < c){
        return false;
    }
    else{
        return true;
    }

}

void solve(){
    int n, c;
    cin>>n>>c;
    vector<int> stalls(n);
    for (int i = 0; i < n; i++){
        cin>>stalls[i];
    }
    sort(stalls.begin(), stalls.end());
    int low=1; int high = stalls[n-1]-stalls[0];
    int ans=0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(checkStall(n, c, stalls, mid)==true){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<< ans<<"\n";
}

int main() {
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}
