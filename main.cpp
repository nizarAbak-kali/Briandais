/* 
 * File:   main.cpp
 * Author: 3402065
 *
 * Created on 29 octobre 2014, 16:12
 */

#include <cstdlib>
#include "Arbre.h"
#include <string>
using namespace std;

/*
 * 
 */


int main(int argc, char** argv) {
    arbre a = NULL ;
    //test de  l'arbre
    char c = 'c';
    string s = "bidulepourtester";
    
    if(!a)
      a = (arbre)malloc(sizeof *a);
    
    for(int i = 0 ; i<s.size() ; i++)
        ajouter_1noeudfilsgauche(a,s.at(i));
    
        
    
    
    
    return 0;
}

