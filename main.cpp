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

//_______________________

#include"Header.h"

void main()
{
	SanPham sp;
	DS_SanPham ds;
	do {
		int chose;
		cout << "\n              CHUONG TRINH PHAN MEM BAN SAN PHAM QUAN AO";
		cout << "\n                       Author : Luong Hieu Thuan";
		cout << "\n 1. Lam moi chuong trinh cua ban( them san pham,xoa sua bla bla)";
		cout << "\n 2. Nhap file san pham da co( update code later)";
		cout << "\n 0. de thoat.";
		cout << endl;
		cout << "\n Moi ban chon :";
		cin >> chose;
		switch (chose)
		{
		case 1:
			nhap_DS_SP(ds);
			xuat_DS_SP(ds);
			cout << endl;
			cout << "1. Them san pham.";
			cout << "\n2. Xoa san pham.";
			cout << "\n3. Xep gia tien tang dan.";
			cout << "\n4. Xep gia tien giam dan.";
			cout << "\n0. Thoat.";
			int choose;
			cout << "\nMoi ban nhap lua chon: ";
			cin >> choose;
			switch (choose)
			{
			case 1:
				system("cls");
				xuat_DS_SP(ds);

				cout << "Nhap them san pham moi.";
				cout << endl;

				them_SanPham_Cuoi(ds);
				break;

			case 2:
				system("cls");
				xuat_DS_SP(ds);

				cout << "Chon stt san pham can xoa: ";
				cout << endl;

				xoa_SanPham(ds);
				break;

			case 3: //Cần tạo một menu khi bấm vào xếp giá tiền thì sẽ có 2 lựa chọn tăng dần hoặc giảm dần thay vì chọn ở main menu
				system("cls");
				xuat_DS_SP(ds);

				xep_giaTienSP_tangDan(ds);
				break;

			case 4: //đang bị l
				system("cls");
				xuat_DS_SP(ds);
				xep_giaTienSP_giamDan(ds);
				break;

			case 0:
				exit(choose);
				break;
			default:
				break;
			}
			system("cls");

		case 0: 
			exit(chose);
			break;
		} while (true);
	} while (true);
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

