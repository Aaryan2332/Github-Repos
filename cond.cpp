#include <iostream>
using namespace std;
int main(){
   int rating = 4;
   if(rating == 5){
    puts("5 star rated");
   }else if(rating ==4){
     puts("Rated 4");
   }
   else{
    puts("Not rated 5");
   }
printf("Your rating feedback is %s\n" , rating > 4 ? "True Block" : "False Block");

    return 0;
}