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


	while (true)
	{
		//1~9 randomg number
		for (int i = 0; i < 9; ++i)
		{
			array[i] = i + 1;
		}


		//swap algorithm 
		//shuffle algorithm
		int iTemp, swap1, swap2;

		for (int i = 0; i < 9; ++i)
		{
			i1 = rand() % 9 ;
			i2 = rand() % 9 ;


			iTemp = array[i1];
			array[i1] = array[i2];
			array[i2] = iTemp;
		}

		// pick 3 random number among 1~9
		for (int i = 0; i < 3; ++i)
		{
			cout << array[i] << endl;
		}


		// 3 random number
		//array[0];
		//array[1];
		//array[2];



		// break for test
		break;
		


	}


	return 0;
}