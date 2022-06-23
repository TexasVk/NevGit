//1) Пользователь вводит две границы диапазона, вывести на экран все числа из этого диапазона.
// Предусмотреть, чтобы пользователь мог вводить границы диапазона в произвольном порядке.
//■ вывести все четные числа из диапазона.
//■ вывести все нечетные числа из диапазона.
//■ вывести все числа, кратные семи.

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b,tmp,tmp1,tmp2,x;
//	cout << "\n\tEnter Start Range\n\t";
//	cin >> a;
//	cout << "\n\tEnter End Range\n\t";
//	cin >> b;
//	tmp = a;
//	tmp1 = a;
//	tmp2 = a;
//	
//
//	if (a>b)
//	{
//		
//		x = a;
//		a = b;
//		b = x;
//		
//		tmp = a;
//		tmp1 = a;
//		tmp2 = a;
//		
//		cout << "\n\tOur Range  " << a << "\t" << b << "\n";
//		while (a <= b) // Ves diapazon
//		{
//			cout << a << " ";
//			a++;
//		}
//		cout << "\n\n\t" << "Vyvodymo parni" << endl;
//
//
//
//		if (tmp % 2 != 0)
//		{
//			tmp += 1;
//
//			while (tmp <= b)  // parni
//			{
//				cout << tmp << " ";
//				tmp += 2;
//			}
//		}
//		else
//		{
//			while (tmp <= b)  // parni
//			{
//				cout << tmp << " ";
//				tmp += 2;
//			}
//
//		}
//		cout << "\n\n\t" << "Vyvodymo ne parni" << endl;
//
//		if (tmp1 % 2 == 0)
//		{
//			tmp1 += 1;
//
//			while (tmp1 <= b)  // ne parni
//			{
//				cout << tmp1 << " ";
//				tmp1 += 2;
//			}
//		}
//		else
//		{
//			while (tmp1 <= b)  // ne parni
//			{
//				cout << tmp1 << " ";
//				tmp1 += 2;
//			}
//
//		}
//		cout << "\n\n\t Kratni 7" << endl;
//
//		while (tmp2 <= b)    // Kratni 7
//		{
//			if (tmp2 % 7 == 0)
//			{
//				cout << tmp2 << "\t";
//			}
//			++tmp2;
//		}
//		cout << endl;
//	}
//	if (a<b)
//	{
//		tmp = a;
//		tmp1 = a;
//		tmp2 = a;
//
//		cout << "\n\tOur Range  " << a << "\t" << b << "\n";
//		while (a <= b) // Ves diapazon
//		{
//			cout << a << " ";
//			a++;
//		}
//		cout << "\n\n\t" << "Vyvodymo parni" << endl;
//		
//		if (tmp % 2 != 0)
//		{
//			tmp += 1;
//
//			while (tmp <= b)  // parni
//			{
//				cout << tmp << " ";
//				tmp += 2;
//			}
//		}
//		else
//		{
//			while (tmp <= b)  // parni
//			{
//				cout << tmp << " ";
//				tmp += 2;
//			}
//
//		}
//		cout << "\n\n\t" << "Vyvodymo ne parni" << endl;
//
//		if (tmp1 % 2 == 0)
//		{
//			tmp1 += 1;
//
//			while (tmp1 <= b)  // ne parni
//			{
//				cout << tmp1 << " ";
//				tmp1 += 2;
//			}
//		}
//		else
//		{
//			while (tmp1 <= b)  // ne parni
//			{
//				cout << tmp1 << " ";
//				tmp1 += 2;
//			}
//
//		}
//		cout << "\n\n\t Kratni 7" << endl;
//
//		while (tmp2 <= b)    // Kratni 7
//		{
//			if (tmp2 % 7 == 0)
//			{
//				cout << tmp2 << "\t";
//			}
//			++tmp2;
//		}
//		cout << endl;
//
//	}
//     return 0;
//
//}
