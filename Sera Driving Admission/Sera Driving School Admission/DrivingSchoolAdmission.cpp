#include <iostream>
#include<string.h>
using namespace std;

string eligibilityForSchool(int age) 
{
    //Implement the code here
    if (age >= 18){
      return "Eligible for Admission";
    } 
    else {
      throw "Not eligible for Admission";
    }
}

int main() 
{
    //Fill the code here
   int age;
   cout << "Enter the age" << endl;
   cin >> age;
   try 
   {
      //Implement the code here 
     cout << eligibilityForSchool(age);         
   } catch (const char* msg) 
   {
     cerr << msg << endl;
   }
}
