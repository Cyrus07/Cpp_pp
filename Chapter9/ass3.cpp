#include<iostream>
#include<cstring>

struct chaff
{
	char dross[20];
	int slag;
};

int main()
{
	using std::cout;
	using std::endl;

	char * buffer = new char [sizeof(chaff) * 2];
	chaff * p_chaff[2];
	p_chaff[0] = new (buffer) chaff;
	p_chaff[1] = new (buffer + sizeof(chaff)) chaff;
	strcpy(p_chaff[0]->dross, "hello!");
	p_chaff[0]->slag = 0;
	strcpy(p_chaff[1]->dross, "world");
	p_chaff[1]->slag = 1;
	cout << sizeof(p_chaff)/sizeof(p_chaff[0]) << endl;

	for (int i = 0; i < sizeof(p_chaff)/sizeof(p_chaff[0]); i++)
	{
		cout << "dross:\t" << p_chaff[i]->dross << endl
			 << "slag:\t" << p_chaff[i]->slag << endl;
	}
	delete [] buffer;
}
