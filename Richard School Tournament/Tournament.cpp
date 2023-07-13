#include <iostream>
using namespace std;
//ALTERNATIVE PROGRAM THAT RUNS FINE EXCEPT IT DOESNT FOLLOW THE REQUIREMENTS OF THE TASK SINCE IT USES INHERITANCE

class Sports{
    public:
     int calculateScore(int sixers,int fours,int singles){
        return (sixers*6)+(fours*4)+singles;
     }
     int calculateScore(int whiteCoins ,int blackCoins,bool red){
        if (red == true){
            return (whiteCoins*2)+(blackCoins*1)+5;
        }
        else {
            return (whiteCoins*2)+(blackCoins*1);
        }
     }
     int calculateScore(int goals ,int fouls){
        return goals-fouls;
     }
};

class Cricket : public Sports{
    private:
        int sixers, fours, singles;
    public:
    void setSixFourSingle(int six, int four, int single){
        sixers = six;
        fours = four;
        singles = single;
    }
    int getSixFourSingle(){
        return sixers,fours,singles;
    }
};

class Carrom : public Sports{
    private:
        int whiteCoins,blackCoins;
        bool red;
    public:
    void setBlackWhiteRed(int w, int b, bool r){
        whiteCoins = w;
        blackCoins = b,
        red = r;
    }
    int getBlackWhiteRed(){
        return whiteCoins,blackCoins,red;
    }
};
class Basketball : public Sports{
    private:
    int goals, fouls;
    public:
    void setGoalsFouls(int g, int f){
        goals = g;
        fouls = f;
    }
    int getGoalsFouls(){
        return goals,fouls;
    }
};

int main()
{   //DO NOT change the 'main' signature
    int six,four,single,white,black,goals,fouls;
    bool red;
    Cricket cr;
    Carrom ca;
    Basketball ba;
    cout<<"CRICKET:"<<endl;
    cout<<"Enter number of sixers : "<<endl;
    cin>>six;
    cout<<"Enter number of fours : "<<endl;
    cin>>four;
    cout<<"Enter number of singles : "<<endl;
    cin>>single;
    //fill the code here
    cout << "CALCULATED SCORE: " << cr.calculateScore(six,four,single) << endl;
    cout<<"CARROM:"<<endl;
    cout<<"Enter number of white coins pocket : "<<endl;
    cin>>white;
    cout<<"Enter number of black coins pocket : "<<endl;
    cin>>black;
    cout<<"Red Pocket(0/1): "<<endl;
    cin>>red;
    //fill the code here
    cout << "CALCULATED SCORE: " << ca.calculateScore(white,black,red) << endl;
    cout<<"BASKETBALL:"<<endl;
    cout<<"Enter number of goals : "<<endl;
    cin>>goals;
    cout<<"Enter number of fouls : "<<endl;
    cin>>fouls;
    //fill the code here
    cout << "CALCULATED SCORE: " << ba.calculateScore(goals,fouls) << endl;
    return 0;
}



/*ACCEPTED & CORRECT CODE */

#include <iostream>
using namespace std;

int calculateScore(int sixers,int fours,int singles){
 return sixers*6+fours*4+singles;   
}

int calculateScore(int whiteCoins ,int blackCoins,bool red){
    int score= whiteCoins*2+blackCoins;
    if(red){
        score = score + 5;
    }
    return score;
};
int calculateScore(int goals ,int fouls){
    return goals-fouls;
};

int main()
{   //DO NOT change the 'main' signature
    int six,four,single,white,black,goals,fouls;
    bool red;
    cout<<"CRICKET:"<<endl;
    cout<<"Enter number of sixers : "<<endl;
    cin>>six;
    cout<<"Enter number of fours : "<<endl;
    cin>>four;
    cout<<"Enter number of singles : "<<endl;
    cin>>single;
    //fill the code here
    cout<< "CALCULATED SCORE : " << calculateScore(six,four,single) << endl;
    cout<<"CARROM:"<<endl;
    cout<<"Enter number of white coins pocket : "<<endl;
    cin>>white;
    cout<<"Enter number of black coins pocket : "<<endl;
    cin>>black;
    cout<<"Red Pocket(0/1): "<<endl;
    cin>>red;
    //fill the code here
    cout<< "CALCULATED SCORE : " << calculateScore(white,black,red) << endl;
    cout<<"BASKETBALL:"<<endl;
    cout<<"Enter number of goals : "<<endl;
    cin>>goals;
    cout<<"Enter number of fouls : "<<endl;
    cin>>fouls;
    //fill the code here
    cout<< "CALCULATED SCORE : " << calculateScore(goals,fouls) << endl;
    return 0;
}

