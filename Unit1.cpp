//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>




//---------------------------------------------------------------------------
using namespace std;
void bew_turm(int,int ,int,int);
int counter;
int main()
{
        int Anzahl;

        cout<<"Tuerme von Hanoi, rekursiv\n";
        cout<<"Anzahl der T�rme eingeben: ";
        cin<<Anzahl;
        counter = 0;
        bew_turm(Anzahl,1,2,3);
        system("pause");
        return 0;
}
//---------------------------------------------------------------------------

void bew_turm(int n,int start,int ziel,int hilf)
        {

        if (n != 1){

                bew_turm(n-1, start, hilf, ziel);
                bew_turm(1, start, ziel, hilf);
                bew_turm(n-1, hilf, ziel, start);

        }
        else
        cout<<++counter<<":"<<start<<" -> "<<ziel<<endl;
        }

