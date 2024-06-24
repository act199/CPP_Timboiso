// CPP_Timboiso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int soUoc;
	cout << "Nhap so tim Uoc!!!";
	cout << "\nNhap so: ";
	cin >> soUoc;
	cout << "Uoc cua " << soUoc << " la :\n";
	for (int i = 1; i <= soUoc; i++)
	{
		if (soUoc % i == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl << endl << endl;

	int soBoi, SoCuoi, KetQua = 1;
	cout << "Nhap 2 so tim Boi!!!";
	cout << "\nNhap so: ";
	cin >> soBoi;
	cout << "\nSo ket thuc: ";
	cin >> SoCuoi;
	int i = 1;

	while (KetQua < SoCuoi)
	{
		KetQua = soBoi * i;
		i++;
		cout << KetQua << " ";
	}

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
