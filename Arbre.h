/* 
 * File:   Arbre.h
 * Author: 3402065
 *
 * Created on 27 novembre 2014, 11:27
 */

#ifndef ARBRE_H
#define	ARBRE_H
#include "Noeud.h"

void ajouter_1noeudfilsgauche(arbre a,char c){
    arbre new_noeud = (arbre) malloc(sizeof *new_noeud);
    
    new_noeud->init_noeud(c);
    
    a->filsgauche = new_noeud;
}

void ajouter_1noeudfreredroit(arbre a,char c){
    arbre new_noeud = (arbre) malloc(sizeof *new_noeud);
    
    new_noeud->init_noeud(c);
    
    a->freredroit = new_noeud;
}

void affiche_arbre(arbre a){
    
}
#endif	/* ARBRE_H */

