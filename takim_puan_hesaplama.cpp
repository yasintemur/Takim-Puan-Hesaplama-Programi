#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int gsgalibiyet,gsmaglubiyet,gsberaberlik,gstoplam,gspuan;
	int fbgalibiyet,fbmaglubiyet,fbberaberlik,fbtoplam,fbpuan;
	int bjkgalibiyet,bjkmaglubiyet,bjkberaberlik,bjktoplam,bjkpuan;
	int tsgalibiyet,tsmaglubiyet,tsberaberlik,tstoplam,tspuan;
	int takimpuan[3];
	string yedek2;
	string takim[] = {"Galatasaray", "Fenerbah�e", "Be�ikTa�", "TrabzonSpor"};
	int enb,yedek;
	
	cout << "Galatasaray'�n Galibiyet Say�s�n� Giriniz=";
	cin >> gsgalibiyet;
	cout << "Galatasaray'�n Ma�lubiyet Say�s�n� Giriniz=";
	cin >> gsmaglubiyet;
	cout << "Galatasaray'�n Beraberlik Say�s�n� Giriniz=";
	cin >> gsberaberlik;
	cout << "\n";
	gstoplam=gsgalibiyet+gsmaglubiyet+gsberaberlik;
	gspuan=(gsgalibiyet*3)+gsberaberlik;
	
	do
	{
	cout << "--------------------------------------------\n";
	cout << "\nFenerBah�e'nin Galibiyet Say�s�n� Giriniz=";
	cin >> fbgalibiyet;
	cout << "FenerBah�e'nin Ma�lubiyet Say�s�n� Giriniz=";
	cin >> fbmaglubiyet;
	cout << "FenerBah�e'nin Beraberlik Say�s�n� Giriniz=";
	cin >> fbberaberlik;
	cout << "\n";
	fbtoplam=fbgalibiyet+fbmaglubiyet+fbberaberlik;
	fbpuan=(fbgalibiyet*3)+fbberaberlik;
	if(gstoplam!=fbtoplam)
	{
		cout << "\nToplam Ma� Say�s� E�it De�il.L�tfen Tekrar Deneyiniz.\n\n";
	}
	}
	while(gstoplam!=fbtoplam);
	
	do
	{
	cout << "--------------------------------------------\n";
	cout << "\nBe�ikta�'�n Galibiyet Say�s�n� Giriniz=";
	cin >> bjkgalibiyet;
	cout << "Be�ikta�'�n Ma�lubiyet Say�s�n� Giriniz=";
	cin >> bjkmaglubiyet;
	cout << "Be�ikta�'�n Beraberlik Say�s�n� Giriniz=";
	cin >> bjkberaberlik;
	cout << "\n";
	bjktoplam=bjkgalibiyet+bjkmaglubiyet+bjkberaberlik;
	bjkpuan=(bjkgalibiyet*3)+bjkberaberlik;
	if(gstoplam!=bjktoplam)
	{
		cout << "\nToplam Ma� Say�s� E�it De�il.L�tfen Tekrar Deneyiniz.\n\n";
	}
	}
	while(gstoplam!=bjktoplam);
	
	do
	{
	cout << "--------------------------------------------\n";
	cout << "\nTrabzonSpor'un Galibiyet Say�s�n� Giriniz=";
	cin >> tsgalibiyet;
	cout << "TrabzonSpor'un Ma�lubiyet Say�s�n� Giriniz=";
	cin >> tsmaglubiyet;
	cout << "TrabzonSpor'un Beraberlik Say�s�n� Giriniz=";
	cin >> tsberaberlik;
	cout << "\n";
	tstoplam=tsgalibiyet+tsmaglubiyet+tsberaberlik;
	tspuan=(tsgalibiyet*3)+tsberaberlik;
	if(gstoplam!=tstoplam)
	{
		cout << "\nToplam Ma� Say�s� E�it De�il.L�tfen Tekrar Deneyiniz.\n\n";
	}
	}
	while(gstoplam!=tstoplam);
	takimpuan[0]=gspuan;
	takimpuan[1]=fbpuan;
	takimpuan[2]=bjkpuan;
	takimpuan[3]=tspuan;
	enb=takimpuan[0];
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(takimpuan[i]>takimpuan[j])
			{
				yedek=takimpuan[i];
				takimpuan[i]=takimpuan[j];
				takimpuan[j]=yedek;
				yedek2=takim[i];
				takim[i]=takim[j];
				takim[j]=yedek2;
			}
		}
	}
	cout << "\n";
	for(int i=0; i<4; i++)
	{
		cout << i+1 << "." << takim[i] <<" " << takimpuan[i] << "\n";
	}
}
