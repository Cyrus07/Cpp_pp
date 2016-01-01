#include<iostream>
#include<array>

int main()
{
	int const N = 3;
	
	using std::array;
	using std::cout;
	using std::cin;
	using std::endl;

	array<double, N> scores;
	cout << "Please input score of 40 meters running: " << endl;
	cin >> scores[0] >> scores[1] >> scores[2];
	cout << "the scores of " << N << " time running: " << endl
		 << scores[0] << ", " << scores[1] << ", " << scores[2]
		 << endl;
	cout << "the average score is " << (scores[0]+scores[1]+scores[2])/3
		 << endl;
}
