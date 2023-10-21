#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <iomanip>
#include<string.h>
using namespace std;

const int MAX = 100;

//const int tenSanPham = 100;
//const int maSanPham = 5;
//const int gioiTinh = 3;
//const int baoHanh = 2;

struct sanPham //Túi sách
{
	char tenSanPham[30];
	char maSanPham[3];
	char gioiTinh[3];
	char baoHanh[2]; //tháng
};

struct Node //từng Node trong dslk lưu thông tin 1 sản phẩm
{
	sanPham data;
	Node* next;
};
typedef Node* Nodeptr;


//sanPham SanPham[MAX];

//______________________________________________________________
void xuatTieuDeTrang();

void khoitao(Nodeptr& list);
int isEmpty(Nodeptr list);
void giaiPhong(Nodeptr& list);

Nodeptr create_san_pham(sanPham sp);
Nodeptr add_sanPham(Nodeptr& list, sanPham sp);

void nhap_san_pham(Nodeptr& list);
void xuat_ds_san_pham(Nodeptr list);


