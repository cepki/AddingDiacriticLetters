#include <iostream>
#include <locale>

using namespace std;

int main()
{
	locale::global(std::locale(""));
	cout << "kava je bila lo�a" << std::endl;

	return 0;
}
