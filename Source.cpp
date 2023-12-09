#include"Header.h"
#include <time.h>
time_t hientai = time(0);
tm* t = localtime(&hientai);
void nhap_SanPham(SanPham& sp) //thêm theo thứ tự từ trên xuống
{
	cin.ignore();
	cout << "\nNhap ma san pham: ";
	cin.getline(sp.maSP, 30); //kiểu char luôn dùng cin.getline

	cout << "\nNhap ten san pham: ";
	cin.getline(sp.tenSP, 30);

	cout << "\nNhap gioi tinh cua san pham: ";
	cin.getline(sp.gioiTinhSP, 5);

	cout << "\nNhap thoi han bao hanh san pham: ";
	cin >> sp.baoHanhSP;

	cout << "\nNhap gia tien san pham: ";
	cin >> sp.giaTienSP;
}
void xuat_SanPham(SanPham sp)
{
	//cout << setw(0) << "Ten san pham" << setw(15) << "ma san pham" << setw(15) << "gioi tinh" << setw(15) << "bao hanh" << setw(15) << "Gia tien" << endl;
	cout << setw(10) << sp.maSP << setw(20) << sp.tenSP << setw(20) << sp.gioiTinhSP << setw(20) << sp.baoHanhSP << setw(20)
		<< sp.giaTienSP << endl;
}

void nhap_DS_SP(DS_SanPham& dssp)
{
	cout << "Nhap so luong san pham can hien thi: ";
	cin >> dssp.soSanPham;

	cout << "Nhap danh sach san pham: ";
	cout << endl;

	for (int i = 1; i <= dssp.soSanPham; i++)
	{
		cout << "San pham thu " << i << endl;
		nhap_SanPham(dssp.ds_SP[i]);
		cout << endl;

	}
}
void xuat_DS_SP(DS_SanPham& dssp)
{
	cout << "\n====================================================================================================";
	cout << endl;
	cout << "Co " << dssp.soSanPham << " trong cua hang." << endl;
	cout << setw(0) << "STT" << setw(17) << "Ten san pham" << setw(17) << "Ma san pham" << setw(20) << "Gioi tinh"
		<< setw(20) << "Bao hanh" << setw(20) << "Gia tien" << endl;
	for (int i = 1; i <= dssp.soSanPham; i++)
	{
		cout << i << ". ";
		xuat_SanPham(dssp.ds_SP[i]);
		cout << endl;
	}
	cout << "\n====================================================================================================";
	cout << endl;
}

void xoa_SanPham(DS_SanPham& dssp)
{
	int pos;
	cout << "\nNhap vi tri san pham can xoa co tren danh sach: ";
	cin >> pos;

	while (pos < 1 || pos > dssp.soSanPham)
	{
		cout << "So nhap nam ngoai danh sach, xin moi nhap lai:	";
		cin >> pos;
	}

	for (int i = pos; i <= dssp.soSanPham; i++)
	{
		dssp.ds_SP[i] = dssp.ds_SP[i + 1];
	}
	dssp.soSanPham--;
}

void them_SanPham_Cuoi(DS_SanPham& dssp)
{
	SanPham sp;
	dssp.soSanPham++;
	nhap_SanPham(dssp.ds_SP[dssp.soSanPham]);
}
void xep_giaTienSP_tangDan(DS_SanPham& dssp) //InterchangeSort
{
	SanPham sp;

	int n = dssp.soSanPham;

	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (dssp.ds_SP[i].giaTienSP > dssp.ds_SP[j].giaTienSP)
				swap(dssp.ds_SP[i], dssp.ds_SP[j]);
		}
	}
}
void xep_giaTienSP_giamDan(DS_SanPham& dssp) //InterchangeSort
{
	SanPham sp;
	int n = dssp.soSanPham;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (dssp.ds_SP[i].giaTienSP < dssp.ds_SP[j].giaTienSP)
				swap(dssp.ds_SP[i], dssp.ds_SP[j]);
		}
	}
}
void timSP_theoTenSP(DS_SanPham dssp)
{
	SanPham sp;
	char ma[50];
	bool found = false;
	cout << "\nNhap ten san pham can tim";
	cout << endl;
	cin.ignore();
	cin.getline(ma, 50);
	for (int i = 0; i <= dssp.soSanPham; i++)
	{
		if (strcmp(ma, dssp.ds_SP[i].tenSP) == 0)
		{
			found = true;
			system("cls");
			cout << "\n Co San Pham ma ban tim kiem :";

			cout << endl;

			cout << setw(0) << "STT" << setw(17) << "Ten san pham" << setw(17)
				<< "Ma san pham" << setw(20) << "Gioi tinh"
				<< setw(20) << "Bao hanh" << setw(20) << "Gia tien" << endl;
			cout << i << ". ";
			xuat_SanPham(dssp.ds_SP[i]);
			break;
		}
	}
	if (found == false)
	{
		cout << "\nKhong co san pham ma ban can tim.\n";
	}
}

void timSP_theoMaSP(DS_SanPham dssp)
{
	SanPham sp;
	char maCanTim[30];
	bool timThay = false;

	cout << "Nhap ma san pham can tim: ";
	cin.ignore();
	cin.getline(maCanTim, 30);
	for (int i = 1; i <= dssp.soSanPham; i++)
	{
		int ketQua = strcmp(maCanTim, dssp.ds_SP[i].maSP); // Nếu giống nhau sẽ trả về kết quả bằng 0

		if (ketQua == 0)
		{
			timThay = true;
			system("cls");

			cout << "\nCo san pham ma ban can tim: ";
			cout << endl;

			cout << setw(0) << "STT" << setw(17) << "Ten san pham" << setw(17)
				<< "Ma san pham" << setw(20) << "Gioi tinh"
				<< setw(20) << "Bao hanh" << setw(20) << "Gia tien" << endl;

			/*cout << setw(10) << ds.ds_SP[i].maSP << setw(20) << ds.ds_SP[i].tenSP << setw(20)
				<< ds.ds_SP[i].gioiTinhSP << setw(20) << ds.ds_SP[i].baoHanhSP << setw(20)
				<< ds.ds_SP[i].giaTienSP << endl;*/
			cout << i << ". ";
			xuat_SanPham(dssp.ds_SP[i]);
			break;
		}
	}
	if (timThay == false)
	{
		cout << "\nKhong co san pham ma ban can tim.\n";
	}
}

void docFile(const char* tenfile, DS_SanPham& dssp)
{
	FILE* file;
	errno_t file_in;
	file_in = fopen_s(&file, tenfile, "r"); //chế độ đọc "r" của fopen_s
	if (file_in != 0) {
		cout << "Khong doc duoc file." << file_in << endl;
		return;
	}
	int i = 1;
	SanPham sp;

	// Bỏ hàng đầu
	//fscanf(file, "%*[^\n]\n");

	//char maSP[30]; => %s : kiểu string or char
	//char tenSP[30]; => % s : kiểu string or char
	//char gioiTinhSP[5]; => % s : kiểu string or char
	//int baoHanhSP; => %d: kiểu int
	//float giaTienSP; => %f: kiểu float

	while (fscanf(file, "%s %s %s %d %f\n", sp.maSP, sp.tenSP, sp.gioiTinhSP, &sp.baoHanhSP, &sp.giaTienSP) == 5) {
		/*ds.ds_SP[i++] = sp;*/
		dssp.ds_SP[i] = sp;
		i++;
	}
	dssp.soSanPham = i - 1;

	/*
	* Giải thích:
	* File đang có 10 hàng (10 SP)
	* Vì các vòng lặp start từ 1 => khai báo biến i = 1;
	* Điều kiện trong vòng lặp while sẽ quét các giá trị trong hàng và gán vào các biến sp.
	* Đủ 5 biến => tiếp tục chạy
	* ds.soSanPham = i-1; Trừ 1 vì khi thực hiện xong 10 hàng thì biến i có giá trị là 11 và vòng lặp while sẽ dừng khi xét tiếp hàng tiếp theo (hàng 11) (đã debug kiểm tra)
	*/

	fclose(file);
}
void xuatFile(const char* tenfile, const DS_SanPham& dssp)
{
	FILE* file = nullptr;
	errno_t file_in;

	file_in = fopen_s(&file, tenfile, "w");
	if (file_in != 0) {
		cout << "Khong the ghi file." << endl;
		return;
	}

	/*fprintf(file, "Ten san pham      Ma san pham           Gioi tinh            Bao hanh            Gia tien" << endl;);*/
	/*fprintf(file, "MaSP\tTenSP\tGTSP\tBH\t\tGiaTien\n");*/
	for (int i = 1; i <= dssp.soSanPham; ++i)
	{
		fprintf(file, "%s \t%s \t%s \t\t%d \t\t%.2f\n", dssp.ds_SP[i].maSP, dssp.ds_SP[i].tenSP, dssp.ds_SP[i].gioiTinhSP, dssp.ds_SP[i].baoHanhSP, dssp.ds_SP[i].giaTienSP);
	}
	fclose(file);
}

DonHang dh;
DS_DonHang dsdh;
void mainmenu(DS_SanPham& dssp)// menu chính 
{
	int n;

	system("cls");
	cout << "\n                  CHUONG TRINH PHAN MEM BAN SAN PHAM QUAN AO ";
	cout << "\n                                 From STU-IT";
	cout << "\n                Author : Luong Hieu Thuan and Le Nguyen Minh Thong";
	cout << "\n==================================MENU==========================================";
	cout << "\n 1. Lam moi chuong trinh cua ban (Thay doi them, sua, xoa, sap xep,...)";
	cout << "\n 2. Nhap file san pham da co (Doc du lieu file text)";
	cout << "\n 3. Thao tac tao don hang (Tao don hang..)";
	cout << "\n 0. De thoat chuong trinh.";
	cout << endl;
	cout << "Date time local:";
	cout<< t->tm_hour<< ":" << t->tm_min << "|" << t->tm_mday << "/" << t->tm_mon + 1 << "/" << t->tm_year + 1900;
	cout << "\n================================================================================";
	cout << "\n Moi ban chon : ";
	cin >> n;
	if (n == 1)
	{
		menuLamMoi(dssp);
	}
	if (n == 2)
	{
		menuNhapXuatFile(dssp);
	}
	if (n == 3)
	{
		system("cls");

		menuDonHang(dsdh, dh, dssp);
	}
	if (n == 5)
	{
		xuat_DS_SP(dssp);
	}
	else if (n == 0)
	{
		exit(0);
	}

}
void menuNhapXuatFile(DS_SanPham& dssp)// menu sau khi đọc file txt
{
	system("cls");
	docFile("DanhSach.txt", dssp);
	system("cls");
	cout << "Doc file thanh cong, bam phim bat ki de tiep tuc.\n";
	system("pause");
	system("cls");

	xuat_DS_SP(dssp);
	cout << endl;
	cout << "\n1. Them san pham.";
	cout << "\n2. Xoa san pham.";
	cout << "\n3. Xep gia tien tang dan.";
	cout << "\n4. Xep gia tien giam dan.";
	cout << "\n5. Xuat ra file txt";
	cout << "\n6. Tim san pham theo ma san pham";
	cout << "\n7. Tim san pham theo ten san pham";
	cout << "\n0. Quay tro ve main menu";
	cout << endl;
	cout << "Date time local:";
	cout << t->tm_hour << ":" << t->tm_min << "|" << t->tm_mday << "/" << t->tm_mon + 1 << "/" << t->tm_year + 1900;
	int chon;
	cout << "\nMoi ban nhap lua chon: ";
	cin >> chon;
	if (chon == 1)
	{
		system("cls");
		xuat_DS_SP(dssp);
		cout << "\nNhap them san pham moi.";
		them_SanPham_Cuoi(dssp);
		xuat_DS_SP(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 2)
	{
		system("cls");
		xuat_DS_SP(dssp);
		cout << "\nChon stt san pham can xoa: ";
		cout << endl;
		xoa_SanPham(dssp);
		xuat_DS_SP(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 3)
	{
		system("cls");
		xep_giaTienSP_tangDan(dssp);
		xuat_DS_SP(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 4)
	{
		system("cls");
		xep_giaTienSP_giamDan(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 5)
	{
		system("cls");
		xuatFile("DanhSach.txt", dssp);
		system("cls");
		cout << "Xuat file thanh cong, bam phim bat ki de tiep tuc.\n";
		system("pause");
		system("cls");
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 6)
	{
		system("cls");
		timSP_theoMaSP(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 7)
	{
		system("cls");
		timSP_theoTenSP(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 0)
	{
		mainmenu(dssp);
	}

}
void menuSauKhiThaoTac(DS_SanPham& dssp) // menu khi sau thực hiện đọc file hay nhập liệu
{   
	
	xuat_DS_SP(dssp);
	cout << endl;
	cout << "\n1. Them san pham.";
	cout << "\n2. Xoa san pham.";
	cout << "\n3. Xep gia tien tang dan.";
	cout << "\n4. Xep gia tien giam dan.";
	cout << "\n5. Xuat ra file txt";
	cout << "\n6. Tim san pham theo ma san pham";
	cout << "\n7. Tim san pham theo ten san pham";
	cout << "\n0. Quay tro ve main menu";
	cout << endl;
	cout << "Date time local:";
	cout << t->tm_hour << ":" << t->tm_min << "|" << t->tm_mday << "/" << t->tm_mon + 1 << "/" << t->tm_year + 1900;
	int chon;
	cout << "\nMoi ban nhap lua chon: ";
	cin >> chon;
	if (chon == 1)
	{
		system("cls");
		xuat_DS_SP(dssp);
		cout << "\nNhap them san pham moi.";
		them_SanPham_Cuoi(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 2)
	{
		system("cls");
		xuat_DS_SP(dssp);
		cout << "\nChon stt san pham can xoa: ";
		cout << endl;
		xoa_SanPham(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 3)
	{
		system("cls");
		xep_giaTienSP_tangDan(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 4)
	{
		system("cls");
		xep_giaTienSP_giamDan(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 5)
	{
		system("cls");
		xuatFile("DanhSach.txt", dssp);
		system("cls");
		cout << "Xuat file thanh cong, bam phim bat ki de tiep tuc.\n";
		system("pause");
		system("cls");
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 6)
	{
		system("cls");
		timSP_theoMaSP(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 7)
	{
		system("cls");
		timSP_theoTenSP(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 0)
	{
		mainmenu(dssp);
	}
}
void menuLamMoi(DS_SanPham& dssp)// menu gốc 
{
	
	system("cls");

	nhap_DS_SP(dssp);
	xuat_DS_SP(dssp);
	cout << endl;
	cout << "\n1. Them san pham.";
	cout << "\n2. Xoa san pham.";
	cout << "\n3. Xep gia tien tang dan.";
	cout << "\n4. Xep gia tien giam dan.";
	cout << "\n5. Xuat ra file txt";
	cout << "\n6. Tim san pham theo ma san pham";
	cout << "\n7. Tim san pham theo ten san pham";
	cout << "\n0. Quay tro ve main menu";

	cout << endl;
	cout << "Date time local:";
	cout << t->tm_hour << ":" << t->tm_min << "|" << t->tm_mday << "/" << t->tm_mon + 1 << "/" << t->tm_year + 1900;
	int chon;
	cout << "\nMoi ban nhap lua chon: ";
	cin >> chon;
	if (chon == 1)
	{
		system("cls");
		xuat_DS_SP(dssp);
		cout << "\nNhap them san pham moi.";
		them_SanPham_Cuoi(dssp);
		menuSauKhiThaoTac(dssp);

	}
	else if (chon == 2)
	{
		system("cls");
		xuat_DS_SP(dssp);
		cout << "\nChon stt san pham can xoa: ";
		cout << endl;
		xoa_SanPham(dssp);
		menuSauKhiThaoTac(dssp);

	}
	else if (chon == 3)
	{
		system("cls");
		xep_giaTienSP_tangDan(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 4)
	{
		system("cls");
		xep_giaTienSP_giamDan(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 5)
	{
		system("cls");
		xuatFile("DanhSach.txt", dssp);
		system("cls");
		cout << "Xuat file thanh cong, bam phim bat ki de tiep tuc.\n";
		system("pause");
		system("cls");
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 6)
	{
		system("cls");
		timSP_theoMaSP(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 7)
	{
		system("cls");
		timSP_theoTenSP(dssp);
		menuSauKhiThaoTac(dssp);
	}
	else if (chon == 0)
	{
		mainmenu(dssp);
	}
}

//_________________________________________

void themSPvaoDH(DonHang& dh, DS_SanPham& dssp, int sp)
{
	int n;
	dh.soLuongSanPham++;
	n = dh.soLuongSanPham;
	dh.ds_sp[n] = dssp.ds_SP[sp];
}
void themDHvaoDS(DS_DonHang& dsdh, DonHang& dh)
{
	dsdh.soLuongDonHang++;
	dsdh.ds_dh[dsdh.soLuongDonHang] = dh;

}

void xuat_DonHang(DonHang dh)
{
	float tongtien = 0;
	cout << setw(10)<< "Ma Khach Hang:" << setw(5) << dh.maDH << setw(20)<< "Ten khach hang:"  << setw(6) << dh.tenKH << setw(25) 
		<< "So luong san pham:"  << setw(3) << dh.soLuongSanPham << endl;
	cout << "\n====================================================================================================";
	cout << endl;
	cout << "Co " << dh.soLuongSanPham << " san pham trong don hang." << endl;
	cout << setw(0) << "STT" << setw(17) << "Ten san pham" << setw(17) << "Ma san pham" << setw(20) << "Gioi tinh"
		<< setw(20) << "Bao hanh" << setw(20) << "Gia tien" << endl;
	for (int i = 1; i <= dh.soLuongSanPham; i++)
	{   
		cout << i << ". ";
		xuat_SanPham(dh.ds_sp[i]);
		tongtien = tongtien + dh.ds_sp[i].giaTienSP;
		cout << endl;
	}
	cout << "\n Tong gia tien cua don hang la :" << tongtien;
	cout << "\n====================================================================================================";
	cout << endl;


	//cout << setw(10) << dh.maDH << setw(20) << dh.tenKH << setw(20) << dh.soLuongSanPham << endl;
}
void xuat_DS_DH(DS_DonHang& dsdh)
{
	cout << "\n====================================================================================================";
	cout << endl;
	cout << "Co " << dsdh.soLuongDonHang << " trong danh sach don hang." << endl;
	cout << setw(0) << "STT" << setw(17) << "Ma don hang" << setw(17) << "Ten khach hang" << setw(20) << "So luong san pham"
		<< setw(7) << t->tm_hour << ":" << t->tm_min << "|" << t->tm_mday << "/" << t->tm_mon + 1 << "/" << t->tm_year + 1900;
	cout << endl;
	for (int i = 1; i <= dsdh.soLuongDonHang; i++)
	{
		cout << i << ". ";
		cout << setw(13) << dsdh.ds_dh[i].maDH << setw(15) << dsdh.ds_dh[i].tenKH << setw(17) << dsdh.ds_dh[i].soLuongSanPham;
		cout << endl;
	}
	cout << "\n====================================================================================================";
	cout << endl;
}

void muaHang(DS_DonHang& dsdh, DS_SanPham& dssp)
{
	DonHang dh;
	int sp_mua;
	do
	{

		cout << "\nNhap san phan can mua: ";
		cin >> sp_mua;
		if (sp_mua == 0)
		{
			continue;
		}
		cout << "San pham " << sp_mua << " vua duoc them vao don hang.";
		cout << "\n Nhap 0 neu ban khong chon nua";
		themSPvaoDH(dh, dssp, sp_mua);
	} while (sp_mua != 0);

	cin.ignore();
	cout << "\nNhap ten khach hang: ";
	cin.getline(dh.tenKH, 30);
	time_t hientai = time(0);
	tm* t = localtime(&hientai);
	dh.maDH = 10000+t->tm_hour+ t->tm_min + rand() % 90000;
	//chọn 1 số có 5 chữ số ngẫu nhiên để làm mã đơn hàng + phút và giờ hiện tại
	// trùng thế nào được nữa 
	themDHvaoDS(dsdh, dh);
}
void xoa_DonHang(DS_DonHang& dsdh)
{
	int pos;
	cout << "\n Nhap vi tri Don Hang can xoa co tren danh sach";
	cout << endl;
	cin >> pos;
	while (pos<1 || pos > dsdh.soLuongDonHang)
	{
		cout << "\n So nhap khong co trong danh sach, moi nhap lai ~~";
		cin >> pos;
	}
	for (int i = pos; i <= dsdh.soLuongDonHang; i++)
	{
		dsdh.ds_dh[i] = dsdh.ds_dh[i + 1];
	}
	dsdh.soLuongDonHang--;
}

void menuDonHang(DS_DonHang& dsdh, DonHang& dh, DS_SanPham& dssp)
{

	cout << "\n0. Tro ve main menu";
	cout << "\n1. Tao don hang + Them san pham vao don hang.";
	cout << "\n2. Hien thi chi tiet don hang.";
	cout << "\n3. In danh sach cac don hang.";
	cout << "\n4. Xoa don hang trong danh sach";

	cout << endl;
	cout << "Date time local:";
	cout << t->tm_hour << ":" << t->tm_min << "|" << t->tm_mday << "/" << t->tm_mon + 1 << "/" << t->tm_year + 1900;

	int chon;
	cout << "\nMoi ban nhap lua chon: ";
	cin >> chon;
	if (chon == 0)
	{
		mainmenu(dssp);
	}
	if (chon == 1)
	{
		system("cls");
		xuat_DS_SP(dssp);

		muaHang(dsdh, dssp);
		system("cls");
		menuDonHang(dsdh, dh, dssp);
	}
	if (chon == 2)
	{
		system("cls");
		xuat_DS_DH(dsdh);
		int maDon;
		cout << "\nNhap ma don hang can hien thi: ";
		cin >> maDon;
		system("cls");
		for (int i = 1; i <= dsdh.soLuongDonHang; i++)
		{
			if (maDon == dsdh.ds_dh[i].maDH)
			{
				xuat_DonHang(dsdh.ds_dh[i]);
			}	
		}
		menuDonHang(dsdh, dh, dssp);

	}
	if (chon == 3)
	{
		system("cls");
		xuat_DS_DH(dsdh);

		menuDonHang(dsdh, dh, dssp);
	}
	if (chon == 4)
	{
		system("cls");
		xuat_DS_DH(dsdh);

		xoa_DonHang(dsdh);

        system("cls");
		xuat_DS_DH(dsdh);
		cout << "\n Da xoa don hang thanh cong";
		menuDonHang(dsdh, dh, dssp);

	}
}
