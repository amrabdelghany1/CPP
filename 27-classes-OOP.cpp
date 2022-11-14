#include<iostream>
using namespace std;



class student{
private:
    string name;
    int c, cpp;
    
public:
    void setName(string x){
        if(x!="gammal")
            name = x;
        else
            name = "error";
    }
    
    void setC(int x){
        c = x;
        if (c<85)
            cpp=0;
    }
    
    void setCPP(int x){
        if(c>=85)
            cpp=x;
        else
            cpp=0;
        
    }
    void print(){
        cout << name<<endl;
        cout << c <<endl;
        cout << cpp <<endl;
        
    }
};
int main(){
    student gammal[100];
    //    gammal[0].name = "Ahmed";
    //    'name' is a private member of 'student'
    gammal[0].setName("gammal");
    gammal[0].setC(90);
    gammal[0].setCPP(20);
    gammal[0].print();
    
}

