#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n=5;

    for(int i=0; i<n; i++){
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
