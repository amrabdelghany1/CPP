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
        if (z >= 2021)
            year = z;
        else
            return false;
        return true;
        
    }
    
    void print(){
        cout << day << "/" << month << "/" << year << endl;
    }
    
    
    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }
};

class yearly_sub:public User_Membership{
public:
    void operator ++(){
        setDate(getDay(), getMonth(), getYear()+1);
        
    }
};

class monthly_sub:public User_Membership{
public:
    void operator ++(){
        if (getMonth() < 12)
            setDate(getDay(), getMonth() + 1, getYear());
        else
            setDate(getDay(), 1, getYear() + 1);
    }
};

int main(){
    yearly_sub amr;
    monthly_sub esraa;
    
    amr.setDate(19, 10, 2022);
    ++amr;
    
    esraa.setDate(12, 12, 2021);
    ++esraa;
    
    amr.print();
    esraa.print();
    
   
}

