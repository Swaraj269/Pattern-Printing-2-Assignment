#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    int a;
    for(int i= 1; i<=n; i++){
        for(int j = 1; j<=2*n-1; j++){
            if(j<=n){
                if(i==j){
                    cout<<"*"<< " ";
                }
                else{
                    cout<<" "<<" ";
                }
            }
            else{
                if(j-(2*(n-i)) == i){
                    cout<<"*"<< " ";
                }
                else{
                    cout<<" "<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}