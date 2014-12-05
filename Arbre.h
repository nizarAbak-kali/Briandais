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

void ajouter_1noeudfilsgauche(noeud **a, char c) {
    noeud* noeudTmp;
    noeud* arbreTmp = *a;

    noeud* elem = (arbre) malloc(sizeof (*elem));
    elem->cle = c;
    elem->filsgauche = NULL;
    elem->freredroit = NULL;

    if (arbreTmp)
        do {
            noeudTmp = arbreTmp;
            if ((int) c > (int) arbreTmp->cle) {

                arbreTmp = arbreTmp->freredroit;
                if (!arbreTmp) noeudTmp->freredroit = elem;
            } else {

                arbreTmp = arbreTmp->filsgauche;
                if (!arbreTmp) noeudTmp->filsgauche = elem;
            }
        } while (arbreTmp);
    else
        *a = elem;
}

void ajoutermot(arbre *a, string mot, int cpt) {
    noeud* noeudTmp;
    noeud* noeud_courant = *a;

    if (TEST)
        cout << "on ajoute : " << elem->cle << endl ;
           

    //on boucle sur chaque lettre du mot . 
    for (int c = c; c < mot.length(); c++) {
        noeud* n = (arbre) malloc(sizeof (*n));
        n->cle = mot.at(c);
        n->filsgauche = NULL;
        n->freredroit = NULL;
        
        //boucle ou je vais parcours les fils 
        while(noeud_courant){
          if(mot.at(c) == ){}  
        }

    }
}

void affiche_arbre_prefixe(arbre a, int profondeur) {
    if (!a) return;
    else {
        a->affiche_noeud();
        affiche_arbre_prefixe(a->filsgauche, profondeur);
        affiche_arbre_prefixe(a->freredroit, profondeur++);
    }
}

void printTree(noeud *tree) {
    if (!tree) return;

    if (tree->filsgauche) printTree(tree->filsgauche);

    printf("Cle = %c\n", tree->cle);

    if (tree->freredroit) printTree(tree->freredroit);
}


#endif	/* ARBRE_H */

