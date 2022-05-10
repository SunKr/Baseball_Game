//야구게임 만들기
// 1~9 사이의 랜덤한 ㅣ;숫자 3개를 얻어온다. 단, 숫자는 중복되어서는 안된다.
// 3개의 숫자는 * * * 의 형태로 출력되고 이 3개의 숫자를 맞추는 게임이다.
// 사용자는 이 3개의 숫자를 맞출때까지 계쏙해서 3개씩 숫자를 입력한다.
// 만약 맞춰야할 숫자가 7, 3, 8 일 경우
// 사용자는 3개의 숫자를 계속 입력한다.
// 입력: 1, 2, 4, 를 입력했을경우 1,2,4 맞춰야할 숫자중
// 아무것도 없으므로 out 을 출력한다.
// 입력 : 7, 5, 9를 입력했을 경우  7은 맞춰야할 숫자중 있고 위치도 같으므로
// strike이다 5, 9는 없으므루 출력은 1strike 0 ball을 출력한다.
// 입력 7 8 6을 입력했을 경우 7은 ㅣ1strike 8은 숫자는 있지만 위치가 다르므로 ball 이된다.
// 1strike 1ball 을 출력한다.
//이렇게 출력을 하고 입력을 받으면서 최종식으로 3개의 숫자를 자리까지 모두 일치하게
// 입력하면 게임이 종료된다. 만약 입력받은 숫자중 3개중 한개라도 0이 있을경우 게임을 종료한다.


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
					if (i == j) // 숫자가 같은데 출력이 if 문을 읽지 않는다 뭘까?
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