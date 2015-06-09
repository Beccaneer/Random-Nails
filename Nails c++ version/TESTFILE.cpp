#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    
ifstream in("colours.txt");

  if(!in) {
    cout << "Cannot open input file.\n";
    return 1;
  }

  string str;

  while(in) {
    getline(in, str, '\n');  // delim defaults to '\n'
    if(in) cout << str << endl;
  }
       cin.get();
       
       return 0;
}
