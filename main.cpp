#include"Header.h"

using namespace std; // ??? không để thêm thì lệnh system lỗi :)) hết cứu :))
// t đéo có gọi hàm Đơn hàng nó cũng báo lỗi? cmt xong lỗi hiển thị đơn hàng 
void main()
{
	DonHang dh;
	DS_DonHang dsdh;

	SanPham sp;
	DS_SanPham dssp;


	mainmenu(dssp);

	// main menu sẽ gọi ra menu làm mới hay đọc file ra menu
	// menu làm mới hay đọc file txt ra menu sẽ triệu hồi lại menu sau khi thao tác với công dụng  99% như cái ban đầu 
	// trừ việc menu thao tác sẽ ko có nhập file hay nhập sản phẩm mà chỉ có thao tác thui => nếu sửa 2 cái menu kia thì update luôn
	// cả menu thao tác
}
