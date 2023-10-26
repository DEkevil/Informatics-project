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
	xuat_DS_SP(ds);

	xoa_SanPham(ds);
	system("cls");
	xuat_DS_SP(ds);





	system("pause");
}

