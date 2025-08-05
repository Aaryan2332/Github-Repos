#include<iostream>
using namespace std;
int main(){
    int rating = 3;
    switch(rating){
    case 1:
        puts("Rated as 1");
        break;
    case 2:
        puts("Rated as 2");
        break;
    case 3:
        puts("Rated as 3");
        break;
    case 4:
        puts("Rated as 4");
        break;
    case 5:
        puts("Rated as 5");
        break;
    Default :
        puts("Pls rate us between 1 to 5");
        break;
    }
}