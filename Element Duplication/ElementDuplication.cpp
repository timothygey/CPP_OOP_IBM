#include<iostream>
#include<exception>
#include <string> 
using namespace std; 

void elementDuplication(){
    //Implement your code here
    int size, index;

    cout << "Enter the size of an array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the array elements" << endl;
    for (int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Enter the index position of the element in the array to be replicated" << endl;
    cin >> index;
    if (index <= size - 1){
        arr[size - 1] = arr[index];
        for (int j=0; j<size; j++){
            cout << arr[j] << "\t";
        }
    }
    else {
        throw runtime_error("Array index is out of range");
    }
}
int main()
{
    
    try
    {
        //Call the function
        elementDuplication();
    }
     catch(exception &e)
     {
         cerr<<e.what();
     } 
}
