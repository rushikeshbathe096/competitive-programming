/*
Problem: Game with integer

Description:
- Vanya and Vova are playing a game with an integer n. On each turn, a player can add 1 or subtract 1 from the number.Vanya starts the game.If after Vanya’s move the number becomes divisible by 3, Vanya wins.If 10 moves are completed and Vanya has not won, then Vova wins.

Input:
- t : number of test cases
- For each test case:
    n : the starting integer

Output:
- Print "First" if Vanya wins, Print "Second" if Vova wins

Approach / Notes:
- If n % 3 == 0, Vanya cannot win because any +1 or -1 move can be reversed by Vova.
- If n % 3 == 1, Vanya can subtract 1 and make it divisible by 3.
- If n % 3 == 2, Vanya can add 1 and make it divisible by 3.
- So Vanya wins if n % 3 != 0, otherwise Vova wins.
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%3==0){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
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
