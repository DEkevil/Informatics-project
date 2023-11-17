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

struct DonHang
{
	char tenKH[30];
	int soLuongSanPham = 0;
	SanPham ds_sp[MAX];
};
struct DS_DonHang
{
	int soLuongDonHang = 0;
	DonHang ds_dh[MAX];
};

void themSPvaoDH(DonHang& dh, SanPham& sp);
void themDHvaoDS(DS_DonHang& dsdh, DonHang& dh);
void inSP(DS_DonHang& dsdh, DonHang& dh);
void xuatHD(DonHang dh);

void TestThemSPvaoDH(DS_DonHang& dsdh, DonHang& dh);
void TestXuatDSDH(DS_DonHang dsdh, DonHang dh);

