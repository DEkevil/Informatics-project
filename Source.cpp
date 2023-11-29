#include"Header.h"
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

void nhap_DS_SP(DS_SanPham& ds)
{
	cout << "Nhap so luong san pham can hien thi: ";
	cin >> ds.soSanPham;

	cout << "Nhap danh sach san pham: ";
	cout << endl;

	for (int i = 1; i <= ds.soSanPham; i++)
	{
		cout << "San pham thu " << i << endl;
		nhap_SanPham(ds.ds_SP[i]);
		cout << endl;

	}
}
void xuat_DS_SP(DS_SanPham& ds)
{
	cout << "\n====================================================================================================";
	cout << endl;
	cout << "Co " << ds.soSanPham << " trong cua hang." << endl;
	cout << setw(0) << "STT" << setw(17) << "Ten san pham" << setw(17) << "Ma san pham" << setw(20) << "Gioi tinh"
		<< setw(20) << "Bao hanh" << setw(20) << "Gia tien" << endl;
	for (int i = 1; i <= ds.soSanPham; i++)
	{
		cout << i << ". ";
		xuat_SanPham(ds.ds_SP[i]);
		cout << endl;
	}
	cout << "\n====================================================================================================";
	cout << endl;
}

void xoa_SanPham(DS_SanPham& ds)
{
	int pos;
	cout << "\nNhap vi tri san pham can xoa co tren danh sach: ";
	cin >> pos;

	while (pos < 1 || pos > ds.soSanPham)
	{
		cout << "So nhap nam ngoai danh sach, xin moi nhap lai:	";
		cin >> pos;
	}

	for (int i = pos; i <= ds.soSanPham; i++)
	{
		ds.ds_SP[i] = ds.ds_SP[i + 1];
	}
	ds.soSanPham--;
}
void them_SanPham_Cuoi(DS_SanPham& ds)
{
	SanPham sp;
	ds.soSanPham++;
	nhap_SanPham(ds.ds_SP[ds.soSanPham]);
}
void xep_giaTienSP_tangDan(DS_SanPham& ds) //InterchangeSort
{
	SanPham sp;

	int n = ds.soSanPham;

	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (ds.ds_SP[i].giaTienSP > ds.ds_SP[j].giaTienSP)
				swap(ds.ds_SP[i], ds.ds_SP[j]);
		}
	}
}
void xep_giaTienSP_giamDan(DS_SanPham& ds) //InterchangeSort
{
	SanPham sp;
	int n = ds.soSanPham;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (ds.ds_SP[i].giaTienSP < ds.ds_SP[j].giaTienSP)
				swap(ds.ds_SP[i], ds.ds_SP[j]);
		}
	}
}
void timSP_theoTenSP(DS_SanPham ds)
{
	SanPham sp;
	char ma[50];
	bool found = false;
	cout << "\nNhap ten san pham can tim";
	cout << endl;
	cin.ignore();
	cin.getline(ma, 50);
	for (int i = 0; i <= ds.soSanPham; i++)
	{
		if (strcmp(ma, ds.ds_SP[i].tenSP) == 0)
		{
			found = true;
			system("cls");
			cout << "\n Co San Pham ma ban tim kiem :";

			cout << endl;

			cout << setw(0) << "STT" << setw(17) << "Ten san pham" << setw(17)
				<< "Ma san pham" << setw(20) << "Gioi tinh"
				<< setw(20) << "Bao hanh" << setw(20) << "Gia tien" << endl;
			cout << i << ". ";
			xuat_SanPham(ds.ds_SP[i]);
			break;
		}
	}
	if (found == false)
	{
		cout << "\nKhong co san pham ma ban can tim.\n";
	}
}

void timSP_theoMaSP(DS_SanPham ds)
{
	SanPham sp;
	char maCanTim[30];
	bool timThay = false;

	cout << "Nhap ma san pham can tim: ";
	cin.ignore();
	cin.getline(maCanTim, 30);
	for (int i = 1; i <= ds.soSanPham; i++)
	{
		int ketQua = strcmp(maCanTim, ds.ds_SP[i].maSP); // Nếu giống nhau sẽ trả về kết quả bằng 0

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
			xuat_SanPham(ds.ds_SP[i]);
			break;
		}
	}
	if (timThay == false)
	{
		cout << "\nKhong co san pham ma ban can tim.\n";
	}
}

void docFile(const char* tenfile, DS_SanPham& ds)
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
		ds.ds_SP[i] = sp;
		i++;
	}
	ds.soSanPham = i - 1;

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
void xuatFile(const char* tenfile, const DS_SanPham& ds)
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
	for (int i = 1; i <= ds.soSanPham; ++i)
	{
		fprintf(file, "%s \t%s \t%s \t\t%d \t\t%.2f\n", ds.ds_SP[i].maSP, ds.ds_SP[i].tenSP, ds.ds_SP[i].gioiTinhSP, ds.ds_SP[i].baoHanhSP, ds.ds_SP[i].giaTienSP);
	}
	fclose(file);
}

void mainmenu(DS_SanPham& ds)// menu chính 
{
	int n;



	system("cls");
	cout << "\n                  CHUONG TRINH PHAN MEM BAN SAN PHAM QUAN AO ";
	cout << "\n                                 From STU-IT";
	cout << "\n                   Author : Thuan Luong and Thong Lon";
	cout << "\n==================================MENU==========================================";
	cout << "\n 1. Lam moi chuong trinh cua ban (Thay doi them, sua, xoa, sap xep,...)";
	cout << "\n 2. Nhap file san pham da co";
	cout << "\n 3. Thao tac tao don hang(update later)";
	cout << "\n 5. test xuat dssp.";
	cout << "\n 99. de thoat.";
	cout << "\n================================================================================";
	cout << "\n Moi ban chon : ";
	cin >> n;
	if (n == 1)
	{
		menuLamMoi(ds);
	}
	if (n == 2)
	{
		menuNhapXuatFile(ds);
	}
	if (n == 3)
	{
		xuat_SanPham(ds.ds_SP[3]);
		cout << endl;
	}
	if (n == 5)
	{
		xuat_DS_SP(ds);
	}
	else if (n == 99)
	{
		exit(0);
	}

}
void menuNhapXuatFile(DS_SanPham& ds)// menu sau khi đọc file txt
{
	system("cls");
	docFile("DanhSach.txt", ds);
	system("cls");
	cout << "Doc file thanh cong, bam phim bat ki de tiep tuc.\n";
	system("pause");
	system("cls");

	xuat_DS_SP(ds);
	cout << endl;
	cout << "\n1. Them san pham.";
	cout << "\n2. Xoa san pham.";
	cout << "\n3. Xep gia tien tang dan.";
	cout << "\n4. Xep gia tien giam dan.";
	cout << "\n5. Xuat ra file txt";
	cout << "\n6. Tim san pham theo ma san pham";
	cout << "\n7. Tim san pham theo ten san pham";
	cout << "\n0. Quay tro ve main menu";
	int chon;
	cout << "\nMoi ban nhap lua chon: ";
	cin >> chon;
	if (chon == 1)
	{
		system("cls");
		xuat_DS_SP(ds);
		cout << "\nNhap them san pham moi.";
		them_SanPham_Cuoi(ds);
		xuat_DS_SP(ds);
	}
	else if (chon == 2)
	{
		system("cls");
		xuat_DS_SP(ds);
		cout << "\nChon stt san pham can xoa: ";
		cout << endl;
		xoa_SanPham(ds);
		xuat_DS_SP(ds);
	}
	else if (chon == 3)
	{
		system("cls");
		xuat_DS_SP(ds);
		xep_giaTienSP_tangDan(ds);
		xuat_DS_SP(ds);
	}
	else if (chon == 4)
	{
		system("cls");
		xep_giaTienSP_giamDan(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 5)
	{
		system("cls");
		xuatFile("DanhSach.txt", ds);
		system("cls");
		cout << "Xuat file thanh cong, bam phim bat ki de tiep tuc.\n";
		system("pause");
		system("cls");
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 6)
	{
		system("cls");
		timSP_theoMaSP(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 7)
	{
		system("cls");
		timSP_theoTenSP(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 0)
	{
		mainmenu(ds);
	}

}
void menuSauKhiThaoTac(DS_SanPham& ds) // menu khi sau thực hiện đọc file hay nhập liệu
{
	xuat_DS_SP(ds);
	cout << endl;
	cout << "\n1. Them san pham.";
	cout << "\n2. Xoa san pham.";
	cout << "\n3. Xep gia tien tang dan.";
	cout << "\n4. Xep gia tien giam dan.";
	cout << "\n5. Xuat ra file txt";
	cout << "\n6. Tim san pham theo ma san pham";
	cout << "\n7. Tim san pham theo ten san pham";
	cout << "\n0. Quay tro ve main menu";
	int chon;
	cout << "\nMoi ban nhap lua chon: ";
	cin >> chon;
	if (chon == 1)
	{
		system("cls");
		xuat_DS_SP(ds);
		cout << "\nNhap them san pham moi.";
		them_SanPham_Cuoi(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 2)
	{
		system("cls");
		xuat_DS_SP(ds);
		cout << "\nChon stt san pham can xoa: ";
		cout << endl;
		xoa_SanPham(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 3)
	{
		system("cls");
		xep_giaTienSP_tangDan(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 4)
	{
		system("cls");
		xep_giaTienSP_giamDan(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 5)
	{
		system("cls");
		xuatFile("DanhSach.txt", ds);
		system("cls");
		cout << "Xuat file thanh cong, bam phim bat ki de tiep tuc.\n";
		system("pause");
		system("cls");
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 6)
	{
		system("cls");
		timSP_theoMaSP(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 7)
	{
		system("cls");
		timSP_theoTenSP(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 0)
	{
		mainmenu(ds);
	}
}
void menuLamMoi(DS_SanPham& ds)// menu gốc 
{
	system("cls");
	nhap_DS_SP(ds);
	xuat_DS_SP(ds);
	cout << endl;
	cout << "\n1. Them san pham.";
	cout << "\n2. Xoa san pham.";
	cout << "\n3. Xep gia tien tang dan.";
	cout << "\n4. Xep gia tien giam dan.";
	cout << "\n5. Xuat ra file txt";
	cout << "\n6. Tim san pham theo ma san pham";
	cout << "\n7. Tim san pham theo ten san pham";
	cout << "\n0. Quay tro ve main menu";
	int chon;
	cout << "\nMoi ban nhap lua chon: ";
	cin >> chon;
	if (chon == 1)
	{
		system("cls");
		xuat_DS_SP(ds);
		cout << "\nNhap them san pham moi.";
		them_SanPham_Cuoi(ds);
		menuSauKhiThaoTac(ds);

	}
	else if (chon == 2)
	{
		system("cls");
		xuat_DS_SP(ds);
		cout << "\nChon stt san pham can xoa: ";
		cout << endl;
		xoa_SanPham(ds);
		menuSauKhiThaoTac(ds);

	}
	else if (chon == 3)
	{
		system("cls");
		xep_giaTienSP_tangDan(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 4)
	{
		system("cls");
		xep_giaTienSP_giamDan(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 5)
	{
		system("cls");
		xuatFile("DanhSach.txt", ds);
		system("cls");
		cout << "Xuat file thanh cong, bam phim bat ki de tiep tuc.\n";
		system("pause");
		system("cls");
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 6)
	{
		system("cls");
		timSP_theoMaSP(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 7)
	{
		system("cls");
		timSP_theoTenSP(ds);
		menuSauKhiThaoTac(ds);
	}
	else if (chon == 0)
	{
		mainmenu(ds);
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

//void inSP(DS_DonHang& dsdh, DonHang& dh) //in hóa đơn
//{
//
//	//cout << "Nhap ten khach hang: ";
//	//cin.getline(dh.tenKH, 30);
//
//	themDHvaoDS(dsdh, dh);
//}
//void xuatHD(DonHang dh)
//{
//	cout << "Thong tin hoa don: ";
//	cout << endl;
//
//	cout << setw(0) << "STT" << setw(17) << "Ten san pham" << setw(17) << "Ma san pham" << setw(20) << "Gioi tinh"
//		<< setw(20) << "Bao hanh" << setw(20) << "Gia tien" << endl;
//	for (int i = 1; i <= dh.soLuongSanPham; i++)
//	{
//		cout << setw(10) << dh.ds_sp[i].maSP << setw(20) << dh.ds_sp[i].tenSP << setw(20) << dh.ds_sp[i].gioiTinhSP << setw(20) << dh.ds_sp[i].baoHanhSP << setw(20)
//			<< dh.ds_sp[i].giaTienSP << endl;
//	}
//	cout << "Ten khach hang: " << dh.tenKH;
//}

void xuat_DonHang(DonHang dh)
{
	cout << "\n====================================================================================================";
	cout << endl;
	cout << "Co " << dh.soLuongSanPham << " san pham trong don hang." << endl;
	cout << setw(0) << "STT" << setw(17) << "Ten san pham" << setw(17) << "Ma san pham" << setw(20) << "Gioi tinh"
		<< setw(20) << "Bao hanh" << setw(20) << "Gia tien" << endl;
	for (int i = 1; i <= dh.soLuongSanPham; i++)
	{
		cout << i << ". ";
		xuat_SanPham(dh.ds_sp[i]);
		cout << endl;
	}
	cout << "\n====================================================================================================";
	cout << endl;


	cout << setw(10) << dh.maDH << setw(20) << dh.tenKH << setw(20) << dh.soLuongSanPham << endl;
}
void xuat_DS_DH(DS_DonHang& ds)
{
	cout << "\n====================================================================================================";
	cout << endl;
	cout << "Co " << ds.soLuongDonHang << " trong danh sach don hang." << endl;
	cout << setw(0) << "STT" << setw(17) << "Ma don hang" << setw(17) << "Ten khach hang" << setw(20) << "So luong san pham" << endl;
	for (int i = 1; i <= ds.soLuongDonHang; i++)
	{
		cout << i << ". ";
		cout << setw(0) << ds.ds_dh[i].maDH << setw(17) << ds.ds_dh[i].tenKH << setw(20) << ds.ds_dh[i].soLuongSanPham;
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
		themSPvaoDH(dh, dssp, sp_mua);
	} while (sp_mua != 0);

	cin.ignore();
	cout << "\nNhap ten khach hang: ";
	cin.getline(dh.tenKH, 30);

	dh.maDH = 1000 + rand() % 9000;



	themDHvaoDS(dsdh, dh);
}

void menuDonHang(DS_DonHang& dsdh, DonHang& dh, DS_SanPham& dssp)
{
	cout << "\n1. Them san pham vao don hang.";
	cout << "\n2. In don hang ra man hinh.";
	cout << "\n3. In danh sach cac don hang.";
	cout << "\n4. Thoat";

	int chon;
	cout << "\nMoi ban nhap lua chon: ";
	cin >> chon;
	if (chon == 1)
	{
		system("cls");
		xuat_DS_SP(dssp);

		/*int sp_mua;
		cout << "\nNhap san phan can mua: ";
		cin >> sp_mua;
		cout << "San pham " << sp_mua << " vua duoc them vao don hang.";
		themSPvaoDH(dh,dssp, sp_mua);
		themDHvaoDS(dsdh, dh);*/

		muaHang(dsdh, dssp);


		menuDonHang(dsdh, dh, dssp);
	}
	if (chon == 2)
	{
		system("cls");
		xuat_DS_DH(dsdh);
		int maDon;
		cout << "\nNhap ma don hang can hien thi: ";
		cin >> maDon;

		for (int i = 1; i <= dsdh.soLuongDonHang; i++)
		{
			if (maDon == dsdh.ds_dh[i].maDH)
			{
				xuat_DonHang(dsdh.ds_dh[i]);
			}	
		}

		/*xuat_DonHang(dh);*/

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

	}
}






//dang test nen de trong ham(sau dung vong lap se dua ra ngoai sau)
//cin.ignore();
//cout << "\nNhap ten khach hang: ";
//cin.getline(dh.tenKH, 30);
//

//cout << "\nNhap ma don hang: ";
//cin.getline(dh.maDH, 10);