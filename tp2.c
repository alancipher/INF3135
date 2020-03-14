/*#include <stdlib.h>
#include <stdio.h>
#include <math.h>


bool angle_incidence_marge_v1(float angle1, float angle2){
	bool margeValid= false ;
 double marge = fabs(angle1) - fabs(angle2);
   if (marge <= 0.250){
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

 return (angle <= 0.200 && angle1 >= -0.200);
}


bool decollage_angle_conforme_v2(float angle){

 return (angle <= 51.000 && angle1 >= 2.500);
}

bool vol_angle_conforme_v3(float angle){

return (angle <= 9.000 && angle1 >= -9.000);
}

bool atterrissage_angle_conforme_v1(float angle){
return (angle <= -0.500 && angle1 >= -29.500);

}


bool volet_ouvert_v1(float longueur){

return ( (longueur >= 0.900) && volet_longueur_max( longueur));

}

bool volet_longueur_max(float longueur){

	return (longueur<= 108.000);
}

bool volet_ouverture_marge_v3(float longGauche, float longDroite){

bool margeValid= false ;
 double marge = fabs(longGauche) - fabs(longDroite);
   if (marge <= 1.250){
   	margeValid = true;
   }
return margeValid;

}


// les fonctions manquantes a ajouter ici 


int main (int argc, char* argv;){


	return 0 ;

}


*/




