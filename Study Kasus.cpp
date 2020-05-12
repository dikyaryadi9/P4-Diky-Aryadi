#include <stdio.h>
int total_pembelian=0;
void diskon_pembelian(){
	int diskon;
	diskon=0.1*total_pembelian;
	printf ("diskon %d", diskon);
	total_pembelian=total_pembelian-diskon;
}
main(){
	int kode , harga , i=1, total_bayar, no[15] = {17500,24000,17000,24000,14000,21000,29000,29000,25000,27000,25000,20000,18000,68000,23000};
	char kar= 'y' ;
    printf ("=====================selamat datang di Toko Rahma========================\n");
    printf ("========barang yang sudah di beli tidak boleh dikembalikan===============\n");
    printf ("=========================================================================\n");
    printf ("sedia :\n");
	printf("1. Surya 12\t\t\t Harga= Rp.%i\n", no[0]);
	printf("2. Surya 16\t\t\t Harga= Rp.%i\n", no[1]);
	printf("3. Sampoerna 12\t\t\t Harga= Rp.%i\n", no[2]);
	printf("4. Sampoerna 16\t\t\t Harga= Rp.%i\n", no[3]);
	printf("5. Class Mild 12\t\t Harga= Rp.%i\n", no[4]);
	printf("6. Class Mild 16\t\t Harga= Rp.%i\n", no[5]);
	printf("7. Marlboro merah\t\t Harga= Rp.%i\n", no[6]);
	printf("8. Marlboro putih\t\t Harga= Rp.%i\n", no[7]);
	printf("9. Camel\t\t\t Harga= Rp.%i\n", no[8]);
	printf("10. Dunhil 20\t\t\t Harga= Rp.%i\n", no[9]);
	printf("11. Esse\t\t\t Harga= Rp.%i\n", no[10]);
	printf("12. Dunhil hitam\t\t Harga= Rp.%i\n", no[11]);
	printf("13. Pro mild\t\t\t Harga= Rp.%i\n", no[12]);
	printf("14. Surya kaleng\t\t Harga= Rp.%i\n", no[13]);
	printf("15. Lucky strike\t\t Harga= Rp.%i\n", no[14]);
	printf("masukkan kode barang (1-15)");
		
while (kar=='y'){
	printf ("\nbarang ke-%d:",i);
	scanf ("%d", &kode);
	fflush (stdin);
	if (kode==1)	{
	harga= 17500;
	printf("1 = %d\n ", harga);
}else if (kode==2){
		harga= 24000;
	printf("2 = %d\n ", harga);
}else if ( kode == 3){
		harga= 17000;
	printf("3 = %d\n ", harga);
}else if ( kode == 4){
		harga= 24000;
	printf("4 = %d\n ", harga);
}else if ( kode == 5){
		harga= 14000;
	printf("5 = %d\n ", harga);
}else if ( kode == 6){
		harga= 21000;
	printf("6 = %d\n ", harga);
}else if ( kode == 7){
		harga= 29000;
	printf("7 = %d\n ", harga); 
}else if ( kode == 8){
		harga= 29000;
	printf("8 = %d\n ", harga);
}else if ( kode == 9){
		harga= 25000;
	printf("9 = %d\n ", harga);
}else if ( kode == 10){
		harga= 27000;
	printf("10 = %d\n ", harga);
}else if ( kode == 11){
		harga= 25000;
	printf("11 = %d\n ", harga);
}else if ( kode == 12){
		harga= 20000;
	printf("12 = %d\n ", harga);
}else if ( kode == 13){
		harga= 18000;
	printf("13 = %d\n ", harga);
}else if ( kode == 14){
		harga= 68000;
	printf("14 = %d\n ", harga);
}else if ( kode == 15){
		harga= 23000;
	printf("15 = %d\n ", harga);
}else{
	printf("input salah!!!! ");
}
total_pembelian=total_pembelian+harga;
printf("MAU BELI BARANG LAGI?? [y/t]");
scanf("%c", &kar);
i++;

}
printf("total_pembelian = %d\n ", total_pembelian);
if (total_pembelian > 1000000){
	diskon_pembelian();
}else{
	total_pembelian;
}
printf("\ntotal_bayar=%d\n",total_pembelian);
}
