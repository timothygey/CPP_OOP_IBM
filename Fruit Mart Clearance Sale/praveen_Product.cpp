//IMPLEMENT CLASS PRODUCT ONLY IN THIS FILE

#include<iostream>
using namespace std;
class Product 
{
    private:
    int productId;
    string productName;
    double quantity;
    double unitPrice;
    public:
    double discountPercentage;
    Product(int productId,string productName,double quantity,double unitPrice){
        this->productId=productId;
        this->productName=productName;
        this->quantity=quantity;
        this->unitPrice=unitPrice;
    }
    int getProductId(){
        return productId;
    }
   string getProductName(){
        return productName;
    }
    double getQuantity(){
        return quantity;
    }
    double getUnitPrice(){
        return unitPrice;
    }
    void setProductId(int productId){
        this->productId=productId;
    }
    void setProductName(string productName){
        this->productName=productName;
    }
    void setQuantity(double quantity){
        this->quantity=quantity;
    }
    void setUnitPrice(double unitPrice){
        this->unitPrice=unitPrice;
    }
    double calculateBillAmount(){
        return unitPrice*quantity; 
    };
    friend void setDiscount(Product &product, double discount);
    Product(){};
};