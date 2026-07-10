#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Print(vector <int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void bubbleSort(vector <int> &v){
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<(v.size()-i-1);j++){
            if(v[j]>v[j+1]){//for descending order just change the comaparison operator
                swap(v[j],v[j+1]);
            }
        }
    }
}
int main(){
    // vector <int> v={79,9,6,0,-1,-2};
    // bubbleSort(v);
    // Print(v);
    
    //------USER INPUT____
    vector<int> v;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    // vector<int> v;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    bubbleSort(v);
    cout << "Sorted vector: ";
    Print(v);
}