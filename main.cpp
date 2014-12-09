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
    arbre a = NULL ;
    
    //test de  l'arbre
    string s = "bidulepourtester";
    
   
    
   for(int i = 0 ; i<s.length() ; i++){
       cout << s[i]<<endl;
    }
    cout<< endl ;
    ajoutermot(&a ,s,0);
    
    puts("------------------------------- affichage infixe");
    printTree(*a);
    puts("------------------------------- affichage prefixe");
    affiche_arbre_prefixe(*a,0);
        
  
    return 0;
}

