/*
Một người cần rút một số tiền T từ ngân hàng và muốn tổng số tờ ít nhất. 
Cho biết có các loại tiền mệnh giá 100, 20, 5 và 1. 
Nhập từ bàn phím số tiền T và in ra số tờ mỗi loại mệnh giá 
và tổng số tờ nhận được.
*/

#include <iostream>
using namespace std;

int main()
{
	unsigned int T, mg_100 = 100, mg_20 = 20, mg_5 = 5, mg_1 = 1, to_100, to_20, to_5, to_1;
	cout << "So tien can rut: ";
	cin >> T;
	to_100 = T / mg_100;
	to_20 = (T - to_100 * 100) / 20;
	to_5 = (T - to_100 * 100 - to_20 * 20) / 5;
	to_1 = T - to_100 * 100 - to_20 * 20 - to_5 * 5;
	cout << "So to menh gia 100: " << to_100 << endl;
	cout << "So to menh gia 20: " << to_20 << endl;
	cout << "So to menh gia 5: " << to_5 << endl;
	cout << "So to menh gia 1: " << to_1 << endl;
	cout << "Tong so to nhan duoc: " << to_100 + to_20 + to_5 + to_1 << endl;
	return 0;
}

