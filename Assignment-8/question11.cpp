#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    int b =1;
    for(int i = 1; i<=2*n-1; i++){
        if(i==1 || i== 2*n-1){
            for(int j = 1; j<=2*n-1; j++){
                cout<<"*"<< " ";
            }
        }
        else{
            if(i<=n){
                for(int j=1; j<=n-i+1; j++){
                cout<<"*"<< " ";
                }
                for(int k=1; k<= b; k++){
                    cout<<" "<< " ";
                }
                if(i==n) b-=2;
                else b+=2;
                for(int j=1; j<= n-i+1; j++){
                    cout<<"*"<< " ";
                }
            }
            else{
                for(int j=1; j<=i-n+1; j++){
                    cout<<"*"<< " ";
                }
                for(int k=1; k<=b; k++){
                    cout<<" "<< " ";
                }
                b-=2;
                for(int j=1; j<= i-n+1; j++){
                    cout<<"*"<< " ";
                }
            }
        }
        cout<< endl;
    }
    return 0;
}