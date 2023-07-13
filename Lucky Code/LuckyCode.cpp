#include<iostream>
using namespace std;
bool findMiddle(int num)
{
       //Implement your Code here   
       int middledigit = (num/10) % 10;
       if (middledigit == 5 || middledigit == 7){
        cout << num << " is a lucky code";
        return true;
       }
       else {
        throw runtime_error("Not a lucky code");
       }
       return false;
}
int main()
{
        int num;
        cout<<"Enter the number"<<endl;
        cin>>num;
        try
        {
             //Implement your Code here   
            findMiddle(num); 
        }
        catch(exception &e)
        {
            cerr << e.what() <<endl;
        }    
    
}
