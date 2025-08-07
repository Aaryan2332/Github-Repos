#include<iostream>
using namespace std;
int main (){

    bool isfbUser = false;
    bool isGoogleUser = true;
    bool isAdmin = true;
    
    if((isfbUser||isGoogleUser)&& isAdmin){
     puts("Welcome Admin");
    }else{
        puts("No Admin access!");
    }

    if(isfbUser||isGoogleUser){
        puts("Welcome User");
    }
}