#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    for(int i=1; i<=2*n+1; i++){
        for(int j=1; j<=2*n+1; j++){
            int a = i;
            int b = j;
            if(i>n) a = (2*n+1)-i+1;
            if(j>n) b = (2*n+1)-j+1;
            if(a+b == 7) cout<< "*"<< " ";
            else if(a==6 || b==6) cout<< "*"<< " ";
            else cout<< " "<< " ";
        }
        cout<<endl;
    }
    return 0;
}