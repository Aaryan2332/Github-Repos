#include<iostream>
using namespace std;
int main(){
    printf("Welcome To Our Rating Program\n");
    printf("Please Rate us between 1 to 5\n");
    // int rate[5] = {1,2,3,4,5};
    int rate;
    cin>>rate;
    if(rate == 1){
     puts("Feeling Sad ");
    }else if(rate == 2){
     puts("Will work on it");
    }else if(rate == 3){
        puts("On safe side");
    }else if(rate == 4){
     puts("Watching On Bugs");
    }else{
        puts("Perfect");
    }
    printf("Thank You For Rating Us, Good Day");
    return 0;

}