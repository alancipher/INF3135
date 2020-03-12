#include <stdlib.h>
#include <stdio.h>
#include <math.h>


bool angle_incidence_marge_v1(float angle1, float angle2){
	bool margeValid= false ;
 double marge = fabs(angle1) - fabs(angle2);
   if (marge <= 0.25){
   	margeValid = true;
   }
return margeValid;

}


bool validation_etat_appareil_v3(EtatAppareil_t etat){

bool etatAppareil= false ;
if (etat == 0 || etat == 1|| etat == 2 || etat == 3 || etat == 4){

	etatAppareil = true;
}

return etatAppareil;

}

bool tarmac_angle_conforme_v1(float angle){



}


bool decollage_angle_conforme_v2(float angle){


}

bool vol_angle_conforme_v3(float angle){


}

bool atterrissage_angle_conforme_v1(float angle){


}


bool volet_ouvert_v1(float longueur){



}

bool volet_ouverture_marge_v3(float longGauche, float longDroite){



}


// les fonctions manquantes a ajouter ici 


int main (int argc, char* argv;){


	return 0 ;

}







