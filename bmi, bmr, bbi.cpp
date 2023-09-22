
#include <iostream>
using namespace std;

int main() {
   char jenis_kelamin, jawab, jawab2;
   float berat_badan, tinggi_badan, usia, bmr, bmi, bbi, kebutuhan_kalori;
   int berat_aktivitas;  
    
   
   cout<<"Perhitungan Jumlah Kalori yang Dibutuhkan\n";
   cout<<"Menggunakan Rumus Harris-Benedict\n\n\n";
   
   cout<<"Apa jenis kelamin anda (p/l)? ";
   cin>>jenis_kelamin;
   cout<<"Berapa usia anda saat ini (dalam tahun)? ";
   cin>>usia;
   cout<<"Berapa berat badan anda (dalam kilogram)? ";
   cin>>berat_badan;
   cout<<"Seberapa tinggi tubuh anda dalam sentimeter? ";
   cin>>tinggi_badan;
   cout<<"\nPerhatikan opsi di bawah ini!\n";
   cout<<"1. Hampir tidak pernah berolahraga\n";
   cout<<"2. Jarang berolahraga (1-3 kali per minggu)\n";
   cout<<"3. Cukup berolahraga (4-5 kali per minggu)\n";
   cout<<"4. Sering berolahraga (6-7 kali per minggu)\n";
   cout<<"5. Sangat sering berolahraga (2 kali atau lebih per hari)\n";
   cout<<"Bagaimana aktivitas anda sehari-hari";
   cout<<" (1/2/3/4/5)?  ";
   cin>>berat_aktivitas;
   
   
   switch (jenis_kelamin) {
       case 'l' : bmr=(66.5+(13.7*berat_badan)+(5*tinggi_badan)-(6.8*usia));break;
       case 'p' : bmr=(655+(9.6*berat_badan)+(1.8*tinggi_badan)-(4.7*usia));break;
       case 'L' : bmr=(66.5+(13.7*berat_badan)+(5*tinggi_badan)-(6.8*usia));break;
       case 'P' : bmr=(655+(9.6*berat_badan)+(1.8*tinggi_badan)-(4.7*usia));break;
       default:cout<<"\nData yang anda masukkan invalid\n";break;
   }
   
   switch (berat_aktivitas) {
       case 1 : kebutuhan_kalori=(bmr*1.2);break;
       case 2 : kebutuhan_kalori=(bmr*1.375);break;
       case 3 : kebutuhan_kalori=(bmr*1.55);break;
       case 4 : kebutuhan_kalori=(bmr*1.725);break;
       case 5 : kebutuhan_kalori=(bmr*1.9);break;
       default:cout<<"\nData yang anda masukkan invalid\n";break;
   } cout<<"\n\n";
   
   cout<<"___________________________________________________________\n\n\n";
   
   cout<<"Basal Metabolic Rate (BMR) anda adalah : "<<bmr<<" kalori\n";
   cout<<"Kebutuhan kalori harian anda adalah    : "<<kebutuhan_kalori<<" kalori\n";
   
 
   bmi=berat_badan/((tinggi_badan/100)*(tinggi_badan/100));
   bbi=(tinggi_badan-100)-(10/100*(tinggi_badan-100));
   
   
   cout<<"Body Mass Index (BMI) anda adalah      : "<<bmi;
   if (bmi<17) {
       cout<<" (Anda kekurangan berat badan tingkat berat)\n";
   } else if (bmi<=18.5) {
       cout<<" (Anda kekurangan berat badan tingkat rendah)\n";
   } else if (bmi<= 25) {
       cout<<" (Berat badan anda normal)\n";
   } else if (bmi<=27) {
       cout<<" (Anda kelebihan berat badan tingkat rendah)\n";
   } else  {
       cout<<" (Anda kelebihan berat badan tingkat berat)\n";
   }
   cout<<"\n\n";
   
   
   if (bmi<=18.5) {
       cout<<"Apakah anda ingin melanjutkan (y for yes/n for no)? ";
       cin>>jawab; 
   } else if (bmi>25) {
       cout<<"Apakah anda ingin melanjutkan (y for yes/n for no)? ";
       cin>>jawab; 
   } else { 
       cout<<"Have a nice day bro ;)";
       cout<<"\nYour Body Mass Index is in the normal category. Keep it up, okay?";
       cout<<"\nPress letter 'm' then enter to end this program. ";
   }
   
   
   switch (jawab) {
       case 'y': cout<<"Apa anda ingin mengetahui berat badan yang ideal untuk tubuh anda (y/n)? ";break;
       case 'n': cout<<"\nOkay. Hope you will be just fine;)"<<
       "\nPress letter 'm' then enter to end this program. ";break;
   }
       cin>>jawab2;    
       
   switch (jawab2) {
       case 'y':cout<<"\nBerat badan ideal anda adalah "<<bbi<<".\n"<<
       "Semangat to infinity and beyond.\n";break;
       case 'n':cout<<"\nOkay. Have a nive day, yeah? See you next time in a better situation.\n\n";
   }
   
   
   return 0;
}
