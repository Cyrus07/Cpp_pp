#include<iostream>
#include<string>

int main()
{
	using std::string;
	using std::cin;
	using std::cout;
	using std::endl;

	string str;
	int vowel, consonant, other;
	vowel = consonant = other = 0;

	cout << "Enter words (q to quit): " << endl;
	cin >> str;
	while (str != "q")
	{
		if (isalpha(str[0]))
			switch (str[0])
			{
				case 'a': case 'A':
				case 'e': case 'E':
				case 'i': case 'I':
				case 'o': case 'O':
				case 'u': case 'U': 
						vowel++; break;
				default: consonant++;
			}
		else
			other++;
		cin >> str;
	}
	cout << vowel << " words beginning with vowels" << endl
		<< consonant << " words beginning with consonants" << endl
		<< other << " others" << endl;
	
	return 0;
}
