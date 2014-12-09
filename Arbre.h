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

void ajoutermot(arbre *a, string mot, int cpt) {
    noeud* noeudTmp;
    noeud* noeud_courant = *a;
    int c = 0;

    if (mot.length()==0) {
        cout << "fonction ajouter mot : pas de mot" << endl;
        return;
    }
    //if mot existe pas d'ajout 
    if (!a) {
        while (c < mot.length()) {

            // cellule a ajoute
            noeud* n = (arbre) malloc(sizeof (*n));
            n->cle = mot[c];
            n->filsgauche = NULL;
            n->freredroit = NULL;
            // si on est a la dernier lettre 1
            if (c == mot.length() - 1) {
                if (noeud_courant->estunefeuille()) {
                    
                    noeud_courant->filsgauche = n;
                    noeud_courant->lastChar = true;
                    noeud_courant = noeud_courant->filsgauche;
                } else {
                    noeud_courant->lastChar = true;
                    noeud_courant = noeud_courant->filsgauche;
                }

            } else {
                noeud_courant = n;
                noeud_courant = noeud_courant->filsgauche;

            }
            noeudTmp = noeud_courant;
            c++;
        }
    } else {
        //boucle ou je vais parcours les fils 
        while (noeud_courant && c < mot.length()) {
            //je cree une cellule au cas ou
            noeud* n = (arbre) malloc(sizeof (*n));
            n->cle = mot[c];
            n->filsgauche = NULL;
            n->freredroit = NULL;

            // si fin de mot
            if (c == mot.length() - 1) {
                if (noeud_courant->estunefeuille()) {
                    *noeud_courant = *n;
                    noeud_courant->lastChar = true;
                    noeud_courant = noeud_courant->filsgauche;
                }
                else{
                    noeud_courant->lastChar = true ;
                    noeud_courant = noeud_courant->filsgauche;
                }
            }
                // on est encore dans le mot 
            else {
                if (mot[c] == noeud_courant->cle) {
                    noeud_courant = noeud_courant->filsgauche;
                    c = c + 1;
                }
                else {


                    // on enrengistre la position precedente 
                    noeudTmp = noeud_courant;

                    // on parcours tout les frere 
                    while ((noeud_courant->freredroit) && (noeud_courant->cle = !mot.at(c))) {
                        noeud_courant = noeud_courant->freredroit;
                    }
                    // si le noeud que l'on pointe a une lettre equivalente
                    // mais pas de filsgauche on ajoute la cellule a la suite
                    if (noeud_courant->cle == mot[c]) {
                        noeud_courant->filsgauche = n;
                        noeud_courant = noeud_courant->filsgauche;
                    }                        // si le noeud que l'on pointe n'est pas la bonne lettre
                    else if (noeud_courant->cle =! mot[c]){
                        noeud_courant->freredroit = n;
                        noeud_courant = noeud_courant->freredroit;

                    }
                    // on attache la cellule avec la nouvelle cle 
                    noeud_courant->freredroit = n;

                    noeud_courant = noeud_courant->freredroit;

                }

            }
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

