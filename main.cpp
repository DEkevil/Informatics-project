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
	
	nhap_DS_SP(ds);
	system("cls");
	/*xuat_DS_SP(ds);*/

	//them_SanPham_Cuoi(ds);
	//xuat_DS_SP(ds);


	//xoa_SanPham(ds);
	//system("cls");
	//xuat_DS_SP(ds);

	do {
		xuat_DS_SP(ds);
		cout << endl;

		cout << "1. Them san pham.";
		cout << "\n2. Xoa san pham.";
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
		case 0:
			exit(choose);
			break;
		default:
			break;
		}

		system("cls");

	} while (true);



	system("pause");
}

