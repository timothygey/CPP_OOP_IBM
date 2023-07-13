#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class MonthlyExpense {

   private:
    double household_exp;
    double medical;
   public:
        
        void setHouseHoldExpense(double houseExp) {
           //Implement your code
           household_exp = houseExp;
        }
       
        void setMedicalExpense(double medical) {
          //Implement your code
          this->medical=medical;
        }

        double getHouseHoldExpense(){
            return household_exp;
        }

        double getMedicalExpense(){
            return medical;
        }

    double calculateNovemberMonthExpense() {
        
       //Implement your code
        return household_exp + medical;
    }


    double calculateDecemberMonthExpense() {
        //Implement your code
        return household_exp + medical;
    }


    double calculateTotalExpense() {
        //Implement your code
        return household_exp + medical;
    }
    
    MonthlyExpense operator +(const MonthlyExpense b)
    {
       //Implement your code
       MonthlyExpense expense;
       expense.household_exp = household_exp + b.household_exp;
       expense.medical = medical + b.medical;
       return expense;
    }

};


int main() {
    
    double expenses = 0.0;
    double novHousHol1,novMedEx2,decHousHol1,decMedEx2;
    
    cout<<"Enter the House hold expense of November(in $)  :";
    cin>>novHousHol1;
    cout<<"Enter the Medical expense of November(in $)  :";
    cin>>novMedEx2;
    cout<<"Enter the House hold expense of December(in $) :";
    cin>>decHousHol1;
    cout<<"Enter the Medical expense of December(in $) :";
    cin>>decMedEx2;
    //Implement your code
    MonthlyExpense Nov;
    MonthlyExpense Dec;
    MonthlyExpense Both;

    Nov.setHouseHoldExpense(novHousHol1);
    Nov.setMedicalExpense(novMedEx2);
    Dec.setHouseHoldExpense(decHousHol1);
    Dec.setMedicalExpense(decMedEx2);

    expenses = Nov.calculateNovemberMonthExpense();
    cout << "November Expense (in$): " << expenses << endl;
    expenses = Dec.calculateDecemberMonthExpense();
    cout << "December Expense (in$): " << expenses << endl;

    Both = Nov + Dec;
    expenses = Both.calculateTotalExpense();
    cout << "Total Expenses for the month of Nov and Dec (in$): " << expenses << endl;
    return 0;
}