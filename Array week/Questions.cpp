#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;
//------------linearSearch-------------
// int linearSearch(int arr[], int n, int target){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     // for(int x:arr){
//     //     if(x==target){
//     //         return i;
//     //     }
//     // }
// return -1;//isko agr for loop k andr rkha toh if false hote hi else immediately -1 de dega array traverse hoga hi nhin
// }
// int main(){
//     int arr[20];
//     int n,target;
//     cout<<"Enter number of elements :";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter target :";
//     cin>>target;
//     int ans = linearSearch(arr, n, target);
//     if(ans!=-1)
//     cout<<"target found at index="<<ans;
//     else
//     cout<<"Element not found";
//     //cout << ans;
// }

//----find avg of array elements----

// double findAverage(int arr[], int n){
//     int Sum=0;
//     double ans;
//     for(int i=0;i<n;i++){
//         Sum+=arr[i];
//     }
//     //ans=(double)Sum/n;//important line
//     ans=Sum*1.0/n;//typecasting
//     return ans;
// }
// int main(){
//     int n;
//     int arr[30];
//     cin>>n;
//     //4cout<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     double result=findAverage(arr,n);
//     cout<<"Average of array elements = "<<result;
// }

//------------Multiply each element of array by 10-----------
// vector<int> multiplyBy10(int arr[], int n){//bcz newArray is returned which is vector<int> not int
//     vector<int> newArray(n);
//     for(int i=0;i<n;i++){
//         newArray[i] = arr[i]*10 ;//imp line
//     }
//     return newArray; 
// };
// int main(){
// int arr[5];
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// vector<int> ans;
// ans=multiplyBy10(arr,n);
// for(int x:ans)
// cout<<x<<" ";
// }


//-----------Find the maximum element in an array--------
// int findMaxEle(int arr[], int n){
//     int maxi=INT_MIN;
//     //int mini=INT_MAX;
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,arr[i]);
//         //mini=min(mini,arr[i]);
//     }
//     return maxi;
// }
// int main(){
//     int n, arr[n];
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int result=findMaxEle(arr,n);
//     cout<<"Maximum element is : "<<result;

// }

// int findMaxEle(int arr[], int n){
//     int maxi=arr[0];
//     //int mini=INT_MAX;
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,arr[i]);
//         //mini=min(mini,arr[i]);
//     }
//     return maxi;
// }
// int main(){
//     int n, arr[200];
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int result=findMaxEle(arr,n);
//     cout<<"Maximum element is : "<<result;
// }

//--------------find min ele of an array-------
// int findMinEle(int arr[], int n){
//     int mini=arr[0];
//     //int mini=INT_MAX;
//     for(int i=0;i<n;i++){
//         mini=min(mini,arr[i]);
//         //mini=min(mini,arr[i]);
//     }
//     return mini;
// }
// int main(){
//     int n, arr[200];
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int result=findMinEle(arr,n);
//     cout<<"Minimum element is : "<<result;
// }

//count 0 and 1-----

// pair<int,int> countZerosandOnes(int arr[], int n){
//     int totalZeros=0, totalOnes=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             totalZeros++;
//         }
//         else if(arr[i]==1){
//             totalOnes++;
//         }
//     }
//     return{totalZeros,totalOnes};
// }
// int main(){
//     int n, arr[30];
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     pair<int,int> ans=countZerosandOnes(arr,n);
//     cout << "Zeros = " << ans.first << endl;
//     cout << "Ones = " << ans.second << endl; OR // cout << ans.first << " " << ans.second;

// }
//----using vector--
vector<int> countZerosandOnes(int arr[], int n) {
    int zeros = 0, ones = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            zeros++;
        else if (arr[i] == 1)
            ones++;
    }

    return {zeros, ones};
}

int main() {
    int n;
    cin >> n;

    int arr[30];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = countZerosandOnes(arr, n);

    // cout << "Zeros = " << ans[0] << endl;
    // cout << "Ones = " << ans[1] << endl;
    cout << ans[0] << " " << ans[1];

    return 0;
}







