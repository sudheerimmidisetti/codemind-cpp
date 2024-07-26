#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin >>n;
    vector<int> arr(n);
    vector<int> ans;
    map<int, int> c;
    for (int i=0; i<n; i++) {
        cin >>arr[i];
        c[arr[i]]++;
    }
    sort(arr.begin(), arr.end());
    int pairs=0;
    for (auto& e : c) {
        pairs+=e.second/2;
    }
    printf("%d",pairs);
}