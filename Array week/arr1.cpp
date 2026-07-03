#include <iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    //only size diya hai hmne values nhin toh output mein garbage values hain
    //int arr[5];

    //initailised size as well as values given so output mein bhi values aayei
    //int arr[5]={1,2,3,4,5};

    //remaining 3 values will be 0
    //int arr[5]={19,34};

    //poora array 0 se initialize ho jayega
    //int arr[5]={0};

    //sbhi mein 1 nhi aayega only ek mein 1 aayega and baaki mein 0
    //int arr[5]={1};

    //agr array ka size nhin likha hai and apne end se value provide ki hain tb bhi run krega
    //int arr[]={1,2,4};

    //1 print krne k liye
    // int brr[10];//={34,54,23,65,67};
    // int size=5;
    // for(int i=0;i<size;i++){
    //     brr[i]=1;
    //     cout<<brr[i]<<" ";
    // }

    //int arr[10]={34,54,23,65,67};
    //int size=5;
    //for(int i=0;i<5;i++){
        //arr[i]=1;
        //cout<<arr[i]<<" ";
    //}
    //printArray(arr,10);
    int arr[10];
    int n=5;
    fill(arr,arr+5,1);//arr is the pointer to the first element
    //arr + 5 is a pointer to the element just after arr[4]
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;

}