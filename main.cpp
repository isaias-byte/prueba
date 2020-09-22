#include <iostream>

using namespace std;

int main()
{
    string nombre;
    int edad;
    cout<<"Hola Mundo"<<endl;

    cout<<"Dame el nombre: ";
    getline(cin,nombre);
    cout<<"Edad: ";
    cin>>edad;
    cout<<"El usuario se llama "<<nombre<<", y va a cumplir "<<(edad+1)<<endl;
    return 0;
}
