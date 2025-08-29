#include<iostream>
#include<vector>
using namespace std;
void rearrangeAlternate(vector<int>&arr){
    int n = arr.size();
    vector<int>ans(n,0);
    int posIndex = 0,negIndex = 1;
    for(int i = 0;i<n;i++){
        if(arr[i]<0){
            ans[negIndex] = arr[i];
            negIndex+=2;
        }
        else{
            ans[posIndex] = arr[i];
            posIndex+=2;
        }
    }
    arr = ans;
}
int main(){
    vector<int>arr = {1,2,-3,-4,-5,6,7};
    rearrangeAlternate(arr);
    cout<<"Rearranged array: ";
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;
}