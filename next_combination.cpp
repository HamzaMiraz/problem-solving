#include<bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


void next() {
    int n = 5; // Will only give me combinations of length 2
    vector<int> arr = { 1,2,3,4,5};
    sort(arr.begin(), arr.end());

    set<vector<int>> result;

    do {
        result.emplace(arr.begin(),arr.begin()+n);
    } while(next_permutation(arr.begin(), arr.end()));

    for (auto& c : result) {
        for (auto& e : c) cout << e ;
        cout << '\n';
    }
}
int main() {
    next();
}
