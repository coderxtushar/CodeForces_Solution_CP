// Waking up in the morning, Apollinaria decided to bake cookies. To bake one cookie, she needs n ingredients, and for each ingredient she knows the value ai — how many grams of this ingredient one needs to bake a cookie. To prepare one cookie Apollinaria needs to use all n ingredients.Apollinaria has bi gram of the i-th ingredient. Also she has k grams of a magic powder. Each gram of magic powder can be turned to exactly 1 gram of any of the n ingredients and can be used for baking cookies. Your task is to determine the maximum number of cookies, which Apollinaria is able to bake using the ingredients that she has and the magic powder.

// Input
// The first line of the input contains two positive integers n and k (1 ≤ n, k ≤ 1000) — the number of ingredients and the number of grams of the magic powder.
// The second line contains the sequence a1, a2, ..., an (1 ≤ ai ≤ 1000), where the i-th number is equal to the number of grams of the i-th ingredient, needed to bake one cookie.
// The third line contains the sequence b1, b2, ..., bn (1 ≤ bi ≤ 1000), where the i-th number is equal to the number of grams of the i-th ingredient, which Apollinaria has.

// Output
// Print the maximum number of cookies, which Apollinaria will be able to bake using the ingredients that she has and the magic powder.

// Examples
// Input
// 3 1
// 2 1 4
// 11 3 16
// Output
// 4
// Input
// 4 3
// 4 3 5 6
// 11 12 14 20
// Output
// 3
// Note
// In the first sample it is profitably for Apollinaria to make the existing 1 gram of her magic powder to ingredient with the index 2, then Apollinaria will be able to bake 4 cookies.
// In the second sample Apollinaria should turn 1 gram of magic powder to ingredient with the index 1 and 1 gram of magic powder to ingredient with the index 3. Then Apollinaria will be able to bake 3 cookies. The remaining 1 gram of the magic powder can be left, because it can't be used to increase the answer.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(int n, int k, vector<int>& a, vector<int>& b, int mid){
    for(int i=0;i<n;i++){
        int res = a[i]*mid;
        res -= b[i];
        if(res>0){
            if(k>=res){
                k-=res;
            }
            else{
                return false;
            }
        } 
    }
    return true;
}

int main() {
    
    int n, k;
    cin>>n>>k;

    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int l=0, r=5000, ans=0;

    while(l<=r){
        int mid = l+(r-l)/2;
        if(check(n, k, a, b, mid)){
            ans = mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

    cout<<ans<<"\n";


    
    return 0;
}
