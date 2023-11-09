//#include"Header.h"
//
//
//void main()
//{
//	Nodeptr ds_sp;
//
//	nhap_san_pham(ds_sp);
//	xuat_ds_san_pham(ds_sp);
//
//	giaiPhong(ds_sp);
//
//	system("pause");
//}

//cmt quan trọng, ko xóa

//#include"Header.h"
//
//void main()
//{
//	SanPham sp;
//	DS_SanPham ds;
//
//
//	cout << "Chao mung den voi trang web.";
//	cout << "\n1. Admin";
//	cout << "\n2. Khach hang";
//	cout << "\n3. Thoat";
//	cout << "\nBan la: ";
//
//	int who;
//	
//	do { //menu lựa chọn giữa admin và khách hàng
//		cin >> who;
//		switch (who)
//		{
//		case 1: //dành cho admin
//			xuat_DS_SP(ds);
//
//			if (ds.soSanPham == 0)
//			{
//				system("cls");
//				xuat_DS_SP(ds);
//				cout << "\n1. Them thu cong san pham moi.";
//				cout << "\n2. Nhap danh sach san pham da co.";
//				cout << "\nMoi nhap lua chon: ";
//				int themChon;
//				do
//				{
//					system("cls");
//					xuat_DS_SP(ds);
//					cout << "\n1. Them thu cong san pham moi.";
//					cout << "\n2. Nhap danh sach san pham da co.";
//					cout << "\n0. Thoat.";
//					cout << "\nMoi nhap lua chon: ";
//					cin >> themChon;
//					if (themChon == 1)
//					{
//						nhap_DS_SP(ds);
//						system("cls");
//						xuat_DS_SP(ds);
//					}
//				} while (themChon != 0);
//			}
//
//			system("cls");
//			xuat_DS_SP(ds);
//			cout << "\n1. Them thu cong san pham moi.";
//			cout << "\n2. Nhap danh sach san pham da co.";
//			cout << "\n3. Xoa san pham.";
//			cout << "\n4. Sap xep san pham."; //hai lựa chọn tăng dần hoặc giảm dần.
//			cout << "\n0. Thoat.";
//			cout << "\n5. TEST";
//			cout << "\nMoi nhap lua chon: ";
//
//			int themChon2;
//			cin >> themChon2;
//			if (themChon2 == 5)
//				cout << "test case 1 menu 1";
//
//
//			cout << endl;
//			//break;
//		case 2: //dành cho người mua hàng
//			cout << "test 2";
//			break;
//		case 3: //thoát
//			break;
//
//		default:
//			break;
//		}
//	} while (who!=3);
//
//	cout << "\nVang ra khoi menu 1, chuan bi ket thuc [TEST]";
//	system("pause");
//
//
//}
#include"Header.h"
void main()
{
	SanPham sp;
	DS_SanPham ds;
	int chose;
	cout << "\n              CHUONG TRINH PHAN MEM BAN SAN PHAM QUAN AO";
	cout << "\n                       Author : Luong Hieu Thuan";
	cout << "\n==================================MENU==========================================";
	cout << "\n 1. Lam moi chuong trinh cua ban(Nhap va xuat danh sach san pham)";
	cout << "\n 2. Nhap file san pham da co( update code later)";
	cout << "\n 3. HEll Bitch ";
	cout << "\n 99. de thoat.";
	cout << "\n================================================================================";
	cout << "\n Moi ban chon :";
	cin >> chose;
	if (chose == 1)
	{
		do {
			cout << "\n0. Them Danh sach san pham( su dung 1 lan )";
			cout << "\n1. SP: Them san pham cuoi";
			cout << "\n2. SP: Xoa san pham.";
			cout << "\n3.SP: Xep gia tien tang dan.";
			cout << "\n4.SP: Xep gia tien giam dan.";
			cout << "\n99. Thoat.";
			int chon;
			cout << "\nMoi ban nhap lua chon: ";
			cin >> chon;
			switch (chon)
			{
			case 0:
				system("cls");
				nhap_DS_SP(ds);
				xuat_DS_SP(ds);
				break;
			case 1:
				system("cls");
				xuat_DS_SP(ds);
				cout << "Nhap them san pham moi.";
				cout << endl;
				them_SanPham_Cuoi(ds);
				xuat_DS_SP(ds);
				break;
			case 2:
				system("cls");
				xuat_DS_SP(ds);
				cout << "\nChon stt san pham can xoa: ";
				cout << endl;
				xoa_SanPham(ds);
				xuat_DS_SP(ds);
				break;
			case 3:
				system("cls");
				xep_giaTienSP_tangDan(ds);
				xuat_DS_SP(ds);
				break;
			case 4:
				system("cls");
				xep_giaTienSP_giamDan(ds);
				xuat_DS_SP(ds);
				break;
			case 5 : 
				docFile("DanhSach.txt", ds);
				xuat_DS_SP(ds);
				xuatFile("Testxuatfile.txt", ds);
				break;
			case 99:
				exit(0);
			default:
				break;
			}
		} while (true);
	}
	else if (chose == 3)
	{
		cout << "\ntest menu";
		cout << "\nHell bitch";
		system("pause");
	}
	else if (chose == 99)
	{
		exit(0);
	}
}
