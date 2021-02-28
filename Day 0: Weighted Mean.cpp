#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    float sum=0.0f,sum2=0.0f;
    float res;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+v1[i]*v2[i];
        sum2=sum2+v2[i];
    }
    double wmean = (double)(sum/sum2);
    printf("%0.1f",wmean);
    return 0;
}
