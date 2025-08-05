#include<iostream>
using namespace std;

int main(){

    int call_api = 2;

    try{
    cout<<"Trying to use API value\n";
    cout<<"Did some testing with API values\n";
    throw call_api;
    cout<<"No code will execute after throw and return\n";
    }catch(int x){
        cout<<"Integer exception handled\n";

    }catch(...){
     cout<<"something went wrong\n";
    }
    cout<<"Keep on moving with the code\n";
return 0;
}