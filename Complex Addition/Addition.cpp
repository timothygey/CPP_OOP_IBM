#include<iostream>
using namespace std;

class Addition{
    private:
    int real;
    int img;
    
    public:
    //Fill the code here 
    void setReal(int r){
        real = r;
    }
    void setImg(int i){
        img = i;
    }
    int getReal(){
        return real;
    }
    int getImg(){
        return img;
    }
    Addition(int real, int img){
        this->real=real;
        this->img=img;
    }
    friend class Operation;
};
