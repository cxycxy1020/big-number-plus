#include <iostream>
#include <string>

using namespace std;

void main()
{
	string a1;
	string a2;
	cout << "��������Ҫ��ӵ�����������" << endl;
	cout << "������" << endl;
	cin >> a1;
	cout << "��������" << endl;
	cin >> a2;

	string res;
	int OneAdd = 0;//
	int temp2 = 0;//
	int temp = 0;
	int min = a1.length() < a2.length() ? a1.length() : a2.length();//�Ƚ������ַ�����ȡ��Сһ���ĳ���

	for (int i = 1; i <= min; i++)
	{
		OneAdd = (a1[a1.length() - i] - '0' + a2[a2.length() - i] - '0') + temp;
		temp = OneAdd / 10;			//��Ҫ��ǰһλ��������9+8=17����һλ:1
		temp2 = OneAdd % 10;		//��Ҫ�����ģ���9+8=17������7
		res.push_back(temp2 + '0');	//��ÿ�α��������������ַ�����ע��˳���Ƿ��ģ�����赹�����
	}

	//�����µ�ֱ����ӵ����,ע��ǰ�����ǰ��һλ
	while (a1.length() > min)
	{
		OneAdd = a1[a1.length() - 1 - min] - '0' + temp;
		temp = OneAdd / 10;
		temp2 = OneAdd % 10;
		res.push_back(temp2 + '0');
		min++;
	}
	while (a2.length() > min)
	{
		OneAdd = a2[a2.length() - 1 - min] - '0' + temp;
		temp = OneAdd / 10;
		temp2 = OneAdd % 10;
		res.push_back(temp2 + '0');
		min++;
	}

	//��res�������
	cout << "�����" << endl;
	for (int i = res.length() - 1; i >= 0; i--)
	{
		cout << res[i];
	}
	cout << endl;
}
