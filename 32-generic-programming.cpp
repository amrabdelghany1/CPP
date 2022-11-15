#include<iostream>

using namespace std;

template <typename t>
void printMax(t x, t y){
    t z  = x > y ? x : y;
    cout << z << endl;
    return;
}

int main(){
    printMax("Amr", "Esraa");
    
}

