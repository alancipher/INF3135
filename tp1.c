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


void  testerEtatAppareuil_V1(void )
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

void testerEtatAppareuil_V2(void)
{
CU_ASSERT_FALSE(validation_etat_appareil_v2(-1));
CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_TARMAC));
CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_DECOLLAGE));
CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_VOL));
CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_ATTERRISSAGE));
CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_ETEINT));
CU_ASSERT_TRUE(validation_etat_appareil_v2(5));
}

void testerEtatAppareuil_v3(void)
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
CU_ASSERT_TRUE (tarmac_angle_conforme_v1(0.1));
CU_ASSERT_TRUE (tarmac_angle_conforme_v1(-0.1));
//
CU_ASSERT_FALSE (tarmac_angle_conforme_v1(0.20001));
CU_ASSERT_FALSE(tarmac_angle_conforme_v1(-0.20001));
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
CU_ASSERT_TRUE (tarmac_angle_conforme_v1(0.1));
CU_ASSERT_TRUE (tarmac_angle_conforme_v1(-0.1));
//
CU_ASSERT_FALSE (tarmac_angle_conforme_v1(0.20001));
CU_ASSERT_FALSE(tarmac_angle_conforme_v1(-0.20001));
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
Tests de validation de la fonction volet_ouvert_vX
*/





/*

stabilisateur_horizontal_conforme_vX
*/
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
if ((CU_add_test (pSuite, "tester angle incidence marge v1", tester_angle_incidence_marge_v1)==NULL)||
    (CU_add_test (pSuite, "tester angle incidence marge v2", tester_angle_incidence_marge_v2)==NULL)||
    (CU_add_test (pSuite, "tester angle incidence marge v3", tester_angle_incidence_marge_v3)==NULL)  )
    
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
if ((CU_add_test (pSuite, "test etat appareil v1", testerEtatAppareuil_V1)==NULL)||
    (CU_add_test(pSuite,"test etat appareil v2", testerEtatAppareuil_V2)==NULL)||
    (CU_add_test(pSuite, "test etat appareil v3", testerEtatAppareuil_v3)==NULL )  )
    
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

if ((CU_add_test (pSuite, "test angle sur tarmac v1", tester_tarmac_angle_conforme_v1)==NULL)||
    (CU_add_test(pSuite,"test angle sur tarmac v2", tester_tarmac_angle_conforme_v1)==NULL)||
    (CU_add_test(pSuite, "test angle sur tarmac v3", tester_tarmac_angle_conforme_v1)==NULL )  )


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

if ((CU_add_test (pSuite, "test angle sur decollage v1", tester_decollage_angle_conforme_v1)==NULL)||
    (CU_add_test(pSuite,"test angle sur decollage v2", tester_decollage_angle_conforme_v2)==NULL)||
    (CU_add_test(pSuite, "test angle sur decollage v3", tester_decollage_angle_conforme_v2)==NULL )  )


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
