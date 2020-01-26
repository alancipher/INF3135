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
CU_ASSERT_TRUE(angle_incidence_marge_v1(0.2,-0.2));// TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v1(0.3, -0.3));// FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v1(2.5, 51.0));//, TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v1(2.049, 51.1));//, FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v1(9.0,-9.0));//, TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v1(8.99, -9.1));//, FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v1(-0.5,-29.5));//,TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v1(-0.4, -29.6)); //, FALSE);
}


void tester_angle_incidence_marge_v2(void)
{
CU_ASSERT_TRUE(angle_incidence_marge_v2(0.2,-0.2));// TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v2(0.3, -0.3));// FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v2(2.5, 51.0));//, TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v2(2.049, 51.1));//, FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v2(9.0,-9.0));//, TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v2(8.99, -9.1));//, FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v2(-0.5,-29.5));//,TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v2(-0.4, -29.6)); //, FALSE);
}






void tester_angle_incidence_marge_v3(void)
{
CU_ASSERT_TRUE(angle_incidence_marge_v3(0.2,-0.2));// TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v3(0.3, -0.3));// FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v3(2.5, 51.0));//, TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v3(2.049, 51.1));//, FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v3(9.0,-9.0));//, TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v3(8.99, -9.1));//, FALSE);
CU_ASSERT_TRUE(angle_incidence_marge_v3(-0.5,-29.5));//,TRUE);
CU_ASSERT_FALSE(angle_incidence_marge_v3(-0.4, -29.6)); //, FALSE);
}

/*
Tests pour validations  des variantes de la fonction  
tarmac_angle_conforme_vX
*/


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
if(pSuite== NULL)
{
CU_cleanup_registry();
return CU_get_error();
}
if ((CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v1)== NULL)||
	(CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v2)== NULL)||
	 (CU_add_test(pSuite,"test_angle_incidence", tester_angle_incidence_marge_v3)== NULL))            
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
