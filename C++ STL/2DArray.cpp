#include<iostream>
#include<vector>
using namespace std;
int main(){

// vector<vector<int>> arr(4,vector<int>(4,0));
// //created 2d array whose no.of rows and columns are equal
// //with rows 4
// //with colums 4
// //each cell is initialized with 0
// //each column is itself a 1d array which stores int
// int totalRows=arr.size();
// cout<<totalRows<<endl;
// int totalColumns=arr[0].size();
// cout<<totalColumns<<endl;

//-----CREATING A jagged array----
vector<vector<int>> arr(4);//number of rows
arr[0]=vector<int>(4);//number of columns in row0
arr[1]=vector<int>(3);//number of columns in row1
arr[2]=vector<int>(5);//number of columns in row2
arr[3]=vector<int>(2);//number of columns in row3

int totalRowCount=arr.size();
cout<<totalRowCount<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i].size()<<" ";
}
//cout<<arr[3].size()<<endl;

//--------important-------//

//for (int i = 0; i < arr.size(); i++) {          // Rows
    //for (int j = 0; j < arr[i].size(); j++) {   // Columns
        //cout << arr[i][j] << " ";
    //}
    //cout << endl;
//}
}