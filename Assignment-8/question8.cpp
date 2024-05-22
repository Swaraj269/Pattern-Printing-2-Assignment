#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    int nsp =1;
    for(int i = 1; i<=n; i++){
        for(int j =1; j<=n-i; j++){
            cout<< " "<< " ";
        }
        cout<< i<<" ";
            if(i>1){
                for(int k = 1; k<=nsp; k++){
                    cout<< " "<< " ";
                }
                nsp+=2;
                cout<< i<<" ";
            }
        cout<<endl;
    }
}