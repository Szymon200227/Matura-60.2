#include <iostream>
#include <fstream>

using namespace std;



int main(){

fstream plik, wyniki;
plik.open("liczby.txt", ios::in);
wyniki.open("wyniki.txt", ios::out | ios::trunc);

int x[1000],licznik=0;
int nr_tab=1000;
int dzielniki[18];


for (int i=0; i<1000; i++)
{
	plik >> x[i];
	if (x[i]<1000) licznik++;
}	


for (int i=0; i<200; i++)
{
	
	licznik=0;
	for (int j=1; j<=x[i]; j++)
	{
  		if (x[i]%j==0)
  		{
   			dzielniki[licznik]=j;
   			licznik++;
   			if (licznik>18) break;
  		}

 	}
 	

	if (licznik==18)
	{

		wyniki << x[i] <<endl;

		for (int k=0; k<18; k++)
		{
			if (k==17) wyniki << dzielniki[k];
			else wyniki << dzielniki[k] << " ";
		}
  		wyniki << endl;
	}

}

wyniki.close();
plik.close();

}
