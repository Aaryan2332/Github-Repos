#include<iostream>
using namespace std;
int main(){

    int score = 300;
    int *myp = &score;

     printf("Value of the score is : %d\n", score);
     printf("Value of the score is : %p\n", myp);
    
     int &another_score = score;
     another_score = 220;

     printf("Value of the score is : %d\n", score);
     printf("Value of the score is : %p\n", myp);
     
return 0 ;
     
}               