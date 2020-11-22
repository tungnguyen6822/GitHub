#include<iostream>
#include<iomanip>
//#include(fstream)
using namespace std;
   
struct DoiBong{
	char TenHLV[30], Tendoitruong[30], Tendoibong[30];
	int soDoiBong, soBanThang, soTranDau, soCauThu;
     	
};


void NhapDS(DoiBong DB[100], int &n){
	cout<<" Nhap so doi bong tham gia: ";
	cin >>n;
	for( int i=0; i<n; i++){
		cout<<" Nhap Ten Doi Bong: ";
		fflush(stdin);
		gets(DB[i].Tendoibong);
		
		cout<<" Nhap Ten Huan Luyen Vien Truong: ";
		gets(DB[i].TenHLV);
		
		cout<<" Nhap Ten Doi Truong: ";
		gets(DB[i].Tendoitruong);
		
		cout<<" Doi Bong Co So Thanh Vien La: ";
		cin >>DB[i].soCauThu;
		
		cout<<" So Ban Thang Ghi Duoc: ";
		cin >>DB[i].soBanThang;
		
		cout<<" So Tran Dau Da Tham Gia: ";
		cin >>DB[i].soTranDau;
		
		cout<<endl;
	}//for;
}//NhapDS

void XuatDS( DoiBong DB[100], int &n){
	cout << setw(25) << "-Doi Bong-" << setw(35) << "-Huan Luyen Vien Truong-" << setw(25) << "-Doi Truong-" << setw(25)<< "-Cau Thu-" << setw(35) << "-Tran Dau Tham Gia-" << setw(30) << "-Ban Da Ghi-"<<endl;
    for(int i=0; i<n; i++){
    	cout<< setw(25) << DB[i].Tendoibong;
    	cout<< setw(30) << DB[i].TenHLV;
    	cout<< setw(35) << DB[i].Tendoitruong;
    	cout<< setw(16) << DB[i].soCauThu;
    	cout<< setw(31) << DB[i].soTranDau;
        cout<< setw(33) << DB[i].soBanThang;
        cout<<"\n*******************\n";
    }//for
}// XuatDS

void TongSoBanThang(DoiBong DB[], int &n, int &tong){
	for( int i=0; i<n; i++){
		tong+=DB[i].soBanThang;
	}
	cout<<"**********&&&**********";
	cout<<"\nTong So Ban Thang La:\n"<<tong;
	cout<<"**********&&&**********";
}


void TiLe(DoiBong DB[], int n, int &tong){
	cout<<"\nDoi Bong Co Ti Le Ban Thang Va So Tran >1.5 la:\n";	
//	cout<< setw(25) << "-Doi Bong-" << setw(35) << "-Huan Luyen Vien Truong-" << setw(25) << "-Doi Truong-" << setw(25)<< "-Cau Thu-" << setw(35) << "-Tran Dau Tham Gia-" << setw(30) << "-Ban Da Ghi-"<<endl;
	for( int i=0; i<n; i++){
		if((tong/DB[i].soTranDau)>1.5){
//        cout<< setw(25) << DB[i].Tendoibong;
//    	cout<< setw(30) << DB[i].TenHLV;
//    	cout<< setw(35) << DB[i].Tendoitruong;
//    	cout<< setw(16) << DB[i].soCauThu;
//    	cout<< setw(31) << DB[i].soTranDau;
//    	cout<< setw(33) << DB[i].soBanThang<<endl;
		XuatDS(DB,n);
		}
	}
}




int main(){
	int n;
	int tong;
	DoiBong DB[100];
	NhapDS(DB,n);
	XuatDS(DB,n);
	TongSoBanThang(DB,n,tong);
	TiLe(DB,n,tong);


	
}
