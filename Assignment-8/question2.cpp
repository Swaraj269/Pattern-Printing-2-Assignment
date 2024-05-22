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
        for(int k=0; k<=(2*i-2); k++){
            cout<< (char)('A'+k) << " ";
        }
        cout<<endl;
    }
    return 0;
}