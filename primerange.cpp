 #include<iostream>
 using namespace std;
 int main(){
    int l,r;
    cout<<"enter l(starting number)";
    cin>>l;
    cout<<"enter r(ending number)";
    cin>>r;
    cout<<"prime numbers between l and r are:"<<endl;

    for (int num = l; num < r; num++){
        if(num<=1){
            continue;
        }
        int factor_count=0;
        for(int i=2;i*i<=num;i++){
            if (num%i==0){
                factor_count++;
                break;
            }
        }if(factor_count==0){
            cout<<num<<" ";
        }
    }
    cout<<endl;
    return 0;
    
 }
