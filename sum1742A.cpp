// A. Sum
// time limit per test1 second
// memory limit per test256 megabytes
// You are given three integers a
// , b
// , and c
// . Determine if one of them is the sum of the other two.

// Input
// The first line contains a single integer t
//  (1≤t≤9261
// ) — the number of test cases.

// The description of each test case consists of three integers a
// , b
// , c
//  (0≤a,b,c≤20
// ).

// Output
// For each test case, output "YES" if one of the numbers is the sum of the other two, and "NO" otherwise.

// You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

// Example
// InputCopy
// 7
// 1 4 3
// 2 5 8
// 9 11 20
// 0 0 0
// 20 20 20
// 4 12 3
// 15 7 8
// OutputCopy
// YES
// NO
// YES
// YES
// NO
// NO
// YES
// Note
// In the first test case, 1+3=4
// .

// In the second test case, none of the numbers is the sum of the other two.

// In the third test case, 9+11=20
// .


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >>t;
    while(t--){
        int a, b, c;
        //bool isSum =true;
        if(a+b==c) {cout<< "YES"<<endl; break;}
        if(b+c==a) {cout<< "YES"<<endl; break;}
        if(c+a==b) {cout<< "YES"<<endl; break;}
        else {cout<<"NO"<<endl;}
    }
    
    return 0;
}
