#include <iostream>
#define _USE_MATH_DEFINES  // ������� �� ������ ������������� ����� ��
using namespace std;   


int main()
{
	setlocale(LC_ALL, "Russian"); // ������� ������� ���������
	int x;
	cout << "������� ����������:  ";
	cin >> x;


	float ver = 1.0668;
	float ver1;
	ver1 = x * ver;

	 
	std::cout << "�����:   " << ver1 << endl;
}


