#include <iostream>
#include <string>
using namespace std;

    string barang[24]={"budweiser 1Lt\t\t","Heinken 600ml\t\t","corona extra 1Lt\t","San Miguel Pale Pilsen 1Lt","Guinness 1Lt\t\t","Miller Lite 600ml\t","Coors Light 1Lt\t\t","Sam Adams 1L\t\t","Yuenling 1L\t\t","sarajevsko Pivo 1L\t","Anker 1L\t\t","Orang Tua anggur 1Lt\t","johnnie walker blue 1Lt\t","chateau 1lt\t\t","Wine filippo 1lt\t","macallan 1Lt\t\t","Jack Daniels 1lt\t","Sababay wine 1Lt\t","Bintang pilsner 1Lt\t","sake luxury japannese 1lt","yakult 19Lt\t\t","sprite with insto 600ml\t","narmada gelas 1Lt\t","tequilla 1lt\t\t"};
    int harga[24]={5,6,20,2,13,12,8,15,7,14,7,36,32,38,8,5,30,28,5,10,200,1,2,8};
    int jumlah;
void listbarang(string barang[],int harga[]){
    cout<<"============================================================================\n";
    cout<<"  kode\t\t  barang\t		harga\n";
    cout<<"============================================================================\n";
   for(int i=0;i<24;i++){
        cout<<" "<<i<<"\t\t"<<barang[i]<<"\t\tRp. "<<harga[i]<<".000.000\t\t"<<" "<<endl;
   }
   cout<<"============================================================================\n";
   cout<<endl;
}

int belian(){
    ulang:
        int kode,jml,total;
    	char lagi;
        cout<<"Masukkan kode barang : ";
        cin>>kode;
        cout<<"Nama minuman \t: "<<barang[kode]<<endl;
        cout<<"Harga minuman \t: Rp. "<<harga[kode]<<".000.000"<<endl;
        cout<<"Banyak item yg dibeli = ";cin>>jml;
        total=jml*harga[kode];
        jumlah=jumlah+total;
        cout<<"total harga \t: Rp. "<<total<<".000.000"<< endl;
        cout<<"belanja lagi? (y/n) : ";
        cin>>lagi;
        cout<<endl;
    if(lagi=='Y' || lagi=='y'){
    	
   cout<<"----------------------------------------------------------------------------\n";
    	goto ulang;
	}else{cout<<endl;}
}

int main(){
    int pilih;
    cout<<"\t\t     Selamat Datang di Toko beer K13"<<endl;
    cout<<"\t\t    !!!!!!!YEAY UANG ANDA HABIS!!!!!!      "<<endl;
    cout<<"\t\t     ---------------------------------\n"<<endl;
    listbarang(barang,harga);
    belian();
    cout<<"============================================================================\n";
    cout<<"\n\tAnda membeli barang dengan jumlah di atas"<<endl;
    cout<<"\n\tTotal harga yang harus anda bayar adalah : ";
    cout<<"Rp. "<<jumlah<<".000.000"<<endl;
    cout<<"\n============================================================================\n";
    cout<<"\n=================Terima Kasih Sudah Berbelanja di Toko Kami=================\n";
}
