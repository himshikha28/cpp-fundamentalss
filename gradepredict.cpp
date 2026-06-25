#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Marks";
    cin>>marks;
    if(marks>=90){
        cout<<"A Grade"<<endl;
    }
    else if(marks>=60){
        cout<<"B Grade"<<endl;
    }
    else if(marks>=40){
        cout<<"C Grade"<<endl;
    }
    else{
        cout<<"D Grade"<<endl;
    }
    return 0;
}
