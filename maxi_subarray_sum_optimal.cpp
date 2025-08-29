#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int arr[], int n){
    int currentSum=0;
    int maxSum= INT_MIN;
    int start = 0,end = 0,tempstart=0;
    for(int i = 0;i<n;i++){
        if(currentSum<=0){
            currentSum = arr[i];
            tempstart=i;
        }
        else{
            currentSum+=arr[i];
        }
        if(currentSum>maxSum){
            maxSum=currentSum;
            start = tempstart;
            end = i;
        }
    }
    cout<<"Maximum subarray sum = "<<maxSum<<endl;
    cout<<"Subarray = [";
    for(int i = start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
     return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubarraySum(arr, n);
    cout << "Maximum subarray sum is : " << result << endl;

    return 0;
}