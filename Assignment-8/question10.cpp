#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    int nsp = 5;
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            cout<< "*"<< " ";
        }
        for(int k =1; k<=nsp; k++){
            cout<< " "<< " ";
        }
        nsp-=2; 
        for(int j=1; j<=i; j++){
            cout<< "*"<< " ";
        }
        cout<< endl;   
    }
    for(int i = 1; i<=2; i++){
        for(int j =1; j<=2*n-1; j++){
            cout<< "*"<< " ";
        }
        cout<< endl;
    }
    nsp = 1;
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            cout<< "*"<< " ";
        }
        for(int k =1; k<=nsp; k++){
            cout<< " "<< " ";
        }
        nsp+=2; 
        for(int j=1; j<=n-i; j++){
            cout<< "*"<< " ";
        }
        cout<< endl;   
    }
}