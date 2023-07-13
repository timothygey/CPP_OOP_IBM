#include <iostream>
using namespace std;

class Mobile{
    
    private:    
        string mobileBrand;
        string mobileModelName;
        double mobilePrice;
        
    public:    
        //Include Getters and setters for above variables.
        string getMobileBrand(){
            return mobileBrand;
        }
        string getMobileModelName(){
            return mobileModelName;
        }
        double getMobilePrice(){
            return mobilePrice;
        }
        void setMobileBrand(string brand){
            mobileBrand = brand;
        } 
        void setMobileModelName(string model){
            mobileModelName = model;
        }
        void setMobilePrice(double price){
            mobilePrice = price;
        }
};

int main()//DO NOT change the 'main' signature
{
        //Input statements are provided as part of the code skeleton
        string brand,model;
        double price;
        cout<<"Enter the mobile brand:"<<endl;
        cin>>brand;
        cout<<"Enter the mobile model name:"<<endl;
        cin>>model;
        cout<<"Enter the mobile price:"<<endl;
        cin>>price;
        
        //Fill the code here
        Mobile mb;
        mb.setMobileBrand(brand);
        mb.setMobileModelName(model);
        mb.setMobilePrice(price);
        cout << "Mobile Details" << endl;
        cout << "Mobile Brand:" << mb.getMobileBrand() << endl;
        cout << "Model Name:" << mb.getMobileModelName() << endl;
        cout << "Mobile Price: " << mb.getMobilePrice();

        return 0;
}