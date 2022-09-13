#include <iostream>
#include <iomanip>
#include <math.h>
    using namespace std;
        int main (){

       double A, B, C;
    cout<<fixed<<setprecision(1);
cin>>A>>B>>C;
cout<<fixed<<setprecision(3);
cout<<"TRIANGULO: "<<(A*C)/2<<"\n";
cout<<"CIRCULO: "<<3.14159*(pow(C,2))<<"\n";;
cout<<"TRAPEZIO: "<<(A+B)*C/2<<"\n";;
cout<<"QUADRADO: "<<B*B<<"\n";
cout<<"RETANGULO: "<<A*B<<endl;

    
}