#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){

    
    double  raioEsfera, pi = 3.14159;
    cin  >> raioEsfera;
    cout << fixed << setprecision(3);
    
    cout<<"VOLUME = "<<(4/3.0)*pi*(pow(raioEsfera,3))<<endl;

}