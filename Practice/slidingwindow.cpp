#include <bits/stdc++.h>
using namespace std;


vector<int> f(vector<int> a, int k){
    
}


int main(){
    int t;
    cin >> t;
    vector<int> v;
    while(t--){
        int data;
        int s;
        int k;
        cin >> s;
        for (int i = 0; i < s; i++){
            cin >> data;
            v.push_back(data);
        }
        cin >> k;
        vector<int> result;
        result = f(v, k);
        for(auto e : result){
            cout << e << " ";
        }
        cout << endl;
        v.clear();
    }
}