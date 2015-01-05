#include <iostream>
#include "Stack.h"
using namespace std;
/*
+ = 43
- = 45
* = 42
/ = 47
( = 40
) = 41
^ = 94
# = 34
*/
int stringToInt(char a) // ���ȼ�����
{
	int n;

	switch (a)
	{
		case '+':
		case '-':
			n = 1;
			break;

		case '*':
		case '/':
			n = 2;
			break;

		case '#':
		case '^':
			n = 3;
			break;

		case '(':
			n = 5;
			break;

		case ')':
			n = 6;
			break;

		default:
			n = -1;
			break;


	}

	return n;
}

int main()
{
	string s;
	Stack tor;
	cin >> s;

	for (string::iterator a = s.begin(); a < s.end(); a++)
	{
		if (stringToInt(*a) != -1) //����������һ�����ʽ����
		{
			if (tor.isEmpty()) //��ջʱֱ����ջ
			{
				tor.push(*a);
				continue;
			}
			if (stringToInt(*a) == 5) //����ǡ�����ֱ����ջ
			{
				tor.push(*a);
				continue;
			}
			if (stringToInt(*a) == 6) //����ǡ�������һֱ��ջֱ�����������������������ʾ����i
			{
				while (stringToInt(tor.getTop()->getData()) != 5 && !tor.isEmpty())
				{
					cout << (char)tor.pop() << " ";
				}
				if(stringToInt(tor.getTop()->getData()) == 5)
				{
					tor.pop();
				}
				continue;
			} //���ջ��>����ľ�ֱ����ջ
			if (stringToInt(*a)>0 && stringToInt(*a)<4) //�����������Ļ��ͱȽϴ�С��ջ��<����ľ� һֱ��ջֱ��ĩβ�򵽴����
			{
				while (stringToInt(tor.getTop()->getData())!=5&&stringToInt(*a) <= stringToInt(tor.getTop()->getData()) && !tor.isEmpty())
				{
					cout << (char)tor.pop() << " ";
				}
				tor.push(*a); //��󽫴�Ԫ����ջ
				continue;
			}
		}
		else
			if (isdigit(*a)) //����ֱ�����
			{
				cout << *a << " ";
				continue;
			}
	}

	while (!tor.isEmpty()) //������ջ������Ԫ��
	{
		cout << (char)tor.pop() << " ";
	}

	return 0;
}
