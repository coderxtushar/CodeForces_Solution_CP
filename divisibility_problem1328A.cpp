// You are given two positive integers a and b
// In one move you can increase a by 1 (replace a with a+1). Your task is to find the minimum number of moves you need to do in order to make a divisible by b
// . It is possible, that you have to make 0 moves, as a is already divisible by b
// . You have to answer t independent test cases.

// Input
// The first line of the input contains one integer t
//  (1≤t≤104
// ) — the number of test cases. Then t
//  test cases follow.

// The only line of the test case contains two integers a
//  and b
//  (1≤a,b≤109
// ).

// Output
// For each test case print the answer — the minimum number of moves you need to do in order to make a
//  divisible by b
// .

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;  
//     while(t--){
//         long long a, b;
//         cin >> a >> b;
//         long long result = a % b;
//         long long moves=0;
//         if (result ==0){
//             return moves;
//         }
//         else{
//             moves = b-result;
//             cout<< moves;
//         }
        
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while(t--){
        int a, b;
        cin >> a >> b;
        if (a%b ==0) cout<<0<<endl;
        else cout<<(b-a%b)<<endl;
    }
    return 0;
}