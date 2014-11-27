/* 
 * File:   Noeud.h
 * Author: 3402065
 *
 * Created on 27 novembre 2014, 11:25
 */

#ifndef NOEUD_H
#define	NOEUD_H
#include <iostream>
using namespace std;

struct noeud {
    char cle;
    struct noeud * filsgauche;
    struct noeud * freredroit;
    
    void init_noeud(char c){
        this->cle = c ;
        this->filsgauche = NULL;
        this->freredroit = NULL;
    }
    
    void affiche_noeud(){
        cout<<this->cle<<endl;
    }


};
    typedef struct noeud* arbre ;


#endif	/* NOEUD_H */

