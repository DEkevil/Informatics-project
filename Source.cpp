
//void khoitao(Nodeptr& list)
//{
//	list = NULL;
//}
//int isEmpty(Nodeptr list)
//{
//	/*if (list == NULL) {
//		return 1;
//	}
//	else {
//		return 0;
//	}*/
//	return list == NULL ? 1 : 0;
//}
//
//void giaiPhong(Nodeptr& list)
//{
//	Nodeptr p = list;
//	while (p != NULL)
//	{
//		list = list->next;
//		delete p;
//		p = list;
//	}
//}
////_________________________________________
//
//Nodeptr create_san_pham(sanPham sp)
//{
//	Nodeptr p;
//	p = new Node;
//	p->data = sp;
//	p->next = NULL;
//	return p;
//}
//
//Nodeptr add_sanPham(Nodeptr& list, sanPham sp) //thêm đầu
//{
//	//Nodeptr p = create_san_pham(sp);
//	//p->next = list;
//	//list = p;
//	//return p;
//
//	Nodeptr p;
//	p = create_san_pham(sp);
//	if (list == NULL)
//	{
//		list = p;
//	}
//	else
//	{
//		p->next = list;
//		list = p;
//	}
//
//	return list;
//}
////hàm kiểm tra trùng mã
//bool check(Nodeptr& list, char* code)
//{
//	Nodeptr p = list;
//	while (p != NULL)
//	{
//		if (strcmp(p->data.maSanPham, code) == 0)
//			return true;
//		p = p->next;
//	}
//	return false;
//}
//
////void nhap_san_pham(Nodeptr& list)
////{
////	sanPham sp;
////	khoitao(list);
////
////	do
////	{
////		if (strcmp(sp.tenSanPham, "0") == 0) //nhap 0 de thoat
////		{
////			cout << "Nhap ten san pham: ";
////			cin.getline(sp.tenSanPham, 30);
////			cout << "\nNhap ma san pham: ";
////			cin >> sp.maSanPham;
////			cout << "\nNhap gioi tinh san pham: ";
////			cin >> sp.gioiTinh;
////			cout << "\nNhap thoi gian bao hanh: ";
////			cin >> sp.baoHanh;
////
////			add_sanPham(list, sp);
////		}
////	} while (1);
////}
//
////void nhap_san_pham(Nodeptr& list)
////{
////	sanPham sp;
////	khoitao(list);
////
////	do {
////		/*cin.ignore();*/
////		cout << "Nhap ten san pham (nhap '0' de thoat): ";
////		cin.ignore();
////		cin.getline(sp.tenSanPham, 30);
////
////		if (strcmp(sp.tenSanPham, "0") == 0)
////		{
////			break;
////		}
////
////		cout << "Nhap ma san pham: ";
////		cin.ignore();
////		cin >> sp.maSanPham;
////		cout << "Nhap gioi tinh san pham: ";
////		cin.ignore();
////		cin >> sp.gioiTinh;
////		cout << "Nhap thoi gian bao hanh: ";
////		cin.ignore();
////		cin >> sp.baoHanh;
////
////		add_sanPham(list, sp);
////	} while (1);
////}
//
//void nhap_san_pham(Nodeptr& list) {
//	sanPham sp;
//	khoitao(list);
//
//	do {
//		cout << "Nhap ten san pham (nhap '0' de thoat): ";
//		cin.ignore();
//		cin.getline(sp.tenSanPham, sizeof(sp.tenSanPham));
//		//while (check(list, sp.maSanPham))
//		//{
//		//	cout << "\nMa san pham bi trung";
//		//	cout << "\nNhap lai ma san pham: ";
//		//	cin.getline(sp.maSanPham, 3);
//		//}
//		if (strcmp(sp.tenSanPham, "0") == 0)
//		{
//			break;
//		}
//
//		cout << "Nhap ma san pham: ";
//		cin >> sp.maSanPham;
//		cout << "Nhap gioi tinh san pham: ";
//		cin >> sp.gioiTinh;
//		cout << "Nhap thoi gian bao hanh: ";
//		cin >> sp.baoHanh;
//
//		add_sanPham(list, sp);
//	} while (1);
//}
//
//void xuat_ds_san_pham(Nodeptr list)
//{
//	cout << setw(0) << "Ten san pham" << setw(15) << "ma san pham" << setw(15) << "gioi tinh" << setw(15) << "bao hanh" << endl;
//	while (list != NULL)
//	{
//		cout << setw(0) << list->data.tenSanPham << setw(15) << list->data.maSanPham << setw(15) << list->data.gioiTinh << setw(15) << list->data.baoHanh << endl;
//		list = list->next;
//	}
//}
//
//
//
////_________________________________________
//
////void xuatTieuDeTrang()
////{
////	cout << "Ten san pham: ";
////	cout << "\nMa san pham: ";
////	cout << "\nGioi tinh: ";
////	cout << "\nThoi gian bao hanh: ";
////	cout << endl;
////
////}

#include"Header.h"

void nhap_SanPham(SanPham& sp) //thêm theo thứ tự từ trên xuống
{
	cin.ignore();
	cout << "Nhap ma san pham: ";
	cin.getline(sp.maSP, 30); //kiểu char luôn dùng cin.getline
	cout << "Nhap ten san pham: ";
	cin.getline(sp.tenSP, 30);
	cout << "Nhap gioi tinh cua san pham: ";
	cin.getline(sp.gioiTinhSP, 5);
	cout << "Nhap thoi han bao hanh san pham: ";
	cin >> sp.baoHanhSP;
	cout << "Nhap gia tien san pham: ";
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
		cout << "Co " << ds.soSanPham << " trong cua hang." << endl;
		cout << setw(0) << "STT" << setw(17) << "Ten san pham" << setw(17) << "Ma san pham" << setw(20) << "Gioi tinh"
			<< setw(20) << "Bao hanh" << setw(20) << "Gia tien" << endl;

		for (int i = 1; i <= ds.soSanPham; i++)
		{
			cout << i << ". ";
			xuat_SanPham(ds.ds_SP[i]);
			cout << endl;
		}
	
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

//void InterchangeSort(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//		for (int j = i + 1; j < n; j++)
//			if (a[i] > a[j])
//				swap(a[i], a[j]);
//}
void xep_giaTienSP_tangDan(DS_SanPham& ds) //InterchangeSort
{
	SanPham sp;

	int n = ds.soSanPham;

	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
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
	ds.soSanPham = i-1;

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
	fprintf(file, "MaSP\tTenSP\tGTSP\tBH\t\tGiaTien\n");
	for (int i = 0; i < ds.soSanPham; ++i)
	{
		fprintf(file, "%s \t%s \t%s \t\t%d \t\t%.2f\n", ds.ds_SP[i].maSP, ds.ds_SP[i].tenSP, ds.ds_SP[i].gioiTinhSP, ds.ds_SP[i].baoHanhSP, ds.ds_SP[i].giaTienSP);
	}
	fclose(file);
}


void menu1(DS_SanPham ds)// menu gốc 
{
	nhap_DS_SP(ds);
	xuat_DS_SP(ds);
	cout << endl;
	cout << "1. Them san pham.";
	cout << "\n2. Xoa san pham.";
	cout << "\n3. Xep gia tien tang dan.";
	cout << "\n4. Xep gia tien giam dan.";
	cout << "\n0. Thoat.";
	int chon;
	cout << "\nMoi ban nhap lua chon: ";
	cin >> chon;
	if (chon == 1)
	{
		system("cls");
		xuat_DS_SP(ds);
		cout << "\nNhap them san pham moi.";
		them_SanPham_Cuoi(ds);
	}
	else if (chon == 2)
	{
		system("cls");
		xuat_DS_SP(ds);
		cout << "\nChon stt san pham can xoa: ";
		cout << endl;
		xoa_SanPham(ds);
	}
	else if (chon == 3)
	{
		system("cls");
		xuat_DS_SP(ds);
		xep_giaTienSP_tangDan(ds);
	}
}