// Timur has n candies. The i-th candy has a quantity of sugar equal to ai. So, by eating the i-th candy, Timur consumes a quantity of sugar equal to ai. Timur will ask you q-queries regarding his candies. For the j-th query you have to answer what is the minimum number of candies he needs to eat in order to reach a quantity of sugar greater than or equal to xj or print -1 if it's not possible to obtain such a quantity. In other words, you should print the minimum possible k such that after eating k candies, Timur consumes a quantity of sugar of at least xj or say that no possible k exists.

// Output
// For each test case output q lines. For the j-th line output the number of candies Timur needs to eat in order to reach a quantity of sugar greater than or equal to xj or print -1 if it's not possible to obtain such a quantity.

// Example
// Input
// 4 3 3 1 1 4 5 9
// 1
// 10
// 50
// 14
// 15
// 22
// 30
// Output
// 1
// 2
// -1
// 2
// 3
// 4
// 8

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lowerBound(vector<int>& nums, int n, int target){
    int l=0, r=n-1; 
    int ans=n;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(nums[mid] >= target){
            ans = min(ans, mid);
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // Sort in decreasing order
    sort(arr.begin(), arr.end(), greater<int>());
    
    // Make prefix sum array
    for(int i=1; i<n; i++){
        arr[i] += arr[i-1];
    }

    while(q--){
        int x;
        cin >> x;
        int lb = lowerBound(arr, n, x);
        lb += 1;
        if(lb > n){
            cout << "-1\n";
        }
        else{
            cout << lb << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

