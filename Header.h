//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include <iomanip>
//#include<string.h>
//using namespace std;
//
//const int MAX = 100;
//
////const int tenSanPham = 100;
////const int maSanPham = 5;
////const int gioiTinh = 3;
////const int baoHanh = 2;
//
//struct sanPham //Túi sách
//{
//	char tenSanPham[30];
//	char maSanPham[3];
//	char gioiTinh[3];
//	char baoHanh[2]; //tháng
//};
//
//struct Node //từng Node trong dslk lưu thông tin 1 sản phẩm
//{
//	sanPham data;
//	Node* next;
//};
//typedef Node* Nodeptr;
//
////______________________________________________________________
////void xuatTieuDeTrang();
//
//void khoitao(Nodeptr& list);
//int isEmpty(Nodeptr list);
//void giaiPhong(Nodeptr& list);
//
//Nodeptr create_san_pham(sanPham sp);
//Nodeptr add_sanPham(Nodeptr& list, sanPham sp);
//
//void nhap_san_pham(Nodeptr& list);
//void xuat_ds_san_pham(Nodeptr list);
//
//bool check(Nodeptr& list, char* code);

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <iomanip>
#include<string.h>
using namespace std;

const int MAX = 100;

struct SanPham //túi sách
{
	char maSP[30];
	char tenSP[30];
	char gioiTinhSP[5]; //túi sách có cho nam và nữ
	int baoHanhSP; //đơn vị tháng
	float giaTienSP;
};

struct DS_SanPham
{
	int soSanPham = 0;
	SanPham ds_SP[MAX];
};

void nhap_SanPham(SanPham& sp);
void xuat_SanPham(SanPham sp);

void nhap_DS_SP(DS_SanPham& ds);
void xuat_DS_SP(DS_SanPham& ds);
void Nhap_va_HienThiDS();

void xoa_SanPham(DS_SanPham& ds);
void them_SanPham_Cuoi(DS_SanPham& ds);
void menu1(DS_SanPham ds);
void xep_giaTienSP_tangDan(DS_SanPham& ds);
void xep_giaTienSP_giamDan(DS_SanPham& ds);

void docFile(const char* tenfile, DS_SanPham& ds);
void xuatFile(const char* tenfile, const DS_SanPham& ds);