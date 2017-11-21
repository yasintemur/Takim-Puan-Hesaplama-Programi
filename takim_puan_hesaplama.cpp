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
	string takim[] = {"Galatasaray", "Fenerbahçe", "BeşikTaş", "TrabzonSpor"};
	int enb,yedek;
	
	cout << "Galatasaray'ın Galibiyet Sayısını Giriniz=";
	cin >> gsgalibiyet;
	cout << "Galatasaray'ın Mağlubiyet Sayısını Giriniz=";
	cin >> gsmaglubiyet;
	cout << "Galatasaray'ın Beraberlik Sayısını Giriniz=";
	cin >> gsberaberlik;
	cout << "\n";
	gstoplam=gsgalibiyet+gsmaglubiyet+gsberaberlik;
	gspuan=(gsgalibiyet*3)+gsberaberlik;
	
	do
	{
	cout << "--------------------------------------------\n";
	cout << "\nFenerBahçe'nin Galibiyet Sayısını Giriniz=";
	cin >> fbgalibiyet;
	cout << "FenerBahçe'nin Mağlubiyet Sayısını Giriniz=";
	cin >> fbmaglubiyet;
	cout << "FenerBahçe'nin Beraberlik Sayısını Giriniz=";
	cin >> fbberaberlik;
	cout << "\n";
	fbtoplam=fbgalibiyet+fbmaglubiyet+fbberaberlik;
	fbpuan=(fbgalibiyet*3)+fbberaberlik;
	if(gstoplam!=fbtoplam)
	{
		cout << "\nToplam Maç Sayısı Eşit Değil.Lütfen Tekrar Deneyiniz.\n\n";
	}
	}
	while(gstoplam!=fbtoplam);
	
	do
	{
	cout << "--------------------------------------------\n";
	cout << "\nBeşiktaş'ın Galibiyet Sayısını Giriniz=";
	cin >> bjkgalibiyet;
	cout << "Beşiktaş'ın Mağlubiyet Sayısını Giriniz=";
	cin >> bjkmaglubiyet;
	cout << "Beşiktaş'ın Beraberlik Sayısını Giriniz=";
	cin >> bjkberaberlik;
	cout << "\n";
	bjktoplam=bjkgalibiyet+bjkmaglubiyet+bjkberaberlik;
	bjkpuan=(bjkgalibiyet*3)+bjkberaberlik;
	if(gstoplam!=bjktoplam)
	{
		cout << "\nToplam Maç Sayısı Eşit Değil.Lütfen Tekrar Deneyiniz.\n\n";
	}
	}
	while(gstoplam!=bjktoplam);
	
	do
	{
	cout << "--------------------------------------------\n";
	cout << "\nTrabzonSpor'un Galibiyet Sayısını Giriniz=";
	cin >> tsgalibiyet;
	cout << "TrabzonSpor'un Mağlubiyet Sayısını Giriniz=";
	cin >> tsmaglubiyet;
	cout << "TrabzonSpor'un Beraberlik Sayısını Giriniz=";
	cin >> tsberaberlik;
	cout << "\n";
	tstoplam=tsgalibiyet+tsmaglubiyet+tsberaberlik;
	tspuan=(tsgalibiyet*3)+tsberaberlik;
	if(gstoplam!=tstoplam)
	{
		cout << "\nToplam Maç Sayısı Eşit Değil.Lütfen Tekrar Deneyiniz.\n\n";
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
