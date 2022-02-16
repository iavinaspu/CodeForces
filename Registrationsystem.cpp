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
cin.ignore();

map<string, int> m;

while(T--){
    string s;
    getline(cin, s);

    

    if(m[s]==0){
        cout << "OK" << endl;
    }
    else{
        cout << s << m[s] << endl;
    }
    m[s]++;
    
}
}