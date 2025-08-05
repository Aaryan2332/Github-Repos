#include <iostream>
// #include<string>
using namespace std;
//Here we can see that the values have been edited through the refrence. 
//But the address of the pointers are remained the same.
int main(){

int score = 700;
int *myp = &score;

printf ("Value of score is = %d\n", score);
printf ("Value of pointer is = %p\n", myp);

int &another_score = score;
another_score = 1000;

printf ("Value of score is = %d\n", score);
printf ("Value of pointer is = %p\n", myp);


return 0;
}