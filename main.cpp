/* 
 * File:   main.cpp
 * Author: 3402065
 *
 * Created on 29 octobre 2014, 16:12
 */

#include <cstdlib>
#include "Arbre.h"
#include <string>
#include <algorithm>
using namespace std;

/*
 * 
 */



int main(int argc, char** argv) {
    arbre a ,b,c ;
    a = b = c = NULL ;
    //test de  l'arbre
    char lettre = 'c';
    string s = "bidulepourtester";
    
    cout << "teste test : "+s << endl ;
    
    a = (arbre)malloc(sizeof *a);
    
    for(int i = 0 ; i<s.size() ; i++){
		cout<<s.at(i)<<endl;
    }
    affiche_arbre_prefixe(a,0);
        
  
    return 0;
}

