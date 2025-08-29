#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {1,2,3};
    bool hasNext = next_permutation(nums.begin(),nums.end());
    if(hasNext){
        cout<<"Next permutation: ";
        for(int num:nums)cout<<num<<" ";
    }
    else{
        cout<<"array was in descending order,rearranged to smallest: ";
        for(int num:nums)cout<<num<<" ";
    }
    cout<<endl;
}