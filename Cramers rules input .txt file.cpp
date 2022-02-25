#include<iostream>
#include <fstream>
using namespace std;
int a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3;
float detA,detA1,detA2,detA3,x,y,z;
int main(int argc, char *argv[])
{
	ifstream buka;				//untuk membuka file txt		
	buka.open("Cramers.txt");
	int nilai[12];
	
for (int i=0; i<12; i++)
{
	buka>>nilai[i];
}
	a1=nilai[0];b1=nilai[1];c1=nilai[2];d1=nilai[3];	//untuk inisialisasi nilai a1,b1,c1,d1
	a2=nilai[4];b2=nilai[5];c2=nilai[6];d2=nilai[7];	//untuk inisialisasi nilai a2,b2,c2,d2
	a3=nilai[8];b3=nilai[9];c3=nilai[10];d3=nilai[11];	//untuk inisialisasi nilai a3,b3,c3,d3
	cout<<"Metode Cramers\n";
	cout<<"a1x + b1y + c1z = d1\n"; cout<<"a2x + b2y + c2z = d2\n"; cout<<"a3x + b3y + c3z = d3\n\n";
	
	if(b1>0 && c1>0){												
		cout<<a1<<"x"<< "+"<<b1<<"y"<< "+" <<c1<<"z = "<<d1<<"\n";}
	else if(b1<0){
		cout<<a1<<"x"<<+b1<<"y"<< "+" <<c1<<"z = "<<d1<<"\n";}
	else if(c1<0){
		cout<<a1<<"x"<< "+"<<b1<<"y"<<+ c1<<"z = "<<d1<<"\n";}	
	
	if(b2>0 && c2>0){
		cout<<a2<<"x"<< "+"<<b2<<"y"<< "+" <<c2<<"z = "<<d2<<"\n";}
	else if(b2<0){
		cout<<a2<<"x"<<+b2<<"y"<< "+" <<c2<<"z = "<<d2<<"\n";}
	else if(c2<0){
		cout<<a2<<"x"<< "+"<<b2<<"y"<<+ c2<<"z = "<<d2<<"\n";}		
	
	if(b3>0 && c3>0){
		cout<<a3<<"x"<< "+"<<b3<<"y"<< "+" <<c3<<"z = "<<d3<<"\n";}
	else if(b3<0){
		cout<<a2<<"x"<<+b3<<"y"<< "+" <<c3<<"z = "<<d3<<"\n";}
	else if(c3<0){
		cout<<a3<<"x"<< "+"<<b3<<"y"<<+ c3<<"z = "<<d3<<"\n";}		

	cout<<"\nPenyelesaian";
	cout<<"\nA= |"<<nilai[0]<<" "<<nilai[1]<<" "<<nilai[2]<<"|" <<"   B= |"<<nilai[3]<<"|";	//untuk menampilkan persamaan 1
	cout<<"\n   |"<<nilai[4]<<" "<<nilai[5]<<" "<<nilai[6]<<"|" <<"\t |"<<nilai[7]<<"|";	//untuk menampilkan persamaan 2
	cout<<"\n   |"<<nilai[8]<<" "<<nilai[9]<<" "<<nilai[10]<<"|" <<"\t |"<<nilai[11]<<"|\n";//untuk menampilkan persamaan 3
	
	detA=(a1*b2*c3)+(b1*c2*a3)+(c1*a2*b3) - (a3*b2*c1)-(b3*c2*a1)-(c3*a2*b1);	//untuk mencari nilai detA
	cout<<"\ndetA= "<<detA;														//untuk menampilkan nilai detA
if(detA!=0){ //jika detA!=0
	detA1=(d1*b2*c3)+(b1*c2*d3)+(c1*d2*b3) - (d3*b2*c1)-(b3*c2*d1)-(c3*d2*b1);	//untuk mencari nilai detA1
	cout<<"\ndetA[1]= "<<detA1;													//untuk menampilkan nilai detA1
	x=detA1/detA; cout<<"\nx= "<<x;												//fungsi nilai x, dan untuk menampilkan solusi nilai x
	
	detA2=(a1*d2*c3)+(d1*c2*a3)+(c1*a2*d3)-(a3*d2*c1)-(d3*c2*a1)-(c3*a2*d1);	//untuk mencari nilai detA2
	cout<<"\n\ndetA[2]= "<<detA2;												//untuk menampilkan nilai detA2
	y=detA2/detA; cout<<"\ny= "<<y;												//fungsi nilai y, dan untuk menampilkan solusi nilai y
	
	detA3=(a1*b2*d3)+(b1*d2*a3)+(d1*a2*b3)-(a3*b2*d1)-(b3*d2*a1)-(d3*a2*b1);	//untuk mencari nilai detA3
	cout<<"\n\ndetA[3]= "<<detA3;												//untuk menampilkan nilai detA3
	z=detA3/detA; cout<<"\nz= "<<z;												//fungsi nilai z, dan untuk menampilkan solusi nilai z
}
else{
    if(detA1==0 && detA2==0 && detA3==0) 		//kondisi jika detA1==0 && detA2==0 && detA3==0
       cout<<"\nInfinite solutions\n";
    else if (detA1!=0 || detA2!=0 || detA3!=0)	//kondisi jika detA1!=0 || detA2!=0 || detA3!=0
       printf("\nNo solutions\n");
    }
}




 
