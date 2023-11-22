#include"Header.h"

using namespace std; // ??? không để thêm thì lệnh system lỗi :)) hết cứu :))
// t đéo có gọi hàm Đơn hàng nó cũng báo lỗi? cmt xong lỗi hiển thị đơn hàng 
void main()
{
	mainmenu();
	// main menu sẽ gọi ra menu làm mới hay đọc file ra menu
	// menu làm mới hay đọc file txt ra menu sẽ triệu hồi lại menu sau khi thao tác với công dụng  99% như cái ban đầu 
	// trừ việc menu thao tác sẽ ko có nhập file hay nhập sản phẩm mà chỉ có thao tác thui => nếu sửa 2 cái menu kia thì update luôn
	// cả menu thao tác
}
//{
//	//DS_DonHang dsdh;
//	//DonHang dh;
//	//
//	//int soLuongSanPham;
//	//cout << "Nhap so luong san pham can them vao don hang: ";
//	//cin >> soLuongSanPham;
//	//
//	//for (int i = 1; i <= soLuongSanPham;i++)
//	//{
//	//	SanPham sp;
//	//	cout << "\nNhap thong tin san pham thu " << i << ":" << endl;
//	//	nhap_SanPham(sp);
//	//	themSPvaoDH(dh, sp);
//	//}
//	//inSP(dsdh, dh);
//	//xuatHD(dh);
//
//	//Test đơn hàng
//
//	//TestThemSPvaoDH(dsdh,dh); //tạo đơn hàng đầu tiên
//	//cout << endl;
//	//TestThemSPvaoDH(dsdh, dh); //tạo đơn hàng thứ hai
//	////test xuất danh sách đơn hàng
//	//cout << endl;
//	//cout << endl;
//	////TestXuatDSDH(dsdh,dh);
//
//	//system("pause");
//
//	//_________________________________________________________________________________________hienthi
//
//	#pragma region Khai báo Struct
//	SanPham sp;
//	DS_SanPham ds;
//<<<<<<< HEAD
//	int chose;
//	cout << "\n              CHUONG TRINH PHAN MEM BAN SAN PHAM QUAN AO";
//	cout << "\n                             Do An Tin Hoc";
//	cout << "\n                       Author : Luong Hieu Thuan";
//	cout << "\n==================================MENU==========================================";
//	cout << "\n 1. Lam moi chuong trinh cua ban(Nhap va xuat danh sach san pham)";
//	cout << "\n 2. Nhap file san pham da co( update code later)";
//	cout << "\n 3. HEll Bitch ";
//	cout << "\n 99. de thoat.";
//	cout << "\n================================================================================";
//	cout << "\n Moi ban chon :";
//	cin >> chose;
//	if (chose == 1)
//=======
//
//	DonHang dh;
//	DS_DonHang dsdh;
//	#pragma endregion
//
//	int hienThi = 0;
//	bool thoatChuongTrinh = true;
//	do
//>>>>>>> 07af006d51cab35e792b5005ae3a5fe2d933e7f5
//	{
//		#pragma region MainMenu
//		cout << "\n              CHUONG TRINH PHAN MEM BAN SAN PHAM QUAN AO";
//		cout << "\n                       Author : Luong Hieu Thuan";
//		cout << "\n==================================MENU==========================================";
//		cout << "\n 1. Lam moi chuong trinh cua ban (Thay doi them, sua, xoa, sap xep,...)";
//		cout << "\n 2. Nhap file san pham da co.";
//		cout << "\n 3. Thao tac tao don hang.";
//		cout << "\n 98. HEll Bitch ";
//		cout << "\n 99. de thoat.";
//		cout << "\n================================================================================";
//		cout << "\n Moi ban chon : ";
//		#pragma endregion
//
//		int chose_MainMenu;
//		cin >> chose_MainMenu;
//
//		bool thoatMainMenu = true;
//
//		do
//		{
//			system("cls");
//			switch (chose_MainMenu)
//			{
//			case 1:
//			{
//				system("cls");
//
//				bool thoatMenu1 = true;
//				do {
//					if (hienThi != 0)
//					{
//						system("cls"); xuat_DS_SP(ds);
//					}
//					hienThi=1;
//
//					#pragma region Menu1
//					cout << "\n0. Them Danh sach san pham( su dung 1 lan )";
//					cout << "\n1. SP: Them san pham cuoi";
//					cout << "\n2. SP: Xoa san pham.";
//					cout << "\n3. SP: Xep gia tien tang dan.";
//					cout << "\n4. SP: Xep gia tien giam dan.";
//					cout << "\n5. SP: Tim san pham theo ma san pham.";
//					cout << "\n6. Xuat File";
//					cout << "\n\n98. Quay ve menu truoc.";
//					cout << "\n99. Thoat chuong trinh.";
//					#pragma endregion
//
//					int chose_Menu1;
//					cout << "\nMoi ban nhap lua chon: ";
//					cin >> chose_Menu1;
//
//					bool thoatSwitchInMenu1 = true;
//					do {
//						switch (chose_Menu1) //Menu 1
//						{
//						case 0:
//						{
//							system("cls");
//							nhap_DS_SP(ds);
//							xuat_DS_SP(ds);
//
//							thoatSwitchInMenu1 = false;
//							break;
//						}
//						case 1:
//						{
//							system("cls");
//							xuat_DS_SP(ds);
//							cout << "Nhap them san pham moi.";
//							cout << endl;
//							them_SanPham_Cuoi(ds);
//							xuat_DS_SP(ds);
//
//							thoatSwitchInMenu1 = false;
//							break;
//						}
//						case 2:
//						{
//							system("cls");
//							xuat_DS_SP(ds);
//							cout << "\nChon stt san pham can xoa: ";
//							cout << endl;
//							xoa_SanPham(ds);
//							xuat_DS_SP(ds);
//
//							thoatSwitchInMenu1 = false;
//							break;
//						}
//						case 3:
//						{
//							system("cls");
//							xep_giaTienSP_tangDan(ds);
//							xuat_DS_SP(ds);
//
//							thoatSwitchInMenu1 = false;
//							break;
//						}
//						case 4:
//						{
//							system("cls");
//							xep_giaTienSP_giamDan(ds);
//							xuat_DS_SP(ds);
//
//							thoatSwitchInMenu1 = false;
//							break;
//						}
//						case 5:
//						{
//							system("cls");
//							xuat_DS_SP(ds);
//							timSP_theoMaSP(ds);
//							system("pause");
//
//							thoatSwitchInMenu1 = false;
//							break;
//						}
//						case 6:
//						{
//							xuatFile("Testxuatfile.txt", ds);
//							system("cls");
//							cout << "Xuat file thanh cong, bam phim bat ki de tiep tuc.\n";
//							system("pause");
//
//							thoatSwitchInMenu1 = false;
//							break;
//						}
//						case 98:
//						{
//							system("cls");
//							thoatSwitchInMenu1 = false;
//							thoatMenu1 = false;
//							break;
//						}
//						case 99:
//						{
//							thoatSwitchInMenu1 = false;
//							thoatMenu1 = false;
//							thoatMainMenu = false;
//							thoatChuongTrinh = false;
//							break;
//						}
//						default:
//							break;
//						}
//					} while (thoatSwitchInMenu1);
//				} while (thoatMenu1);
//
//				thoatMainMenu = false;
//				break;
//			}
//			case 2:
//			{
//				docFile("DanhSach.txt", ds);
//				system("cls");
//				cout << "\nDa nhap file thanh cong, bam phim bat ki de tiep tuc.\n";
//				system("pause");
//				system("cls");
//				hienThi = 1;
//
//
//				thoatMainMenu = false;
//				break;
//			}
//			case 3:
//			{
//				system("cls");
//
//				bool thoatMenu3 = true;
//				do
//				{
//					#pragma region Menu3
//					cout << "\n0. Tao don hang."; //đơn hàng sẽ được tự động thêm vào danh sách đơn hàng sau khi tạo đồng thời hiển thị đơn hàng ra màn hình + in vào file txt
//					cout << "\n1. Hiển thị danh sách đơn hàng."; //chỉ hiển thị
//					cout << "\n2. Điều chỉnh đơn hàng."; //danh sách đơn hàng sẽ được hiện ra, phía dưới sẽ có menu(switch) để điều chỉnh (thêm sp, xóa sp, sửa tên,...)
//					cout << "\n3. Xóa đơn hàng."; //danh sách đơn hàng sẽ được hiện ra, xóa tương tự như với sản phẩm
//					cout << "\n4. In danh sách đơn hàng ra file txt.";
//					cout << "\n5. Tìm đơn hàng theo mã.";
//					cout << "\n\n98. Quay về menu truoc.";
//					cout << "\n99. Thoat chuong trinh.";
//					#pragma endregion
//
//					int chose_Menu3;
//					cout << "\nMoi ban nhap lua chon: ";
//					cin >> chose_Menu3;
//
//					bool thoatSwitchMenu3 = true;
//					do
//					{
//						switch (chose_Menu3)
//						{
//						case 0:
//						{
//							//hiển thị danh sách sản phẩm
//							cout << "Them san pham vao gio hang."; //thêm số lượng
//							cout << "Xoa san pham.";
//							cout << "Tien hanh mua hang."; //HIển thị danh sách sản phẩm trong đơn hàng-->nhập tên-->[Hiện ra ds + giá tiền + thông tin cá nhân]---->Đặt hàng-->thông báo dặt hàng thành công--->in đơn hàng ra file text đồng thời lưu đơn hàng vào danh sách
//							cout << "Thoat / Huy mua hang.";
//						}
//						case 1:
//						{
//
//						}
//						case 2:
//						{
//
//						}
//						case 3:
//						{
//
//						}
//						case 4:
//						{
//
//						}
//						case 5:
//						{
//
//						}
//						case 98:
//						{
//
//						}
//						case 99:
//						{
//
//						}
//						default:
//							break;
//						}
//					} while (thoatSwitchMenu3);
//				} while (thoatMenu3);
//
//
//				system("cls");
//				cout << "Tinh nang chua co :)).\n";
//				system("pause");
//				system("cls");
//
//				thoatMainMenu = false;
//				break;
//			}
//			case 98:
//			{
//				cout << "\nIn a world filled with diverse beauty, his handsome appearance stands out like a beacon of charm. With chiseled features and a captivating smile, he effortlessly commands attention and leaves a lasting impression. His confident demeanor and well-groomed style reflect a sense of self-assurance that is undeniably attractive. It's not just about the symmetrical features or the fashionable attire; it's the way he carries himself with grace and poise. His attractiveness goes beyond skin deep, drawing people in with a magnetic aura that radiates both warmth and confidence. In a room full of faces, his stands out, a testament to the timeless allure of true handsomeness.";
//				cout << "\n彼は容姿端麗で、その美しさはまるで芸術品のようです。彼の顔立ちは誰もが魅了されるほどで、その魅力はまさに圧倒的です。彼の笑顔は心を打ち、どんな瞬間でも彼の存在は目を引きます。美しい外見だけでなく、彼の内面も輝いており、その両方が調和して彼を本当に魅力的にしています。";
//
//				thoatMainMenu = false;
//				break;
//			}
//			case 99:
//			{
//				system("cls");
//				cout << "Test thoat chuong trinh thanh cong\n";
//				system("pause");
//				exit(0);
//				break;
//			}
//			default:
//				break;
//			}
//<<<<<<< HEAD
//		} while (true);
//	}
//	else if (chose == 2)
//	{
//		docFile("DanhSach.txt", ds);
//		xuat_DS_SP(ds);
//		xuatFile("Testxuatfile.txt", ds);
//	}
//	else if (chose == 3)
//	{
//		cout << "\ntest menu";
//		cout << "\nHell bitch";
//		system("pause");
//	}
//	else if (chose == 99)
//	{
//		exit(0);
//	}
//=======
//		} while (thoatMainMenu);
//	} while (thoatChuongTrinh);
//
//
//	system("cls");
//	cout << "\n\nTest thoat chuong trinh thanh cong\n";
//	system("pause");
//
//>>>>>>> 07af006d51cab35e792b5005ae3a5fe2d933e7f5
//}
