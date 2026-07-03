#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//print twice
void printTwice(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<(2*arr[i])<<" ";
    }
    cout<<endl;
}
//print even or odd
void printEvenOdd(int arr[], int size){
    for(int i=0;i<size;i++){
        if (arr[i]%2==0){
            cout<<"Even"<<endl;
        }
        else
        cout<<"Odd"<<endl;
    }
}
//count 0 and 1
int count0=0,count1=0;
void count0and1(int arr[], int size){
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
    }
    cout<<"Total zero :"<<count0<<endl;
    cout<<"Total one :"<<count1<<endl;
}
int main()
{
// int knk[10];//array declared od capacity 10 not size
// cout<<"Enter the value of n=";
// int n;//size of the array
// cin>>n;
// for(int i=0;i<n;i++){
//     cin>>knk[i];
// }
// cout<<"Printing the array :"<<endl;
// for(int i=0;i<n;i++){
//     cout<<knk[i]<<" ";
// }

//taking character input
// char a[20];
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     cin>>a[i];
// }
// for(int i=0;i<n;i++){

//     cout<<a[i]<<" ";
// }

// int arr[10]={1,0,0,1,1,0,1};
// int size=7;
// printArray(arr,7);
// printTwice(arr,7);
// printEvenOdd(arr,7);
// count0and1(arr,7);
//cout<<arr;//shows base address
int arr[10];
int size=3;
for(int i=0;i<=size-1;i++){
    cin>>arr[i];
}
for(int i=0;i<=size-1;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<arr[2];
}