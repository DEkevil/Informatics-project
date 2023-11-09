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
		cout << "\n 0. de thoat.";
		cout << "\n================================================================================";
		cout << "\n Moi ban chon :";
		cin >> chose;
		if (chose == 1)
		{
			do {
				cout << "\n0. Them Danh sach san pham( su dung 1 lan )";
				cout << "\n1. Them san pham cuoi";
				cout << "\n2. Xoa san pham.";
				cout << "\n3. Xep gia tien tang dan.";
				cout << "\n4. Xep gia tien giam dan.";
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
					xuat_DS_SP(ds);
					xep_giaTienSP_tangDan(ds);
					break;
				case 4 : 
					system("cls");
					xuat_DS_SP(ds);
					xep_giaTienSP_giamDan(ds);
					break;
				case 99 : 
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
		 else if (chose == 0) 
		{
			exit(0);
		}
}
//	do {
//		xuat_DS_SP(ds);
//		cout << endl;
//
//		cout << "1. Them san pham.";
//		cout << "\n2. Xoa san pham.";
//		cout << "\n3. Xep gia tien tang dan.";
//		cout << "\n4. Xep gia tien giam dan.";
//		cout << "\n0. Thoat.";
//
//
//		int choose;
//		cout << "\nMoi ban nhap lua chon: ";
//		cin >> choose;
//
//		switch (choose)
//		{
//		case 1:
//			system("cls");
//			xuat_DS_SP(ds);
//
//			cout << "Nhap them san pham moi.";
//			cout << endl;
//
//			them_SanPham_Cuoi(ds);
//			break;
//
//		case 2:
//			system("cls");
//			xuat_DS_SP(ds);
//
//			cout << "Chon stt san pham can xoa: ";
//			cout << endl;
//
//			xoa_SanPham(ds);
//			break;
//
//		case 3: //Cần tạo một menu khi bấm vào xếp giá tiền thì sẽ có 2 lựa chọn tăng dần hoặc giảm dần thay vì chọn ở main menu
//			system("cls");
//			xuat_DS_SP(ds);
//
//			xep_giaTienSP_tangDan(ds);
//			break;
//
//		case 4: //đang bị l
//			system("cls");
//			xuat_DS_SP(ds);
//			xep_giaTienSP_giamDan(ds);
//			break;
//
//		case 0:
//			exit(choose);
//			break;
//		default:
//			break;
//		}
//
//		system("cls");
//
//	} while (true);
//
//
//	//for (int i = 0; i <= ds.soSanPham; i++)
//	//{
//	//	xuat_SanPham(ds.ds_SP[i]);
//	//	cout << endl;
//	//}
//
//
//
//	system("pause");
//}

