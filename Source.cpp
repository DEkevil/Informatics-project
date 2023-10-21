#include"Header.h"

void khoitao(Nodeptr& list)
{
	list = NULL;
}
int isEmpty(Nodeptr list)
{
	if (list == NULL) {
		return 1;
	}
	else {
		return 0;
	}
}
void giaiPhong(Nodeptr& list)
{
	Nodeptr p = list;
	while (p != NULL)
	{
		list = list->next;
		delete p;
		p = list;
	}
}
//_________________________________________

Nodeptr create_san_pham(sanPham sp)
{
	Nodeptr p;
	p = new Node;
	p->data = sp;
	p->next = NULL;
	return p;
}

Nodeptr add_sanPham(Nodeptr& list, sanPham sp) //thêm đầu
{
	Nodeptr p = create_san_pham(sp);
	p->next = list;
	list = p;
	return p;
}
//hàm kiểm tra trùng mã

//void nhap_san_pham(Nodeptr& list)
//{
//	sanPham sp;
//	khoitao(list);
//
//	do
//	{
//		if (strcmp(sp.tenSanPham, "0") == 0) //nhap 0 de thoat
//		{
//			cout << "Nhap ten san pham: ";
//			cin.getline(sp.tenSanPham, 30);
//			cout << "\nNhap ma san pham: ";
//			cin >> sp.maSanPham;
//			cout << "\nNhap gioi tinh san pham: ";
//			cin >> sp.gioiTinh;
//			cout << "\nNhap thoi gian bao hanh: ";
//			cin >> sp.baoHanh;
//
//			add_sanPham(list, sp);
//		}
//	} while (1);
//}

//void nhap_san_pham(Nodeptr& list)
//{
//	sanPham sp;
//	khoitao(list);
//
//	do {
//		/*cin.ignore();*/
//		cout << "Nhap ten san pham (nhap '0' de thoat): ";
//		cin.ignore();
//		cin.getline(sp.tenSanPham, 30);
//
//		if (strcmp(sp.tenSanPham, "0") == 0)
//		{
//			break;
//		}
//
//		cout << "Nhap ma san pham: ";
//		cin.ignore();
//		cin >> sp.maSanPham;
//		cout << "Nhap gioi tinh san pham: ";
//		cin.ignore();
//		cin >> sp.gioiTinh;
//		cout << "Nhap thoi gian bao hanh: ";
//		cin.ignore();
//		cin >> sp.baoHanh;
//
//		add_sanPham(list, sp);
//	} while (1);
//}

void nhap_san_pham(Nodeptr& list) {
	sanPham sp;
	khoitao(list);

	do {
		cout << "Nhap ten san pham (nhap '0' de thoat): ";
		cin.ignore();
		cin.getline(sp.tenSanPham, sizeof(sp.tenSanPham));

		if (strcmp(sp.tenSanPham, "0") == 0) {
			break;
		}

		cout << "Nhap ma san pham: ";
		cin >> sp.maSanPham;
		cout << "Nhap gioi tinh san pham: ";
		cin >> sp.gioiTinh;
		cout << "Nhap thoi gian bao hanh: ";
		cin >> sp.baoHanh;

		add_sanPham(list, sp);
	} while (1);
}

void xuat_ds_san_pham(Nodeptr list)
{
	cout << setw(0) << "Ten san pham" << setw(15) << "ma san pham" << setw(15) << "gioi tinh" << setw(15) << "bao hanh" << endl;
	while (list != NULL)
	{
		cout << setw(0) << list->data.tenSanPham << setw(15) << list->data.maSanPham << setw(15) << list->data.gioiTinh << setw(15) << list->data.baoHanh << endl;
		list = list->next;
	}
}



//_________________________________________

//void xuatTieuDeTrang()
//{
//	cout << "Ten san pham: ";
//	cout << "\nMa san pham: ";
//	cout << "\nGioi tinh: ";
//	cout << "\nThoi gian bao hanh: ";
//	cout << endl;
//
//}
