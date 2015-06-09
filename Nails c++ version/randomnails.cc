#include "randomnails.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void colvec (vector <nailcolour> &colours) {
       string c;
       ifstream filestr("colours.txt");
       while (filestr){
             getline(filestr, c,'\n');
             nailcolour a;
             a.brand = c;
             getline(filestr, c,'\n');
             a.colour = c;
             colours.push_back (a);
             }
}

void techvec (int n, vector <string> &tech ){
       string t;
       if (n == 1){
          ifstream filestr ("onetech.txt");
                 while (filestr){
             getline(filestr, t,'\n');
             tech.push_back (t);
             }
          }
       if (n == 2){
          ifstream filestr ("twotech.txt");
                 while (filestr){
             getline(filestr, t,'\n');
             tech.push_back (t);
             }
          }
       if (n == 3){
          ifstream filestr ("threetech.txt");
                 while (filestr){
             getline(filestr, t,'\n');
             tech.push_back (t);
             }
          }
       if (n == 0){
          ifstream filestr ("notech.txt");
                 while (filestr){
             getline(filestr, t,'\n');
             tech.push_back (t);
             }
          }

}
             
       
       

int main(){
    
    int tech, colour, resultcol, accents, noaccents;
    nailcolour colour1, colour2, colour3;
    string resulttec;
    string accentlist[10]={"Lpinky","Lring","Lmiddle","Lpointer","Lthumb","Rthumb","Rpointer","Rmiddle","Rring","Rpinky"};
    
    srand ( time(NULL) );
    
    tech = rand() % 3;
    
    vector <string> techvector;
    techvec(tech, techvector);
    resulttec = techvector[rand() % techvector.size()];
    
    cout << "Paint " << resulttec << " nails!" << endl;
    cout << endl;
    
    if (tech == 0){
       }
    else {
         //vector nailcolour colours; // CHANGED
         vector <nailcolour> colourvector;
         colvec(colourvector); // CHANGED
         for (int i=0 ; i <= tech ; i++){
             if (i == 0){
                   colour1 = colourvector[rand() % colourvector.size()];
                   }
             if (i == 1){
                   colour2 = colourvector[rand()% colourvector.size()];
                   }
             if (i == 2){
                   colour3 = colourvector[rand () % colourvector.size()];
                   }
         }
         cout << "Use the following polishes:" << endl;
         cout << colour1.brand << "   " << colour1.colour << endl;
         cout << colour2.brand << "   " << colour2.colour << endl;
         cout << colour3.brand << "   " << colour3.colour << endl;
    }
    
    cout << endl;
    
    accents = rand() %2;
    if (accents == 0){
       cout << "No Accents!" << endl;
       }        
    else {
       noaccents = rand() % 3;  
       cout << (noaccents + 1) << " Accents!" << endl;
       for (int i = 0 ; i <= noaccents ; i++){
           accents = rand ()% 9 ;
           cout << accentlist[accents] << endl;
           }
    }
    cin.get();
}

