#include <stdio.h>
#include <conio.h>
using namespace std;

    char barang[24][29]={"budweiser 1Lt\t\t","Heinken 600ml\t\t","corona extra 1Lt\t","San Miguel Pale Pilsen 1Lt","Guinness 1Lt\t\t","Miller Lite 600ml\t","Coors Light 1Lt\t","Sam Adams 1L\t\t","Yuenling 1L\t\t","sarajevsko Pivo 1L\t","Anker 1L\t\t","Orang Tua anggur 1Lt\t","johnnie walker blue 1Lt","chateau 1lt\t\t","Wine filippo 1lt\t","macallan 1Lt\t\t","Jack Daniels 1lt\t","Sababay wine 1Lt\t","Bintang pilsner 1Lt\t","sake luxury japannese 1lt","yakult 19Lt\t\t","sprite with insto 600ml","narmada gelas 1Lt\t","tequilla 1lt\t\t"};
    int harga[24]={5,6,20,2,13,12,8,15,7,14,7,36,32,38,8,5,30,28,5,10,200,1,2,8};
    int jumlah;
void listbarang(){
    printf("================================================================\n");
    printf("  kode\t\t  barang\t\tharga\n");
    printf("================================================================\n");
   for(int i=0;i<24;i++){
        printf(" %d\t\t %s",i,barang[i]);printf("\t\tRp. %d.000.000\t\t\n",harga[i]);
   }
   printf("================================================================\n");
   getch;
}

int belian(){
    int kode,jml,total;
    char lagi;
    ulang:
        printf("Masukkan kode barang : ");
        scanf("%i",&kode);
        printf("Nama minuman \t: %s\n",barang[kode]);
        printf("Harga minuman \t: Rp. %d.000.000\n",harga[kode]);
        printf("Banyak item yg dibeli = ");scanf("%d",&jml);
        total=jml*harga[kode];
        jumlah=jumlah+total;
        printf("total harga \t: Rp. %d.000.000\n",total);
        printf("belanja lagi? (y/n) : ");
        scanf("%s",&lagi);
    if(lagi=='Y' || lagi=='y'){
    	
   printf("----------------------------------------------------------------\n");
    	goto ulang;
	}else{}
}

int main(){
    printf("\n\t\t     Selamat Datang di Toko Beer K13\n");
    printf("\t\t         !!!!!!PASTI Mahal !!!!!!      \n");
    printf("\t\t     ---------------------------------\n\n");
    listbarang();
    belian();
    printf("=================================================================\n");
    printf("\n\tAnda membeli barang dengan jumlah di atas\n");
    printf("\n\tTotal harga yang harus anda bayar adalah : ");
    printf("Rp. %d.000.000\n",jumlah);
    printf("\n\tTerimakasih telah berbelanja di toko kami.");
    printf("\n=================================================================\n");
}
