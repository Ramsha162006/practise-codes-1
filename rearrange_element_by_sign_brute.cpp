#include<iostream>
#include<vector>
using namespace std;
void rearrangeAlternate(vector<int>&arr){
    vector<int>pos,neg;
    for(int num:arr){
        if(num>=0)
        pos.push_back(num);
        else
        neg.push_back(num);
    }
    vector<int>result;
    int i = 0,j = 0;
    bool turnPositive = true;
    while(i<pos.size() && j<neg.size()){
        if(turnPositive){
            result.push_back(pos[i++]);
        }
            else{
                result.push_back(neg[j++]);
            }
                turnPositive = !turnPositive;

    }
    while(i<pos.size())
        result.push_back(pos[i++]);
    while(j<neg.size())
        result.push_back(neg[j++]);
    for(int k = 0;k<arr.size();++k)
        arr[k] = result[k];
    
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