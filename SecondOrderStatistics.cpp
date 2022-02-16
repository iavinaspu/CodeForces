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

set<int> s;

while(T--){
    int x{0};
    cin >> x;
    s.insert(x);
}
if(s.size()!=1){
    auto it = s.begin();
    *it++;
    cout << *it++ << endl;
}
else{
    cout << "NO" << endl;
}


}