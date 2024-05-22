#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a ;
    for(int i=1; i<=n; i++){
        if(i==1){
            for(int j=1; j<=2*n-1; j++){
                cout<< (char)(64+j)<< " ";
            }
        }
        else{
            a = 1;
            for(int j=1; j<=n-i+1; j++){
                cout<< (char)(64+a)<< " ";
                a++;
            }
            for(int k = 1; k<=(2*(i-1))-1; k++){
                cout<<" "<<" ";
                a++;
            }
            for(int l = 1; l<=n-i+1; l++){
                cout<< (char)(64+a)<< " ";
                a++;
            }
        }
        cout<<endl;
    }
    return 0;
}