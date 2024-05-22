#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<< "Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" "<< " ";
        }
        for(int k=0; k<i; k++){
            cout<< (char)(64+(i-k)) << " ";
        }
        for(int l=1; l<=i-1;l++){
            cout<< (char)(65+l) << " ";
        }
        cout<<endl;
    }
    return 0;
}