//�߱����� �����
// 1~9 ������ ������ ��;���� 3���� ���´�. ��, ���ڴ� �ߺ��Ǿ�� �ȵȴ�.
// 3���� ���ڴ� * * * �� ���·� ��µǰ� �� 3���� ���ڸ� ���ߴ� �����̴�.
// ����ڴ� �� 3���� ���ڸ� ���⶧���� ����ؼ� 3���� ���ڸ� �Է��Ѵ�.
// ���� ������� ���ڰ� 7, 3, 8 �� ���
// ����ڴ� 3���� ���ڸ� ��� �Է��Ѵ�.
// �Է�: 1, 2, 4, �� �Է�������� 1,2,4 ������� ������
// �ƹ��͵� �����Ƿ� out �� ����Ѵ�.
// �Է� : 7, 5, 9�� �Է����� ���  7�� ������� ������ �ְ� ��ġ�� �����Ƿ�
// strike�̴� 5, 9�� �����Ƿ� ����� 1strike 0 ball�� ����Ѵ�.
// �Է� 7 8 6�� �Է����� ��� 7�� ��1strike 8�� ���ڴ� ������ ��ġ�� �ٸ��Ƿ� ball �̵ȴ�.
// 1strike 1ball �� ����Ѵ�.
//�̷��� ����� �ϰ� �Է��� �����鼭 ���������� 3���� ���ڸ� �ڸ����� ��� ��ġ�ϰ�
// �Է��ϸ� ������ ����ȴ�. ���� �Է¹��� ������ 3���� �Ѱ��� 0�� ������� ������ �����Ѵ�.


#include <iostream>
#include <time.h>


using namespace std;



int main()
{
	cout << " Base_Ball_Game" << endl;

	// random number
	srand((unsigned int)time(0));

	int i1, i2, i3;
	int array[10] = {};


	//swap algorithm 
	//shuffle algorithm
	int iTemp, swap1, swap2;

	

	//1~9 randomg number
	for (int i = 0; i < 9; ++i)
	{
		array[i] = i + 1;
	}

	for (int i = 0; i < 9; ++i)
	{
		i1 = rand() % 9;
		i2 = rand() % 9;


		iTemp = array[i1];
		array[i1] = array[i2];
		array[i2] = iTemp;
	}

	int iStrike = 0;
	int iBall = 0;
	int number[3] = {};

	while (true)
	{
		cout << array[0] << "\t" << array[1] << "\t" << array[2] << "\t" << endl;

		
		cout << " Pick 3 numbers among 1 ~ 9(0 : END)  :";

		cin >> number[0] >> number[1] >> number[2];

		// exception
		// 1.wrong number
		// 2.same number
		// 3.redundancy
		if (number[0] == 0 || number[1] == 0 || number[2] == 0)
		{
			break; // 0 : end program
		}
		else if (number[0] <0 || number[0] > 9 || number[1] <0 || number[1] >9
			|| number[2] <0 || number[2] > 9)
		{
			cout << " Wrong number was typed " << endl;
			continue;
		}
		else if (number[0] == number[1] || number[1] == number[2] || number[0] == number[2])
		{
			cout << " Redundancy Error" << endl;
			continue;
		}

		iStrike = iBall = 0;

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (array[i] == number[j])
				{
					if (i == j) // ���ڰ� ������ ����� if ���� ���� �ʴ´� ����?
					{
						++iStrike;
					}
						
					else
					{
						++iBall;
					}
						


					break;
				}
				
			}
		}


		if (iStrike == 3)
		{
			cout << " Strike Out : Game End" << endl;
			break;
		}
		else if (iStrike == 0 && iBall == 0)
		{
			cout << " Out " << endl;
		}
		else
		{
			cout << iStrike << " iStrke " << iBall << "iBall" << endl;
		}






		// break for the test
		


	}


	return 0;
}