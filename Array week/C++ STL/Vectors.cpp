#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> marks;
    // marks.push_back(5);
    // marks.push_back(10);
    // marks.push_back(30);
    //cout<<marks.capacity()<<endl;//as soon as the 30 is pushed back the size grows to. double of the array 2 to 4 hence capacity is 4 in output
    //cout<<marks.size()<<endl; 
    //marks[0]=100;
    //cout<<marks[0]<<"\n";//elements can be modified at the run time
    //marks.pop_back();
    //cout<<marks.size()<<endl;
    // cout<<marks.front()<<endl;
    // cout<<marks.back()<<endl;
   // if(marks.empty()==true){
    //     cout<<"Vector is empty \n";
    // }
    // else{
    //     cout<<"Vector is not empty \n";
    // }
    // cout<<marks.max_size()<<endl;
    // //marks.clear();
    // //cout<<marks.size()<<endl;
    // marks.insert(marks.begin(),50);
    // cout<<marks.size()<<endl;
    // cout<<marks[0]<<endl;
    // marks.insert((marks.begin()+2),76);
    // cout<<marks[2]<<endl;
    // cout<<marks.size()<<endl;



    // //cout<<marks.begin();//. marks.begin() location hai uski value print krne ke liye * use krte hain
    // cout<<marks[1]<<endl;//1st index pr jo element hai usey return krta hai
    // cout<<*marks.begin()<<" "<<*(marks.end()-1);//end() points one position after the last element.

        //---------//
    //  vector<int> hello(5,-1);//initialised vector of size 5 and each block contains -1
    // for(int i=0;i<5;i++){
    // cout<<hello[i]<<" "<<endl;
    // }
    // cout<<hello.capacity()<<endl; 
    // cout<<hello.size()<<endl; 
    //

    //--------swapping elements-----

    vector<int> first;
    vector<int> second;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    //traversing the vector using iterator

    vector<int>:: iterator it=first.begin();
    while(it != first.end()){
        cout<<*it<<" ";
        it++;
        //cout<<*it<<" ";
    }
    // second.push_back(11);
    // second.push_back(13);
    // second.push_back(112);
    // first.swap(second);
    //cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<endl;

    //for(int i=0;i<first.size();i++){ //traversing and printing each element present in a vector
        //cout<<first[i]<<" ";
    //}

    //---------using for each loop-------
    // for(int i:first){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(int i:second){
    //     cout<<i<<" ";
    // }
    
}