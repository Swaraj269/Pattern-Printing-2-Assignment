#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    int nsp =1;
    int a = n;
    for(int i=1; i<=n; i++){
        if(i==1){
            for(int j =1; j<=n; j++){
                cout<< j<<" ";
            }
            for(int k = 1; k<=n-1; k++){
                cout<< n-k<<" ";
            }
        }
        else{
            for(int j =1; j<=n+1-i; j++){
                cout<< j<<" ";
            }
            for(int k = 1; k<=nsp; k++){
                cout<< " "<<" ";
            }
            nsp+=2;
            for(int l = 1; l<=n+1-i; l++){
                cout<< a-l<<" ";
            }
            a--;
        }
        cout<<endl;
    }
    return 0;
}