#include <iostream>
#include <fstream>
using namespace std;
int main()
{ fstream nameFile;
 char input[81];
nameFile.open("demofile.txt", ios::in);
 if (!nameFile)
 { cout << "File open error!" << endl; return 0; }
  nameFile.getline(input, 81); // use \n as a delimiter
 while (!nameFile.eof())
 { cout << input << endl;
 nameFile.getline(input, 81); // use \n as a delimiter }
 nameFile.close();
 return 0; 
}
}
