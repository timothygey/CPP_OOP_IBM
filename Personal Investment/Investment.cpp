#include <iostream>
#include<string>
using namespace std;

int calculateTotalReturns(int amount,int interestRate){
    return amount + ((amount * interestRate)/100);
};
int calculateTotalReturns(int depositAmount ,int term,int returnRate){
    int totalReturn = depositAmount + (depositAmount*returnRate/100);
    return totalReturn*term*12;
};
int calculateTotalReturns(string stockName,double price,int number){
    return price*number;
};
//Fill code here

int main()   //DO NOT change the 'main' signature
{
    int stockName;
    int numbers,amount,rate,depositAmount,term,rRate;
    double sharePrice;
    cout<<"Stock:"<<endl;
    cout<<"Enter stock Name : "<<endl;
    cin>>stockName;
    cout<<"Enter stock price : "<<endl;
    cin>>sharePrice;
    cout<<"Enter number of stocks : "<<endl;
    cin>>numbers;
    //Fill code here
    cout << "Total Returns (In US dollars): "<< calculateTotalReturns(stockName, sharePrice, numbers);
    cout<<"FD:"<<endl;
    cout<<"Enter Amount : "<<endl;
    cin>>amount;
    cout<<"Enter interest rate : "<<endl;
    cin>>rate;
    //Fill code here
    cout << "Total Returns (In US dollars): " << calculateTotalReturns(amount,rate);    
    cout<<"Mutual Funds :"<<endl;
    cout<<"Enter amount for SIP: "<<endl;
    cin>>depositAmount;
    cout<<"Enter term : "<<endl;
    cin>>term;
    cout<<"Enter return rate : "<<endl;
    cin>>rRate;
    //Fill code here
    cout << "Total Returns (In US dollars): " << calculateTotalReturns(depositAmount,term,rate);
    return 0;    
}