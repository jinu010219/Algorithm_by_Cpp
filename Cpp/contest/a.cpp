/*PS template*/
#include <bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(x...)
#endif 
using namespace std;

int main(){
    FASTIO
    int t;
    cin >> t;

    while(t--){
        int n, tmp,e=0,o=0;
        cin >> n;
        for(int i = 0; i < n; ++i){
            cin >> tmp;
            if(tmp%2) o++;
            else e++;
        }
        if(o%2){
            cout<<"no\n";
        }
        else{
            cout<<"yes\n";
        }
        
    }

    return 0;
}