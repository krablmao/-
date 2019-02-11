#include <iostream>
//додаткова бібліотека
#include <time.h>

using namespace std;

int main()
{
	//генератор випадкових чисео
	srand((unsigned)time(NULL));
	setlocale(LC_ALL, ".1251");
	system("color 1F");

	//розміри матриці
	int A[100][100];
	int n, k, i;
	char z;

	n = 4;
	int a = -99;
	int b = 99;

	do
	{
		system("cls");
		printf("\n\tЗаповнення матрицi A[2%i][2%i] цiлими двозначними числами  \n\n", n, n);

		for (k = 0; k < n; k++)
		{
			cout << "\t";
			for (i = 0; i < n; i++)
			{
				do
				{
					A[k][i] = a + rand() % (b - a + 1);
				} while (abs(A[k][i])<10 || abs(A[k][i])>99);
				printf("%5i", A[k][i]);
			}
			cout << "\n";
		}

		int poz = 0;
		int neg = 0;
		long sump = 0;
		long dobn = 1;
		cout << "\n\n\tПередруковка:\n\n";
		for (k = 0; k < n; k++)
		{
			cout << "\t";
			for (i = 0; i < n; i++)
			{
				if ((k) && (k-2)) printf("%5i", A[k][i]);
				else {
					printf("    *");
					if (A[k][i] > 0)
					{
						poz++;
						sump += A[k][i];
					}
					else
					{
						neg++;
						dobn *= A[k][i];
					}
				}
			}
			cout << "\n";
		}

		printf("\n\n\tДодатних: %i", poz);
		printf("\n\tСума додатних: %i", sump);
		printf("\n\tВiд`ємних: %i", neg);
		printf("\n\tДобуток вiд`ємних: %i", dobn);


		cout << "\n\n\tПродовжити (y/n)? ";
		cin >> z;
	} while (z != 'n');


	cout << endl << endl << "\t";
	
	return 0;
}
=====================================================RESULT==============================================================================
Заповнення матрицi A[24][24] цiлими двозначними числами

          -39  -49  -96  -79
           92   63   14   70
           85  -49   94   41
          -32  -16  -28   67


        Передруковка:

            *    *    *    *
           92   63   14   70
            *    *    *    *
          -32  -16  -28   67


        Додатних: 3
        Сума додатних: 220
        Вiд`ємних: 5
        Добуток вiд`ємних: -710158176

        Продовжити (y/n)?
