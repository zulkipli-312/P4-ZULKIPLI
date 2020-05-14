#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void nujian(float nuas, float nuts,  float ntugas, float nkuis);

struct data {
int no;
char nim[9];
char nama[25];
char makul[37];
} mahasiswa;

float ntotal;
char huruf;

int main (void) //Fungsi selalu ada dalam program C++
{
char praktikan[4][18]={"zulkipli","teknik elektro","F1B019149"};
int j, jml; //Deklarasi variabel lokal, bertipe integer
float a, b, c, d ; //Deklarasi variabel lokal, a,b,c,d bertipe float

printf("==========================================================\n");//Fungsi menampilkan
printf("Program Menghitung Nilai akhir Mahasiswa\n"); //Fungsi menampilkan
printf("\n\t\t\tNama  : %s\n",praktikan[0]);//Fungsi menampilkan
printf("\t\t\tProdi : %s\n",praktikan[1]);//Fungsi menampilkan
printf("\t\t\tNim  : %s\n",praktikan[2]);//Fungsi menampilkan
printf("==========================================================\n");//Fungsi menampilkan
printf("Masukkan jumlah mahasiswa : ");
scanf("%d",&jml);

for (j=1; j<=jml; j++){ //Perulangan
printf("Data Mahasiswa ke %d\n\n",j);
mahasiswa.no=j;
printf("\n\tData Mahasiswa");
gets(mahasiswa.nim);//Input string
printf("\n\tMasukkan NIM         : ");
gets(mahasiswa.nim);//Input string
printf("\tMasukkan Nama        : "); //Fungsi menampilkan input
gets(mahasiswa.nama); //Input string
printf("\tMasukkan Mata kuliah : ");
gets(mahasiswa.makul);//Input string
printf("\tMasukkan Nilai UAS   : ");
scanf("%f",&a); //scanf_s("%d",&nim);
printf("\tMasukan Nilai UTS    : ");
scanf("%f",&b);
printf("\tMasukan Nilai Tugas  : ");
scanf("%f",&c);
printf("\tMasukan Nilai Kuis   : ");
scanf("%f",&d);
nujian(a,b,c,d); //Memberikan nilai pada variabel a,b,c,dan d
}

system("pause");
return(0); //Nilai balikan fungsi main() adalah 0
}

void nujian(float nuas, float nuts, float ntugas, float nkuis)//Definisi fungsi nujian
{
ntotal=(nuas*0.4)+(nuts*0.3)+(ntugas*0.2)+(nkuis*0.1); //Fungsi perhitungan
printf("\n\tJumlah Rata2x Nilai adalah : %.2f\n",ntotal); 

if (ntotal>=85) huruf='A';    
else if (ntotal>=70) huruf='B';
else if (ntotal>=60) huruf='C';
else if (ntotal>=50) huruf='D';
else huruf='E';

printf("\n\tIndeks Nilai Mahasiswa\n\tAtas Nama %s adalah  : %c\n",mahasiswa.nama,huruf);//Fungsi menampilkan nilai huruf
printf("\n\tKeterangan :");
if (ntotal >= 60){ //Fungsi pernyataan, jika total nilai besar dari sama dengan 60
printf("\n\tMahasiswa tersebut        : Lulus\n\n");//Keterangan anda Lulus
}
else if (ntotal < 60) { //Fungsi logika, jika total nilai kecil dari 60
printf("\n\tMahasiswa tersebut           : Gagal\n\n");//Keterangan anda Gagal
}
printf("========================================================\n\n");
}
