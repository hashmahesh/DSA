#include <bits/stdc++.h> 
int largestElement(vector<int> &a, int n) {
    int largest = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>largest) largest = a[i];
    }
    return largest;
}
