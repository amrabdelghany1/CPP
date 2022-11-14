#include<iostream>
#include<string>
using namespace std;

class User_Membership{
private:
    int day, month, year;
    
public:
    bool setDate(int x, int y, int z){
        if (x >=1 && x <=31)
            day = x;
        else
            return false;
        if (y >=1 && y <=12)
            month = y;
        else
            return false;
        if (z >= 2022)
            year = z;
        else
            return false;
        return true;
        
    }
    
    void operator ++(){
        if (day < 31)
            day++;
        else{
            day = 1;
            if (month < 12)
                month++;
            else{
                month = 1;
                year++;
            }
        }
    }
    
    void print(){
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main(){
    User_Membership amr;
    int day, month, year;
    
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    
    if(amr.setDate(day, month, year) == false)
        cout << "Incorrect Date. " << endl;
    else
    {
        cout << "Date inserted successfully." << endl;
        amr.print();
        ++amr;
        amr.print();
    }
        
    
    
}
