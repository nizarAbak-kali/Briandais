/* 
 * File:   Noeud.h
 * Author: 3402065
 *
 * Created on 27 novembre 2014, 11:25
 */

#ifndef NOEUD_H
#define	NOEUD_H
#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct noeud {
    char cle;
    struct noeud * filsgauche;
    struct noeud * freredroit;
    
    void init_noeud(char c){
        cle = c ;
        this->filsgauche = NULL;
        this->freredroit = NULL;
    }
    
    void affiche_noeud(){
        cout<<this->cle<<endl;
        
    }

} noeud;
    


#endif	/* NOEUD_H */

