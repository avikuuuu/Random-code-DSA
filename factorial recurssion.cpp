#include<iostream>
using namespace std;

int factorial(int n){

    if(n==0){
        return 1;
    }

    return n*factorial(n-1);

}

main() {
    int n;
    cin>>n;
    int show=factorial(n);
    cout<<show<<endl;

}
