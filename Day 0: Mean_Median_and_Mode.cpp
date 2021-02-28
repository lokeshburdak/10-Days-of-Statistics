#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector <int> v1(n);
    float mean=0,md=0;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        mean=mean+v1[i];
    }
    cout<<mean/n<<endl;
    sort(v1.begin(), v1.end());
    if(n%2==0){
        md=v1[(n/2)]+v1[(n/2)-1];
    }
    cout<<md/2<<endl;
    int max_count = 1, res = v1[0], curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (v1[i] == v1[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = v1[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
  
    // If last element is most frequent 
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = v1[n - 1]; 
    } 
  
    cout<<res; 
    return 0;
}
