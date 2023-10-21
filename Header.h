#include<iostream>
using namespace std;

const int MAX = 100;

//const int tenSanPham = 100;
//const int maSanPham = 5;
//const int gioiTinh = 3;
//const int baoHanh = 2;

struct sanPham //Túi sách
{
	string tenSanPham;
	char maSanPham;
	char gioiTinh;
	char baoHanh; //tháng
};

struct Node //từng Node trong dslk lưu thông tin 1 sản phẩm
{

