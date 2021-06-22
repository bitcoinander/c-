#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
 float n1, n2,n3,n4, media=0;
 char notas;

cout <<"CALCULANDO MÉDIA EM C++" << endl;
cout <<"DIGITE [M]PARA CONTINUAR:_";
cin >> notas;
cout << endl;

switch (notas)
{
    case 'm':   
 cout << endl <<"Digite a primeira nota:";
 cin >> n1;
 cout << endl <<"Digite a segunda nota:";
 cin >> n2;
 cout << endl <<"Digite a terceira nota:";
 cin >> n3;
 cout << endl <<"Digite a quarta nota:";
 cin >> n4;
 media = (n1+n2+n3+n4)/4;
 cout << "A sua média é:"<<media <<endl <<endl;
 cout << endl;
 break;

default: 
cout <<"operação invalida..." <<endl;
}
return 0;

}
