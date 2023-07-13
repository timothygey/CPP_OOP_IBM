#include <iostream>
using namespace std;
 
class Product
{
  protected:
    int markedPrice=1000;
    int discount=40;
    public:
        void setMarkedPrice(int mPrice)
        {
            markedPrice=mPrice;
        }
        void setDiscount(int dis)
        {
            discount=dis;
        }
        int getMarkedPrice()
        {
            return markedPrice;
        }
        int getDiscount()
        {
            return discount;
        }
};
 
class Dress  : public Product
{
  private:
  char size;
  public:
    char findSize(int chestSize){
          //Implement your code
          if (chestSize >= 20 && chestSize <= 30){
            size = 'S';
          }
          else if (chestSize >= 31 && chestSize <= 40){
            size = 'M';
          }
          else {
            size = 'L';
          }
          return size;
    }

};
 class Shirt  : public Dress
 {
  public:
     int calculatePrice(char chestSize){
       //Implement your code
       markedPrice = markedPrice-((markedPrice*discount)/100);
       if (chestSize == 'L'){
        markedPrice = markedPrice + 1000;
       }
       else if (chestSize == 'M'){
        markedPrice = markedPrice + 500;
       }
       return markedPrice;
     }
};

// main function
int main()
{
    
    int size;
   cout<<"Enter the chest size : ";
   cin>>size;
   //fill the code here
   Shirt tee;
   cout << "Dress Size: " << tee.findSize(size) << endl;
   cout << "Price (in $): " << tee.calculatePrice(tee.findSize(size));
    return 0;
}