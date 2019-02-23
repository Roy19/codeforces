#include <bits/stdc++.h>
using namespace std;

long long f[100001];

int main(){
    map<int, int> m;
    vector<pair<int, int>> v;
    int pr, n, elm, elm_max = INT32_MIN;
    cin >> n;
    
    for(int i = 0;i < n;i++){
        cin >> elm;
        m[elm]++;
    }

    for(auto i: m){
        v.push_back(make_pair(i.first, i.second));
    }

    for(int i = 0;i < v.size();i++){
        pr = i-1; // previous element i.e i = i-2

        while(pr >= 0 and v[pr].first + 1 == v[i].first)
            pr--;
        if(pr == -1)
            f[i] = 1LL * v[i].first * v[i].second;
        else
            f[i] = f[pr] + 1LL * v[i].first * v[i].second;
        
        if(i != 0)
            f[i] = max(f[i], f[i-1]);
    }

    cout << f[v.size() - 1] << endl;

    return 0;
}