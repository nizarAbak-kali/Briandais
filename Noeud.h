/* 
 * File:   Noeud.h
 * Author: 3402065
 *
 * Created on 27 novembre 2014, 11:25
 */

#ifndef NOEUD_H
#define	NOEUD_H

#define TEST 1
#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct noeud {
    char cle;
    bool lastChar = false ;
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
    
    bool estunefeuille(){
        if(this->filsgauche == NULL && this->freredroit == NULL)
            return true ;
        return false ;
             
    }
} noeud;
    


#endif	/* NOEUD_H */

