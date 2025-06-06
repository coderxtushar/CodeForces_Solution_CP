// Filip has a row of cells, some of which are blocked, and some are empty. He wants all empty cells to have water in them. He has two actions at his disposal:

// 1— place water in an empty cell.
// 2— remove water from a cell and place it in any other empty cell.
// If at some moment cell i (2≤i≤n−1) is empty and both cells i−1 and i+1 contains water, then it becomes filled with water.

// Find the minimum number of times he needs to perform action 1 in order to fill all empty cells with water.

// Note that you don't need to minimize the use of action 2 .Note that blocked cells neither contain water nor can Filip place water in them.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤100). The description of the test cases follows.

// The first line of each test case contains a single integer n (1≤n≤100) — the number of cells.

// The next line contains a string s of length n. The i-th character of s is '.' if the cell i is empty and '#' if cell i is blocked.

// Output
// For each test case, output a single number — the minimal amount of actions 1 needed to fill all empty cells with water.

// Example
// Input
// 5
// 3
// ...
// 7
// ##....#
// 7
// ..#.#..
// 4
// ####
// 10
// #...#..#.#
// Output
// 2
// 2
// 5
// 0
// 2
// Note
// Test Case 1 -> Filip can put water in cells 1 and 3. As cell 2 is between 2 cells with water, it gets filled with water too.
// Test Case 2 -> He can put water sources in cells 3 and 5. That results in cell 4 getting filled with water. Then he will remove water from cell 5 and place it into cell 6. As cell 5's neighbors, cell 4 and cell 6, have water in them, cell 5 also gets filled with water. You can see the illustration of this case below.Operations in the second test case. White cells are empty, grey ones are blocked, and blue ones are water.
// Test Case 3 -> In the third case, he can put water in all the empty cells. That requires 5 actions of type 1.
// Test Case 4 -> In the fourth case, there are no empty cells. Therefore, he does not have to put any water in them.
// Test Case 5 -> In the fifth test case, there exists a sequence of actions that requires only 2 type 1 actions.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool cont_blank = true;
    int ans=0;
    for(int i=0;i<=n;i++){
        if(s[i]=='.') {
            ans++;
        }
        if(i>0 && i<n-1){
            if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
                cout<<2<<'\n';
                cont_blank = false;  
                break;              
            }
        }
    }
    if(cont_blank){
        cout<<ans<<"\n";
    }

}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
