#include <iostream>
using namespace std;

class Shop {

    private:
        string itemName;
        int itemQuantity;
        double itemPrice;

    public:
         //Getters and setters for above variables.
         string getItemName(){
            return itemName;
         }
         int getItemQuantity(){
            return itemQuantity;
         }  
          double getItemPrice(){
            return itemPrice;
          }  
         void setItemName(string Name){
            itemName = Name;
         }
         void setItemQuantity(int Quantity){
            itemQuantity = Quantity;
         }
         void setItemPrice(double Price){
            itemPrice = Price;
         }
};

int main()//DO NOT change the 'main' signature
{
    //Input statements are provided as a part of code skeleton 
    string name;
    int quantity;
    double price;
    cout<<"Enter the item name:"<<endl;
    cin>>name;
    cout<<"Enter the item quantity:"<<endl;
    cin>>quantity;
    cout<<"Enter the item price:"<<endl;
    cin>>price;
    
    //Fill the code here
    Shop store;
    store.setItemName(name);
    store.setItemQuantity(quantity);
    store.setItemPrice(price); 
    cout << "Item Name:" << store.getItemName() << endl;
    cout << "Item Quantity:" << store.getItemQuantity() << endl;
    cout << "Item Price:" << store.getItemPrice() << endl;
    return 0;
}