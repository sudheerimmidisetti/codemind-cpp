#include <bits/stdc++.h>
int main() {
    int n;
    std::cin >>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        std::cin >>arr[i];
    }
    int k;
    std::cin >>k;
    std::vector<int> q;
    std::set<int> ans;
    for (int i=0; i<n; i++) {
        int c = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                c++;
        }
        if (c == k)
            ans.insert(arr[i]);
    }
    for (auto o : ans) {
        q.push_back(o);
    }
    int d=q.size();
    if (d==0)
        std::cout << "-1";
    else {
        for (auto a : q) {
            std::cout << a << " ";
        }
    }
}