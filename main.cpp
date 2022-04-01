#include <iostream>
using namespace std;
int main() {
   float a=0, b=0, triangolo=0, quadrato, rettangolo;
   int opzione=0;
   cout << "inserire due valori reali e un numero intero\n";
   cin >> a >> b >> opzione;
   switch(opzione){
       case 0:
           triangolo = a*b/2;
           cout << triangolo << endl;
           break;
       case 1:
           quadrato = a*a;
           cout << quadrato << endl;
           break;
       case 2:
           rettangolo = a*b;
           cout << rettangolo << endl;
       default:
           cout << "opzione non valida";
   }
    return 0;
}
