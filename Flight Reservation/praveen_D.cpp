//IMPLEMENT METHOD 'calculateReimbursement' and 'main' IN THIS FILE
#include<iostream>
#include "Reservation.cpp"
using namespace std;

//Fill the code here
void calculateReimbursement(Reservation &res){
    
    if(res.ticketCost>6000){
        res.discountPercentage="5%";
        cout<<"You are eligible for " << res.discountPercentage << "discount"<<endl;
    }
    else{
        res.discountPercentage="0%";
        cout<<"No discount is available for you"<<endl;

    }
};

int main()
{
    int id,noOftickets;
    string name,food;
    double rate;
    cout<<"Enter the reservation id"<<endl;
    cin>>id;
    cout<<"Enter the reservation name"<<endl;
    cin>>name;
    cout<<"Enter number of tickets"<<endl;
    cin>>noOftickets;
    cout<<"Enter per ticket rate"<<endl;
    cin>>rate;
    cout<<"Enter type of food"<<endl;
    cin>>food;
   //Fill the code here
   Reservation r1(id,name,noOftickets,rate,food);
   r1.calculateTicketCost();
   calculateReimbursement(r1);
   return 0;
}