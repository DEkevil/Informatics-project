﻿#include"Header.h"

using namespace std; // ??? không để thêm thì lệnh system lỗi :)) hết cứu :))
void main()
{
	//DS_DonHang dsdh;
	//DonHang dh;
	//
	//int soLuongSanPham;
	//cout << "Nhap so luong san pham can them vao don hang: ";
	//cin >> soLuongSanPham;
	//
	//for (int i = 1; i <= soLuongSanPham;i++)
	//{
	//	SanPham sp;
	//	cout << "\nNhap thong tin san pham thu " << i << ":" << endl;
	//	nhap_SanPham(sp);
	//	themSPvaoDH(dh, sp);
	//}
	//inSP(dsdh, dh);
	//xuatHD(dh);

	//Test đơn hàng

	//TestThemSPvaoDH(dsdh,dh); //tạo đơn hàng đầu tiên
	//cout << endl;
	//TestThemSPvaoDH(dsdh, dh); //tạo đơn hàng thứ hai
	////test xuất danh sách đơn hàng
	//cout << endl;
	//cout << endl;
	////TestXuatDSDH(dsdh,dh);

	//system("pause");

	//_________________________________________________________________________________________

	#pragma region Khai báo Struct
	SanPham sp;
	DS_SanPham ds;

	DonHang dh;
	DS_DonHang dsdh;
	#pragma endregion

	int hienThi = 0;
	bool thoatChuongTrinh = true;
	do
	{

		#pragma region MainMenu
		cout << "\n              CHUONG TRINH PHAN MEM BAN SAN PHAM QUAN AO";
		cout << "\n                       Author : Luong Hieu Thuan";
		cout << "\n==================================MENU==========================================";
		cout << "\n 1. Lam moi chuong trinh cua ban (Thay doi them, sua, xoa, sap xep,...)";
		cout << "\n 2. Nhap file san pham da co.";
		cout << "\n 3. Thao tac tao don hang.";
		cout << "\n 98. HEll Bitch ";
		cout << "\n 99. de thoat.";
		cout << "\n================================================================================";
		cout << "\n Moi ban chon : ";
		#pragma endregion

		

		int chose_MainMenu;
		cin >> chose_MainMenu;

		bool thoatMainMenu = true;

		do
		{
			system("cls");
			switch (chose_MainMenu)
			{
			case 1:
			{
				system("cls");

				bool thoatMenu1 = true;
				do {
					if (hienThi != 0)
					{
						system("cls"); xuat_DS_SP(ds);
					}
					hienThi++;

					#pragma region Menu1
					cout << "\n0. Them Danh sach san pham( su dung 1 lan )";
					cout << "\n1. SP: Them san pham cuoi";
					cout << "\n2. SP: Xoa san pham.";
					cout << "\n3. SP: Xep gia tien tang dan.";
					cout << "\n4. SP: Xep gia tien giam dan.";
					cout << "\n5. Xuat File";
					cout << "\n\n98. Quay ve menu truoc.";
					cout << "\n99. Thoat chuong trinh.";
					#pragma endregion

					int chose_Menu1;
					cout << "\nMoi ban nhap lua chon: ";
					cin >> chose_Menu1;

					bool thoatSwitchInMenu1 = true;
					do {
						switch (chose_Menu1) //Menu 1
						{
						case 0:
							system("cls");
							nhap_DS_SP(ds);
							xuat_DS_SP(ds);

							thoatSwitchInMenu1 = false;
							break;
						case 1:
							system("cls");
							xuat_DS_SP(ds);
							cout << "Nhap them san pham moi.";
							cout << endl;
							them_SanPham_Cuoi(ds);
							xuat_DS_SP(ds);

							thoatSwitchInMenu1 = false;
							break;
						case 2:
							system("cls");
							xuat_DS_SP(ds);
							cout << "\nChon stt san pham can xoa: ";
							cout << endl;
							xoa_SanPham(ds);
							xuat_DS_SP(ds);

							thoatSwitchInMenu1 = false;
							break;
						case 3:
							system("cls");
							xep_giaTienSP_tangDan(ds);
							xuat_DS_SP(ds);

							thoatSwitchInMenu1 = false;
							break;
						case 4:
							system("cls");
							xep_giaTienSP_giamDan(ds);
							xuat_DS_SP(ds);

							thoatSwitchInMenu1 = false;
							break;
						case 5:
							docFile("DanhSach.txt", ds);
							xuat_DS_SP(ds);
							xuatFile("Testxuatfile.txt", ds);

							thoatSwitchInMenu1 = false;
							break;
						case 98:
							system("cls");
							thoatSwitchInMenu1 = false;
							thoatMenu1 = false;
							break;
						case 99:
							thoatSwitchInMenu1 = false;
							thoatMenu1 = false;
							thoatMainMenu = false;
							thoatChuongTrinh = false;
							break;
						default:
							break;
						}
					} while (thoatSwitchInMenu1);
				} while (thoatMenu1);

				thoatMainMenu = false;
				break;
			}
			case 2:
				docFile("DanhSach.txt", ds);
				system("cls");
				cout << "\nDa nhap file thanh cong, bam phim bat ki de tiep tuc.\n";
				system("pause");
				system("cls");
				hienThi++;
				

				thoatMainMenu = false;
				break;
			case 3:
				system("cls");
				cout << "\nTinh nang chua co :)).\n";
				system("pause");
				system("cls");

				thoatMainMenu = false;
				break;
			case 98:
				cout << "\nIn a world filled with diverse beauty, his handsome appearance stands out like a beacon of charm. With chiseled features and a captivating smile, he effortlessly commands attention and leaves a lasting impression. His confident demeanor and well-groomed style reflect a sense of self-assurance that is undeniably attractive. It's not just about the symmetrical features or the fashionable attire; it's the way he carries himself with grace and poise. His attractiveness goes beyond skin deep, drawing people in with a magnetic aura that radiates both warmth and confidence. In a room full of faces, his stands out, a testament to the timeless allure of true handsomeness.";
				cout << "\n彼は容姿端麗で、その美しさはまるで芸術品のようです。彼の顔立ちは誰もが魅了されるほどで、その魅力はまさに圧倒的です。彼の笑顔は心を打ち、どんな瞬間でも彼の存在は目を引きます。美しい外見だけでなく、彼の内面も輝いており、その両方が調和して彼を本当に魅力的にしています。";

				thoatMainMenu = false;
				break;
			case 99:
				system("cls");
				cout << "Test thoat chuong trinh thanh cong\n";
				system("pause");
				exit(0);
				break;
			default:
				break;
			}
		} while (thoatMainMenu);
	} while (thoatChuongTrinh);


	//else if (chose_MainMenu == 3)
	//{
	//	cout << "\nIn a world filled with diverse beauty, his handsome appearance stands out like a beacon of charm. With chiseled features and a captivating smile, he effortlessly commands attention and leaves a lasting impression. His confident demeanor and well-groomed style reflect a sense of self-assurance that is undeniably attractive. It's not just about the symmetrical features or the fashionable attire; it's the way he carries himself with grace and poise. His attractiveness goes beyond skin deep, drawing people in with a magnetic aura that radiates both warmth and confidence. In a room full of faces, his stands out, a testament to the timeless allure of true handsomeness.";
	//	cout << "\n彼は容姿端麗で、その美しさはまるで芸術品のようです。彼の顔立ちは誰もが魅了されるほどで、その魅力はまさに圧倒的です。彼の笑顔は心を打ち、どんな瞬間でも彼の存在は目を引きます。美しい外見だけでなく、彼の内面も輝いており、その両方が調和して彼を本当に魅力的にしています。";
	//	system("pause");
	//}
	//else if (chose_MainMenu == 99)
	//{
	//	exit(0);
	//}


	system("cls");
	cout << "\n\nTest thoat chuong trinh thanh cong\n";
	system("pause");
}
