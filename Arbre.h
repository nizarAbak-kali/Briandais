/* 
 * File:   Arbre.h
 * Author: 3402065
 *
 * Created on 27 novembre 2014, 11:27
 */

#ifndef ARBRE_H
#define	ARBRE_H
#include "Noeud.h"

typedef noeud* arbre;

void ajouter_1noeudfilsgauche(noeud **a,char c){
    noeud* noeudTmp ;
    noeud* arbreTmp = *a ;
    
    noeud* elem = malloc(sizeof(*elem));
    elem->cle = c ;
    elem->filsgauche = NULL;
    elem->freredroit = NULL ;
    
    if (arbreTmp)
		do{ 
			noeudTmp = arbreTmp ;
		}
		while();
    else
		*a = elem ;
}

void ajouter_1noeudfreredroit(arbre a,char c){
    arbre new_noeud = (arbre) malloc(sizeof *new_noeud);
    
    new_noeud->init_noeud(c);
    
    a->freredroit = new_noeud;
}

void affiche_arbre_prefixe(arbre a , int profondeur){
    if(!a){
        return ;
    }
    else {
        a->affiche_noeud();
        affiche_arbre_prefixe(a->filsgauche,profondeur);
        affiche_arbre_prefixe(a->freredroit,profondeur++);
    }    
}
#endif	/* ARBRE_H */

