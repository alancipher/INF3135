#include <stdio.h>
//#include <stdbool.h>
#include "flop.h"
#include "Basic.h"


/*
tests pour les variantes de la fonction validation_etat_appareil_vX
*/

/*
fonction  d'initialisation de la suite de test 
*/
int init_suite(void) { return 0; }


/*
fonction de nettoyage de la suite pour fermer le fichier temporaire utilise par les tests
*/
int clean_suite(void) { return 0; }

/*
***********TESTS DE  VALIDATION DES VERSIONS DE LA FONCTION VALIODATION ETAT APPAREIL*********
*/


void  tester_validation_etat_appareil_v1(void )
{
// il s'agit ici de tester diffents cas possibles et penser au cas limites 
CU_ASSERT_FALSE(validation_etat_appareil_v1(-1))
CU_ASSERT_TRUE (validation_etat_appareil_v1(ETAT_TARMAC));
CU_ASSERT_TRUE (validation_etat_appareil_v1(ETAT_DECOLLAGE));
CU_ASSERT_TRUE(validation_etat_appareil_v1(ETAT_VOL));
CU_ASSERT_TRUE(validation_etat_appareil_v1(ETAT_ATTERRISSAGE));
CU_ASSERT_TRUE(validation_etat_appareil_v1(ETAT_ETEINT));
CU_ASSERT_FALSE(validation_etat_appareil_v1(5));
}

void tester_validation_etat_appareil_v2(void)
{
CU_ASSERT_FALSE(validation_etat_appareil_v2(-1));
CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_TARMAC));
CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_DECOLLAGE));
CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_VOL));
CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_ATTERRISSAGE));
CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_ETEINT));
CU_ASSERT_TRUE(validation_etat_appareil_v2(5));
}

void tester_validation_etat_appareil_v3(void)
{
CU_ASSERT_TRUE(validation_etat_appareil_v3(ETAT_TARMAC));
CU_ASSERT_TRUE(validation_etat_appareil_v3(ETAT_DECOLLAGE));
CU_ASSERT_TRUE(validation_etat_appareil_v3(ETAT_VOL));
CU_ASSERT_TRUE(validation_etat_appareil_v3(ETAT_ATTERRISSAGE));
CU_ASSERT_TRUE(validation_etat_appareil_v3(ETAT_ETEINT));
CU_ASSERT_FALSE(validation_etat_appareil_v3(-1));
CU_ASSERT_FALSE(validation_etat_appareil_v3(5));
}



/*
Tests  pour  validation des  variantes de la fonction 
 angle_incidence_marge_vX
*/
void tester_angle_incidence_marge_v1(void)
{
CU_ASSERT_FALSE(angle_incidence_marge_v1(0.2,-0.2));// TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v1(0.3, -0.2));// FALSE);
CU_ASSERT_FALSE(angle_incidence_marge_v1(2.5, 6.0));//, TRUE);

CU_ASSERT_TRUE(angle_incidence_marge_v1(51.1, 51.1));//, FALSE);
CU_ASSERT_FALSE(angle_incidence_marge_v1(5.3,-9.0));//, TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v1(-29.5, -26.1));//, FALSE);FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v1(-29.5, -29.25));//, FALSE);FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v1(29.5, 29.25));//, FALSE);FALSE);
CU_ASSERT_FALSE(angle_incidence_marge_v1(5.3,9.5));//,TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v1(29.5, 26.1)); //, FALSE);
//*/ 
}


void tester_angle_incidence_marge_v2(void)
{
CU_ASSERT_FALSE(angle_incidence_marge_v2(0.2,-0.2));// TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v2(0.3, -0.2));// FALSE);
CU_ASSERT_FALSE(angle_incidence_marge_v2(2.5, 6.0));//, TRUE);

CU_ASSERT_TRUE(angle_incidence_marge_v2(51.1, 51.1));//, FALSE);
CU_ASSERT_FALSE(angle_incidence_marge_v2(5.3,-9.0));//, TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v2(-29.5, -26.1));//, FALSE);FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v2(-29.5, -29.25));//, FALSE);FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v2(29.5, 29.25));//, FALSE);FALSE);
CU_ASSERT_FALSE(angle_incidence_marge_v2(5.3,9.5));//,TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v2(29.5, 26.1)); //, FALSE);
//*/ 
}






void tester_angle_incidence_marge_v3(void)
{
CU_ASSERT_FALSE(angle_incidence_marge_v3(0.2,-0.2));// TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v3(0.3, -0.2));// FALSE);
CU_ASSERT_FALSE(angle_incidence_marge_v3(2.5, 6.0));//, TRUE);

CU_ASSERT_TRUE(angle_incidence_marge_v3(51.1, 51.1));//, FALSE);
CU_ASSERT_FALSE(angle_incidence_marge_v3(5.3,-9.0));//, TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v3(-29.5, -26.1));//, FALSE);FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v3(-29.5, -29.25));//, FALSE);FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v3(29.5, 29.25));//, FALSE);FALSE);
CU_ASSERT_FALSE(angle_incidence_marge_v3(5.3,9.5));//,TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v3(29.5, 26.1)); //, FALSE);
//*/ 
//*/ 
}



/*
Tests pour validations  des variantes de la fonction  
tarmac_angle_conforme_vX
*/
void tester_tarmac_angle_conforme_v1 (void){
CU_ASSERT_TRUE (tarmac_angle_conforme_v1(0.2));
CU_ASSERT_TRUE (tarmac_angle_conforme_v1(-0.2));

CU_ASSERT_TRUE (tarmac_angle_conforme_v1(0));
CU_ASSERT_FALSE (tarmac_angle_conforme_v1(0.3));
CU_ASSERT_FALSE (tarmac_angle_conforme_v1(-0.3));


//
CU_ASSERT_TRUE (tarmac_angle_conforme_v1(0.1));
CU_ASSERT_TRUE (tarmac_angle_conforme_v1(-0.1));
//
CU_ASSERT_FALSE (tarmac_angle_conforme_v1(0.20001));
CU_ASSERT_FALSE(tarmac_angle_conforme_v1(-0.20001));
//
//
}


void tester_tarmac_angle_conforme_v2 (void){
CU_ASSERT_TRUE (tarmac_angle_conforme_v2(0.2));
CU_ASSERT_TRUE (tarmac_angle_conforme_v2(-0.2));
CU_ASSERT_TRUE (tarmac_angle_conforme_v2(0));
CU_ASSERT_FALSE (tarmac_angle_conforme_v2(0.3));
CU_ASSERT_FALSE (tarmac_angle_conforme_v2(-0.3));


//
CU_ASSERT_TRUE (tarmac_angle_conforme_v2(0.1));
CU_ASSERT_TRUE (tarmac_angle_conforme_v2(-0.1));
//
CU_ASSERT_FALSE (tarmac_angle_conforme_v2(0.20001));
CU_ASSERT_FALSE(tarmac_angle_conforme_v2(-0.20001));
//
//
}


void tester_tarmac_angle_conforme_v3 (void){
CU_ASSERT_TRUE (tarmac_angle_conforme_v3(0.2));
CU_ASSERT_TRUE (tarmac_angle_conforme_v3(-0.2));
CU_ASSERT_TRUE (tarmac_angle_conforme_v3(0));
CU_ASSERT_FALSE (tarmac_angle_conforme_v3(0.3));
CU_ASSERT_FALSE (tarmac_angle_conforme_v3(-0.3));


//
CU_ASSERT_TRUE (tarmac_angle_conforme_v3(0.1));
CU_ASSERT_TRUE (tarmac_angle_conforme_v3(-0.1));
//
CU_ASSERT_FALSE (tarmac_angle_conforme_v3(0.20001));
CU_ASSERT_FALSE(tarmac_angle_conforme_v3(-0.20001));
//
//
}


/*

 test de validation des fonctions decollage_angle_conforme_v1
 */

void tester_decollage_angle_conforme_v1(void){
CU_ASSERT_TRUE (decollage_angle_conforme_v1(2.5));
CU_ASSERT_TRUE (decollage_angle_conforme_v1(51.0));
CU_ASSERT_TRUE (decollage_angle_conforme_v1(25));
CU_ASSERT_FALSE (decollage_angle_conforme_v1(52));
CU_ASSERT_FALSE (decollage_angle_conforme_v1(2));


//
CU_ASSERT_TRUE (decollage_angle_conforme_v1(50.5));
CU_ASSERT_TRUE (decollage_angle_conforme_v1(3));
//
CU_ASSERT_FALSE (decollage_angle_conforme_v1(2.49));
CU_ASSERT_FALSE(decollage_angle_conforme_v1(51.0001));


}



void tester_decollage_angle_conforme_v2(void){
CU_ASSERT_TRUE (decollage_angle_conforme_v2(2.5));
CU_ASSERT_TRUE (decollage_angle_conforme_v2(51.0));
CU_ASSERT_TRUE (decollage_angle_conforme_v2(25));
CU_ASSERT_FALSE (decollage_angle_conforme_v2(52));
CU_ASSERT_FALSE (decollage_angle_conforme_v2(2));


//
CU_ASSERT_TRUE (decollage_angle_conforme_v2(50.5));
CU_ASSERT_TRUE (decollage_angle_conforme_v2(3));
//
CU_ASSERT_FALSE (decollage_angle_conforme_v2(2.49));
CU_ASSERT_FALSE(decollage_angle_conforme_v2(51.0001));


}

void tester_decollage_angle_conforme_v3(void){
CU_ASSERT_TRUE (decollage_angle_conforme_v3(2.5));
CU_ASSERT_TRUE (decollage_angle_conforme_v3(51.0));
CU_ASSERT_TRUE (decollage_angle_conforme_v3(25));
CU_ASSERT_FALSE (decollage_angle_conforme_v3(52));
CU_ASSERT_FALSE (decollage_angle_conforme_v3(2));


//
CU_ASSERT_TRUE (decollage_angle_conforme_v3(50.5));
CU_ASSERT_TRUE (decollage_angle_conforme_v3(3));
//
CU_ASSERT_FALSE (decollage_angle_conforme_v3(2.49));
CU_ASSERT_FALSE(decollage_angle_conforme_v3(51.0001));


}


/*

tests de validation de la fonction vol_angle_conformev1

*/
void tester_vol_angle_conforme_v1(void){

CU_ASSERT_TRUE (vol_angle_conforme_v1(9.0));
CU_ASSERT_TRUE (vol_angle_conforme_v1(-9.0));
CU_ASSERT_TRUE (vol_angle_conforme_v1(0));
CU_ASSERT_FALSE (vol_angle_conforme_v1(10));
CU_ASSERT_FALSE (vol_angle_conforme_v1(-10));


//
CU_ASSERT_TRUE (vol_angle_conforme_v1(8.5));
CU_ASSERT_TRUE (vol_angle_conforme_v1(-8.5));
//
CU_ASSERT_FALSE (vol_angle_conforme_v1(-9.001));
CU_ASSERT_FALSE(vol_angle_conforme_v1(9.0001));



}


void tester_vol_angle_conforme_v2(void){

CU_ASSERT_TRUE (vol_angle_conforme_v2(9.0));
CU_ASSERT_TRUE (vol_angle_conforme_v2(-9.0));
CU_ASSERT_TRUE (vol_angle_conforme_v2(0));
CU_ASSERT_FALSE (vol_angle_conforme_v2(10));
CU_ASSERT_FALSE (vol_angle_conforme_v2(-10));


//
CU_ASSERT_TRUE (vol_angle_conforme_v2(8.5));
CU_ASSERT_TRUE (vol_angle_conforme_v2(-8.5));
//
CU_ASSERT_FALSE (vol_angle_conforme_v2(-9.001));
CU_ASSERT_FALSE(vol_angle_conforme_v2(9.0001));



}


void tester_vol_angle_conforme_v3(void){

CU_ASSERT_TRUE (vol_angle_conforme_v3(9.0));
CU_ASSERT_TRUE (vol_angle_conforme_v3(-9.0));
CU_ASSERT_TRUE (vol_angle_conforme_v3(0));
CU_ASSERT_FALSE (vol_angle_conforme_v3(10));
CU_ASSERT_FALSE (vol_angle_conforme_v3(-10));


//
CU_ASSERT_TRUE (vol_angle_conforme_v3(8.5));
CU_ASSERT_TRUE (vol_angle_conforme_v3(-8.5));
//
CU_ASSERT_FALSE (vol_angle_conforme_v3(-9.001));
CU_ASSERT_FALSE(vol_angle_conforme_v3(9.0001));



}




/*

tests de validation de la fonction atterrissage_angle_conformev1

*/
void tester_atterrissage_angle_conforme_v1(void){

CU_ASSERT_TRUE (atterrissage_angle_conforme_v1(-0.5));
CU_ASSERT_TRUE (atterrissage_angle_conforme_v1(-29.5));
CU_ASSERT_TRUE (atterrissage_angle_conforme_v1(-10));
CU_ASSERT_FALSE (atterrissage_angle_conforme_v1(0));
CU_ASSERT_FALSE (atterrissage_angle_conforme_v1(-30));


//
CU_ASSERT_TRUE (atterrissage_angle_conforme_v1(-1));
CU_ASSERT_TRUE (atterrissage_angle_conforme_v1(-28));
//
CU_ASSERT_FALSE (atterrissage_angle_conforme_v1(-0.49));
CU_ASSERT_FALSE(atterrissage_angle_conforme_v1(-29.5001));

}



void tester_atterrissage_angle_conforme_v2(void){

CU_ASSERT_TRUE (atterrissage_angle_conforme_v2(-0.5));
CU_ASSERT_TRUE (atterrissage_angle_conforme_v2(-29.5));
CU_ASSERT_TRUE (atterrissage_angle_conforme_v2(-10));
CU_ASSERT_FALSE (atterrissage_angle_conforme_v2(0));
CU_ASSERT_FALSE (atterrissage_angle_conforme_v2(-30));


//
CU_ASSERT_TRUE (atterrissage_angle_conforme_v2(-1));
CU_ASSERT_TRUE (atterrissage_angle_conforme_v2(-28));
//
CU_ASSERT_FALSE (atterrissage_angle_conforme_v2(-0.49));
CU_ASSERT_FALSE(atterrissage_angle_conforme_v2(-29.5001));

}



void tester_atterrissage_angle_conforme_v3(void){

CU_ASSERT_TRUE (atterrissage_angle_conforme_v3(-0.5));
CU_ASSERT_TRUE (atterrissage_angle_conforme_v3(-29.5));
CU_ASSERT_TRUE (atterrissage_angle_conforme_v3(-10));
CU_ASSERT_FALSE (atterrissage_angle_conforme_v3(0));
CU_ASSERT_FALSE (atterrissage_angle_conforme_v3(-30));


//
CU_ASSERT_TRUE (atterrissage_angle_conforme_v3(-1));
CU_ASSERT_TRUE (atterrissage_angle_conforme_v3(-28));
//
CU_ASSERT_FALSE (atterrissage_angle_conforme_v3(-0.49));
CU_ASSERT_FALSE(atterrissage_angle_conforme_v3(-29.5001));

}





/*
Tests de validation de la fonction volet_ouvert_vX
*/


  void tester_volet_ouvert_v1 (void){

CU_ASSERT_TRUE (volet_ouvert_v1(0.9));
CU_ASSERT_FALSE (volet_ouvert_v1(0.899999));
CU_ASSERT_TRUE (volet_ouvert_v1(0.91));
CU_ASSERT_TRUE (volet_ouvert_v1(2.0));
CU_ASSERT_FALSE(volet_ouvert_v1(0.02));

  }


  void tester_volet_ouvert_v2 (void){

CU_ASSERT_TRUE (volet_ouvert_v2(0.9));
CU_ASSERT_FALSE (volet_ouvert_v2(0.899999));
CU_ASSERT_TRUE (volet_ouvert_v2(0.91));
CU_ASSERT_TRUE (volet_ouvert_v2(2.0));
CU_ASSERT_FALSE (volet_ouvert_v2(0.02));

  }


  void tester_volet_ouvert_v3 (void){

CU_ASSERT_TRUE (volet_ouvert_v3(0.9));
CU_ASSERT_FALSE (volet_ouvert_v3(0.899999));
CU_ASSERT_TRUE (volet_ouvert_v3(0.91));
CU_ASSERT_TRUE (volet_ouvert_v3(2.0));
CU_ASSERT_FALSE (volet_ouvert_v3(0.02));

  }

/*

test de validation de la fonction volets ouverture marge 

*/
  void tester_volet_ouverture_marge_v1(void)
  {
  CU_ASSERT_TRUE(volet_ouverture_marge_v1(0.9, 0.9));
  CU_ASSERT_TRUE(volet_ouverture_marge_v1(0.9, 0.14));
  CU_ASSERT_TRUE(volet_ouverture_marge_v1(0.14, 0.9 ));
  CU_ASSERT_FALSE(volet_ouverture_marge_v1(0.9, 2.0));
  CU_ASSERT_FALSE(volet_ouverture_marge_v1(2.0, 0.9));
  CU_ASSERT_TRUE(volet_ouverture_marge_v1(2.5, 2.0));
  CU_ASSERT_TRUE(volet_ouverture_marge_v1(2.0, 2.5));
  }



  void tester_volet_ouverture_marge_v2(void)
  {
  CU_ASSERT_TRUE(volet_ouverture_marge_v2(0.9, 0.9));
  CU_ASSERT_TRUE(volet_ouverture_marge_v2(0.9, 0.14));
  CU_ASSERT_TRUE(volet_ouverture_marge_v2(0.14, 0.9 ));
  CU_ASSERT_FALSE(volet_ouverture_marge_v2(0.9, 2.0));
  CU_ASSERT_FALSE(volet_ouverture_marge_v2(2.0, 0.9));
  CU_ASSERT_TRUE(volet_ouverture_marge_v2(2.5, 2.0));
  CU_ASSERT_TRUE(volet_ouverture_marge_v2(2.0, 2.5));
  }


  void tester_volet_ouverture_marge_v3(void)
  {
  CU_ASSERT_TRUE(volet_ouverture_marge_v3(0.9, 0.9));
  CU_ASSERT_TRUE(volet_ouverture_marge_v3(0.9, 0.14));
  CU_ASSERT_TRUE(volet_ouverture_marge_v3(0.14, 0.9 ));
  CU_ASSERT_FALSE(volet_ouverture_marge_v3(0.9, 2.0));
  CU_ASSERT_FALSE(volet_ouverture_marge_v3(2.0, 0.9));
  CU_ASSERT_TRUE(volet_ouverture_marge_v3(2.5, 2.0));
  CU_ASSERT_TRUE(volet_ouverture_marge_v3(2.0, 2.5));
  }



/*

test de validation de la foncion stabilisateur_horizontal_conforme_vX

*/

  void tester_stabilisateur_horizontal_conforme_v1(void){


CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(-1.9));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(1.9));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(-1));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(1));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(0));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(1.9001));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(-1.9001));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(2));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(-3));



  }



  void tester_stabilisateur_horizontal_conforme_v2(void){


CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(-1.9));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(1.9));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(-1));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(1));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(0));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v2(1.9001));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v2(-1.9001));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v2(2));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v2(-3));



  }

  void tester_stabilisateur_horizontal_conforme_v3(void){


CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v3(-1.9));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v3(1.9));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v3(-1));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v3(1));
CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v3(0));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(1.9001));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(-1.9001));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(2));
CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(-3));



  }







  // DEBUT DE LA METHOIDE MAIN DU TEST 
int main (void)
{

CU_pSuite pSuite = NULL;

if (CU_initialize_registry() != CUE_SUCCESS)
{
return CU_get_error();
}

pSuite = CU_add_suite("tp1_suite_de test" , init_suite, clean_suite);



// suite de tests pour etats appareil

if (pSuite == NULL)

{

CU_cleanup_registry();
return CU_get_error();
}
if ((CU_add_test (pSuite, "tester_angle_incidence_marge_v1", tester_angle_incidence_marge_v1)==NULL)||
    (CU_add_test (pSuite, "tester_angle_incidence_marge_v2", tester_angle_incidence_marge_v2)==NULL)||
    (CU_add_test (pSuite, "tester_angle_incidence_marge_v3", tester_angle_incidence_marge_v3)==NULL)  )
    
{
CU_cleanup_registry();
return CU_get_error();

}

 // suite de test pour validation de la marge angle d'incidence 


if (pSuite == NULL)

{

CU_cleanup_registry();
return CU_get_error();
}
if ((CU_add_test (pSuite, "tester_validation_etat_appareil_v1", tester_validation_etat_appareil_v1)==NULL)||
    (CU_add_test(pSuite,"tester_validation_etat_appareil_v2", tester_validation_etat_appareil_v2)==NULL)||
    (CU_add_test(pSuite, "tester_validation_etat_appareil_v3", tester_validation_etat_appareil_v3)==NULL )  )
    
{
CU_cleanup_registry();
return CU_get_error();

}










  // suite de test pour angle tarmac 
if(pSuite== NULL)
{
CU_cleanup_registry();
return CU_get_error();
}

if ((CU_add_test (pSuite, "tester_tarmac_angle_conforme_v1", tester_tarmac_angle_conforme_v1)==NULL)||
    (CU_add_test(pSuite,"tester_tarmac_angle_conforme_v2", tester_tarmac_angle_conforme_v2)==NULL)||
    (CU_add_test(pSuite, "tester_tarmac_angle_conforme_v3", tester_tarmac_angle_conforme_v3)==NULL )  )


/*if ((CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v1)== NULL)||
	(CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v2)== NULL)||
	 (CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v3)== NULL))            
*/

{
CU_cleanup_registry();
return CU_get_error();

}



 // suite de test pour angle conforme au decollage  
if(pSuite== NULL)
{
CU_cleanup_registry();
return CU_get_error();
}

if ((CU_add_test (pSuite, "tester_decollage_angle_conforme_v1", tester_decollage_angle_conforme_v1)==NULL)||
    (CU_add_test(pSuite,"tester_decollage_angle_conforme_v2", tester_decollage_angle_conforme_v2)==NULL)||
    (CU_add_test(pSuite, "tester_decollage_angle_conforme_v3", tester_decollage_angle_conforme_v3)==NULL )  )


/*if ((CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v1)== NULL)||
	(CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v2)== NULL)||
	 (CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v3)== NULL))            
*/

{
CU_cleanup_registry();
return CU_get_error();

}

// SUITE DE TESTS POUR ANGLE CONFORME VOL


if(pSuite== NULL)
{
CU_cleanup_registry();
return CU_get_error();
}

if ((CU_add_test (pSuite, "tester_vol_angle_conforme_v1", tester_vol_angle_conforme_v1)==NULL)||
    (CU_add_test (pSuite, "tester_vol_angle_conforme_v2", tester_vol_angle_conforme_v2)==NULL)||
    (CU_add_test (pSuite, "tester_vol_angle_conforme_v3", tester_vol_angle_conforme_v3)==NULL)  )


/*if ((CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v1)== NULL)||
	(CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v2)== NULL)||
	 (CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v3)== NULL))            
*/

{
CU_cleanup_registry();
return CU_get_error();

}

// SUITE DE TEST POUR ANGLE ATTERRISSAGE 


if(pSuite== NULL)
{
CU_cleanup_registry();
return CU_get_error();
}

if ((CU_add_test (pSuite, "tester_atterrissage_angle_conforme_v1", tester_atterrissage_angle_conforme_v1)==NULL)||
    (CU_add_test (pSuite, "tester_atterrissage_angle_conforme_v2", tester_atterrissage_angle_conforme_v2)==NULL)||
    (CU_add_test (pSuite, "tester_atterrissage_angle_conforme_v3", tester_atterrissage_angle_conforme_v3)==NULL)  )


/*if ((CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v1)== NULL)||
	(CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v2)== NULL)||
	 (CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v3)== NULL))            
*/

{
CU_cleanup_registry();
return CU_get_error();

}


 // SUITE DE  TESTS POUR VOLETS ANGLES OUVERTS

if(pSuite== NULL)
{
CU_cleanup_registry();
return CU_get_error();
}

if ((CU_add_test (pSuite, "tester_volet_ouvert_v1", tester_volet_ouvert_v1)==NULL)||
    (CU_add_test (pSuite, "tester_volet_ouvert_v2", tester_volet_ouvert_v2)==NULL)||
    (CU_add_test (pSuite, "tester_volet_ouvert_v3", tester_volet_ouvert_v3)==NULL)  )


/*if ((CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v1)== NULL)||
	(CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v2)== NULL)||
	 (CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v3)== NULL))            
*/

{
CU_cleanup_registry();
return CU_get_error();

}



// SUITE DE  TESTS POUR VOLETS OUVERTURE MARGE 

if(pSuite== NULL)
{
CU_cleanup_registry();
return CU_get_error();
}

if ((CU_add_test (pSuite, "tester_volet_ouverture_marge_v1", tester_volet_ouverture_marge_v1)==NULL)||
    (CU_add_test (pSuite, "tester_volet_ouverture_marge_v2", tester_volet_ouverture_marge_v2)==NULL)||
    (CU_add_test (pSuite, "tester_volet_ouverture_marge_v3", tester_volet_ouverture_marge_v3)==NULL)  )


/*if ((CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v1)== NULL)||
	(CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v2)== NULL)||
	 (CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v3)== NULL))            
*/

{
CU_cleanup_registry();
return CU_get_error();

}


// SUITE DE TEST POUR stabilisateur_horizontal_conforme_v1

if(pSuite== NULL)
{
CU_cleanup_registry();
return CU_get_error();
}

if ((CU_add_test (pSuite, "tester_stabilisateur_horizontal_conforme_v1", tester_stabilisateur_horizontal_conforme_v1)==NULL)||
    (CU_add_test (pSuite, "tester_stabilisateur_horizontal_conforme_v2", tester_stabilisateur_horizontal_conforme_v2)==NULL)||
    (CU_add_test (pSuite, "tester_stabilisateur_horizontal_conforme_v3", tester_stabilisateur_horizontal_conforme_v3)==NULL)  )


/*if ((CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v1)== NULL)||
	(CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v2)== NULL)||
	 (CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v3)== NULL))            
*/

{
CU_cleanup_registry();
return CU_get_error();

}






CU_basic_set_mode (CU_BRM_VERBOSE);
CU_basic_run_tests();
printf("\n");
CU_basic_show_failures(CU_get_failure_list());
printf("\n\n");
CU_cleanup_registry();
return CU_get_error();

//return 0;
}
