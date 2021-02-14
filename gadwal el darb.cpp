#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	ofstream file;
	file.open ("gadwal el darb.txt");
	
	for (int x = 1 ; x < 10 ; x ++)
	{
		file << "Tabella : " << x << "\n\n";
		for (int y = 1 ; y < 10 ; y ++)
		{
			file << x << " * " << y << " = " << x*y << endl;
		}
		file << "\n";
	}
	
	file.close();
	
	ifstream filen ("gadwal el darb.txt");
	
	string temp;
	
	while ( getline(filen , temp) ) {
		cout << temp << endl;
	}
	
	return 0;
}
