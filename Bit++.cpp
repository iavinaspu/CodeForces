#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int T{0};
cin >> T;

int x{0};
while(T--){
    string s;
    cin >> s;

    if(s=="++X" || s=="X++"){
        x++;
    }
    else{
        x--;
    }
}

cout << x << endl;
}