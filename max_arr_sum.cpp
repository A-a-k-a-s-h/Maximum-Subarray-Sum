//Maximum Subarray Sum
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {-1,2,4-3,5,2,-5,2};
    int best = 0,sum = 0;
    for(int k=0;k<v.size();k++){
        sum = max(v[k],sum+v[k]);         
        best = max(best,sum);
    }
    cout<<"Maximum Subarray Sum :" <<best;
    return 0;
}
