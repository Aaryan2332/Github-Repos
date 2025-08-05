#include<iostream>
using namespace std;

 void sayhello(){
  puts("Hello There!");
 }
//here the two is int so we can add any int in it.
int saytwo(){
    return 2;
 }
//here the 3 is like a string so we cannot add any integer to it.
void saythree(){
puts("3");
}

int main(){
    
sayhello();
printf("%d\n" , saytwo()+4);
saythree();

return 0;
}