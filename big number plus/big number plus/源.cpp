#include <iostream>
#include <string>

using namespace std;

void main()
{
	string a1;
	string a2;
	cout << "请输入需要相加的两个大数：" << endl;
	cout << "加数：" << endl;
	cin >> a1;
	cout << "被加数：" << endl;
	cin >> a2;

	string res;
	int OneAdd = 0;//
	int temp2 = 0;//
	int temp = 0;
	int min = a1.length() < a2.length() ? a1.length() : a2.length();//比较两个字符串，取较小一个的长度

	for (int i = 1; i <= min; i++)
	{
		OneAdd = (a1[a1.length() - i] - '0' + a2[a2.length() - i] - '0') + temp;
		temp = OneAdd / 10;			//需要向前一位的数，如9+8=17，进一位:1
		temp2 = OneAdd % 10;		//需要保留的，如9+8=17，保留7
		res.push_back(temp2 + '0');	//将每次保留的数存入结果字符串，注意顺序是反的，结果需倒置输出
	}

	//将余下的直接添加到结果,注意前面可能前进一位
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

	//将res反向输出
	cout << "结果：" << endl;
	for (int i = res.length() - 1; i >= 0; i--)
	{
		cout << res[i];
	}
	cout << endl;
}
