/*Kelompok 6 : 
1. Dea Ananta (2217051054)
2. Fathiyya Jasmine (2217051026)
3. Rini Puspita Wati (2257051019)
*/

#include <iostream>
using namespace std;

	string toner[5] = {"COSXRX AHA/BHA CLARIFYING TREATMENT TONER", "AVOSKIN MIRACULOUS REFINING TONER",
	"HADALABO GOKUJYUN ULTIMATE LOTION","HATOMUGI SKIN CONDITIONER","WARDAH LIGHTENING FACE TONER \n"};

	
	string serum[5] = {"SOMETHINC 5% NIACINAMIDE" ,"SCARLETT WHITENING","SERUM THE BODY SHOP TEA TREE ",
	"GARNIER LIGHT COMPLETE VIT C","MIRACLE SERUM SOME BY MI \n"};
	
	string moisturizer[5] = {"NATURE REPUBLIC ALOEVERA","CETAPHIL MOISTURIZER GEL CREAM","SOMETHINC CERAMIC MOISTURIZER GEL",
	"JOYLAB MOISTURE BOMB PUDDING GEL CREME","BHUMI CERAMIDE HYDRA LOCK MOISTURIZER \n"};
	
	string masker_wajah[5] = {"WHITELAB MUGWORT PORE CLARYFING MASK","TEDDY CLUBS FLOR DE CALENDULA","SOMETHINC SKIN GOALS",
	"AXIS-Y MUGWORT PORE CLARYFING","INNISFREE SUPER VOLCANIC PORE CLAY \n"};

	void produk(){	
	
	
		
        cout<<"......|| PRODUK TONER ||....... "<<endl;
		for (int i = 0; i < 5; i++) {
			cout<<"-) "<< toner[i] <<endl;	
		}
		cout<<"......|| PRODUK SERUM ||....... "<<endl;
		for (int j = 0; j < 5; j++) {
			cout<<"-) "<< serum[j] <<endl;
		}
		cout<<"......|| PRODUK MOISTURIZER ||....... "<<endl;
		for (int k = 0; k < 5; k++) {
			cout<<"-) "<< moisturizer[k] <<endl;
		}
		cout<<"......|| PRODUK MASKER WAJAH ||....... "<<endl;
		for (int l = 0; l < 5; l++) {
			cout<<"-) "<< masker_wajah[l] <<endl;
		}
		cout<<endl;
   }
	
	void pembelian(){
		
		int p, q, r, s, total, cash, kembali, h1=100000, h2=150000, h3=120000, h4=90000 ;
	    
		cout<<"1. Masukan angka merk toner yang ingin dibeli (1-5) ? ";
		cin>>p;
		cout<<endl;
		cout<<"2. Masukan angka merk serum yang ingin dibeli (1-5) ? ";
		cin>>q;
		cout<<endl;
		cout<<"3. Masukan angka merk moisturizer yang ingin dibeli (1-5) ? ";
		cin>>r;
		cout<<endl;
		cout<<"4. Masukan angka merk masker wajah yang ingin dibeli (1-5) ? ";
		cin>>s;
		cout<<endl;
		
		
    switch (p) {
		case 1 :
		cout<<"Pembelian pertama : "<<toner[0]<<" = Rp. "<<h1;
		break;
		case 2 :
		cout<<"Pembelian pertama : "<<toner[1]<<" = Rp. "<<h1;
		break;
		case 3 :
		cout<<"Pembelian pertama : "<<toner[2]<<" = Rp. "<<h1;
		break;
		case 4 :
		cout<<"Pembelian pertama : "<<toner[3]<<" = Rp. "<<h1;
		break;
		case 5 :
		cout<<"Pembelian pertama : "<<toner[4]<<" = Rp. "<<h1;
		break;
		default :
		cout<<"Barang tidak tersedia";
    }
	cout<<endl;
		
	switch (q) {
	    case 1 :
	    cout<<"Pembelian kedua : "<<serum[0]<<" = Rp. "<<h2;
	    break;
	    case 2 :
		cout<<"Pembelian kedua : "<<serum[1]<<" = Rp. "<<h2;
		break;
	    case 3 :
	    cout<<"Pembelian kedua : "<<serum[2]<<" = Rp. "<<h2;		    
		break;
	    case 4 :
		cout<<"Pembelian kedua : "<<serum[3]<<" = Rp. "<<h2;
		break;
		case 5 :
		cout<<"Pembelian kedua : "<<serum[4]<<" = Rp. "<<h2;
		break;
		default :
    	cout<<"Barang tidak tersedia";
    }
    cout<<endl;
		    
	switch (r) {
	    case 1 :
	    cout<<"Pembelian ketiga : "<<moisturizer[0]<<" = Rp. "<<h3;
	    break;
		case 2 :
		cout<<"Pembelian ketiga : "<<moisturizer[1]<<" = Rp. "<<h3;
		break;
		case 3 :
		cout<<"Pembelian ketiga : "<<moisturizer[2]<<" = Rp. "<<h3;
		break;
		case 4 :
		cout<<"Pembelian ketiga : "<<moisturizer[3]<<" = Rp. "<<h3;
	    break;
		case 5 :
		cout<<"Pembelian ketiga : "<<moisturizer[4]<<" = Rp. "<<h3;
		break;
		default :
	    cout<<"Barang tidak tersedia";
    }
    cout<<endl;
		    
	switch (s) {
	    case 1 :
		cout<<"Pembelian keempat : "<<masker_wajah[0]<<" = Rp. "<<h4;
		break;
		case 2 :
		cout<<"Pembelian keempat : "<<masker_wajah[1]<<" = Rp. "<<h4;
		break;
		case 3 :
		cout<<"Pembelian keempat : "<<masker_wajah[2]<<" = Rp. "<<h4;
		break;
		case 4 :
		cout<<"Pembelian keempat : "<<masker_wajah[3]<<" = Rp. "<<h4;
		break;
		case 5 :
		cout<<"Pembelian keempat : "<<masker_wajah[4]<<" = Rp. "<<h4;
		break;
		default :
	    cout<<"Barang tidak tersedia";		    
	    }
	    cout<<endl;
	    
	    total = h1+h2+h3+h4;
	    cout<<endl;
	    cout<<"________STRUK PEMBELIAN______"<<endl;
	    cout<<endl;
	    cout<<"Total Pembelian = Rp. "<<total<<endl;
	    cout<<"Cash = Rp. ";
	     cin>>cash;
	    if(cash >= total){
	    	cout<<"____________________"<<endl;
	    	kembali = cash - total;
	    	cout<<"Kembali : RP. "<<kembali<<endl;
		}
		else {
			cout<<"_______________________"<<endl;
			cout<<"UANG ANDA TIDAK CUKUP! ";
		} 
	    
       }
    	
int main(){
	char pilihan;
	
	cout<<"_____________________________________________________________  \n";
	cout<<"   __________________________________________________________  \n";	
	cout<<"  |==========================================================| \n";
	cout<<"  |==============SELAMAT DATANG DI BEAUTY SHOP===============| \n";
	cout<<"  |----SKINCARE SERBA Rp 100.000, 150.000, 120.000, 90.000---| \n";
	cout<<"  |==========================================================| \n";
	cout<<"  |__________________________________________________________| \n";
	cout<<"_____________________HAPPY SHOPPING___________________________ \n" ;   
	cout<<endl;
	cout<<endl;
		do {	
	    produk();
	    pembelian();
	    cout<<endl;
	    cout<<"Ingin melakukan pembelian lagi? (y/n) = ";
		cin>>pilihan;
		}
		while (pilihan=='Y' || pilihan=='y');
		cout<<endl;
		cout<<"============ TERIMA KASIH SUDAH BERBELANJA DAN SELAMAT DATANG KEMBALI ^^ ===========";
 }
