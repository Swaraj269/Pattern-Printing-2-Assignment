#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    int nsp = n-1;
    int nsp2 = 1;
    int nst = 1;
    for(int i = 1; i<=2*n-1;i++){
        for(int j = 1; j<= 2*n-1; j++ ){
            int a = i;
            int b = j;
            if(i>n) a = 2*n-i;
            if(j>n) b = 2*n-j;
            if(a+b == 5){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}