#include<iostream>
using namespace std;
class Poddergka
{
public:
	bool t = 1;
	virtual bool Get() = 0;
	virtual void Print() = 0;
	virtual void Problema() = 0;
};
class Otvetchik: public Poddergka
{
	int y;
public:
	Otvetchik()
	{
		int u;
		cout << "���� � ��� �������� � �������� �������-1,���� ��� ���������� ��� ������� �������-2,���� ��� ����� ������ �� ������� �������-3,���� � ��� ������ �������� �������-0" << endl;
		cin >> u;
		y = u;
	}
	virtual void Print()
	{
		switch (y)
		{
		case 1:
		{
			cout << "���������� ����������� ���,���� �� ������� ��������� ��� ���" << endl;
			t = 0;
			break;
		}
		case 2:
		{
			cout << "����� ������ ��������:23121. ������������ ���." << endl;
			t = 0;
			break;
		}
		case 3:
		{
			cout << "����� ������ ��������:23121. ������ �� �������:47839." << endl;
			t = 0;
			break;
		}
		default:
		{
			cout << "�� ������ ��� � ���������� ��������� ������ " << endl;
			break;
		}
		}
	}
	virtual bool Get()
	{
		return t;
	}
	virtual void Problema()
	{
		if (t==false)
		{
			cout << "�������� ������!!"<<endl;
		}
	}
};

class Operator : public Poddergka
{
	int i;
public:
	Operator()
	{
		if (t)
		{
			int n;
			cout << "������������ ��� ���� ������?(1-�������� � ��������,2-������� ��������� �������,0-������� � ������������)" << endl;
			cin >> n;
			i = n;
		}
		
	}
	virtual void Print()
	{
		if (t)
		{
			switch (i)
			{
			case 1:
			{
				cout << "���������� ������ ����������. ����� ��������� � ������������� �������, ���������� ���������� � ���� ������ ������������ � �������, ��������, ������� � �. �.\
					��������� ������� �� ���� ����������� � �������� ��������� � ��������.������� �������� ����, ��� �� �������� �������������, �������� ��������� �������������� ������ ��� ��� ����������� ��������� ���������.�� ����� ������ ������� � ���������� ����������� ���������� � ����� �� ��������.\
					���������� �������� ��������.�� ������, ��� ������, ���� �� �������� ������, ����������� ��������� ����������� ������������ � �������� ��� �� �� �������� ������.��� ���������, ���� ����� ���������� ����������� �� ��� - ���.���� ��� ��������� ����������, � ��� ������ �������� � � �������������� ��� ���������� ������������ ����." << endl;
				t = 0;
				break;
			}
			case 2:
			{
				cout << "������� ������ �� 2 ���� �������� � ����������� �������� � 700�." << endl;
				t = 0;
				break;
			}
			default:
			{
				cout << "�� ������ ��� � ������������ ��������� ������ " << endl;
				break;
			}
			}
		}
	}
	virtual bool Get()
	{
		return t;
	}
	virtual void Problema()
	{
		if (t == false)
		{
			cout << "�������� ������!!" << endl;
		}
	}
};

class Spec : public Poddergka
{
	int j;
public:
	Spec()
	{
		if (t)
		{
			int �;
			cout << "������������, ������ �������� �� ����� ��� ������������?(1-�� �����,2-������������)" << endl;
			cin >> �;
			j = �;
		}

	}
	virtual void Print()
	{
		if (t)
		{
			switch (j)
			{
			case 1:
			{
				cout << "� ������!!" << endl;
				t = 0;
				break;
			}
			default:
			{
				t = 0;
				break;
			}
			}
		}
	}
	virtual bool Get()
	{
		return t;
	}
	virtual void Problema()
	{
		if (t == false)
		{
			cout << "�������� ������!!" << endl;
		}
	}
};
class Zvonok
{
public:
	Zvonok()
	{
		Otvetchik o;
		o.Print();
		o.Problema();
		if (o.Get())
		{
			Operator o1;
			o1.Print();
			o1.Problema();
			if (o1.Get())
			{
				Spec s;
				s.Print();
				s.Problema();
			}
		}
		
	}
};
void main()
{
	setlocale(0, "rus");
	Zvonok z;

 }