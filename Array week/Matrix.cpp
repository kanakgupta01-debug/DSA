#include<iostream>
#include<limits.h>
using namespace std;

//----ROWWISE----
void printRowWise(int arr[][2], int RowSize, int colSize){
    for(int row=0;row<RowSize;row++){
        for(int col=0;col<colSize;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}
void printColumnWise(int arr[][2], int RowSize, int colSize){
    for(int col=0;col<colSize;col++){
        for(int row=0;row<RowSize;row++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}
pair<int,int> searchIn2DArray(int arr[][2],int n,int m, int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                return{i,j};
            }
        }
    }
    return{-1,-1};
}
int getMinIn2DArray(int arr[][2], int n, int m){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                mini=min(mini,arr[i][j]);
        }
    }
    return mini;
}
int getMaxIn2DArray(int arr[][2], int n, int m){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                maxi=max(maxi,arr[i][j]);
        }
    }
    return maxi;
}
int main(){
    //int arr[3][2];//declared
    //int arr[3][4]={{1,2,3,4},{2,3,4,5},{7,9,8,7}};//initialised
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }

    //access the element using the index of row and colums
   // cout<<arr[0][1];

    //input and output
    // int brr[2][3];
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>brr[i][j];
    //     }
    // }
    // for(int i=0;i<2;i++){//rowwise traversal
    //     for(int j=0;j<3;j++){
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<brr[0][1];

    //----------Function------
    int arr[3][2]={{1,2},{3,4},{6,5}};
    //------SUM-----ROWWSIE-----
    // for(int i=0;i<3;i++){
    //     int sum=0;
    //     for(int j=0;j<2;j++){
    //         sum+=arr[i][j];
    //     }
    //     cout<<sum<<endl;
    // }
    // for(int j=0;j<2;j++){
    //     int sum=0;
    //     for(int i=0;i<3;i++){
    //         //int sum=0;
    //         sum+=arr[i][j];
    //     }
    //     cout<<sum<<endl;
    // }

    printRowWise(arr,3,2);
    //printColumnWise(arr,3 ,2);
    pair<int,int> ans=searchIn2DArray(arr, 3,2,1);
    cout<<ans.first<<","<<ans.second<<endl;//(2,1) 3rd row ka 2nd element

    cout<<getMinIn2DArray(arr,3,2)<<endl;
    cout<<getMaxIn2DArray(arr,3,2);

}