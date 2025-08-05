#include<iostream>
using namespace std;
int main (){

char my_name[]= {'a','a','r','y','a','n',0};
 printf("My name is : %s\n", my_name); 

   cout<<"Take  a break\n";

   for(int i=0; my_name[i]; i++){
   cout<<"Character is : "<<my_name[i]<<endl;
   }
   cout<<"Take a break part-2\n";

   //Printed using Pointers and For Loop

   for(char *cp = my_name; *cp; cp++){
    cout<<"character is : "<<*cp<<endl;
   }

   cout<<"Take a break part-3\n";

   for(char i:my_name){
    if(i ==0 )break;
    cout<<"character is : "<<i<<endl;
   }


   return 0;
}