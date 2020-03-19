#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include "flop.h"
#include "Basic.h"
#define DELIMS " "


/*bool angle_incidence_marge_v1(float angle1, float angle2){
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

 return (angle <= 0.200 && angle >= -0.200);
}


bool decollage_angle_conforme_v2(float angle){

 return (angle <= 51.000 && angle >= 2.500);
}

bool vol_angle_conforme_v3(float angle){

return (angle <= 9.000 && angle >= -9.000);
}

bool atterrissage_angle_conforme_v1(float angle){
return (angle <= -0.500 && angle >= -29.500);

}


bool volet_ouvert_v2(float longueur){

return ( (longueur >= 0.900) && (longueur<= 108.000));

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
bool stabilisateur_horizontal_conforme_v3(float angle){

bool conforme = false;
if (angle < -1.900 ||  angle > 1.900){
	conforme = true; 

}
 
 return conforme;


}

bool stabilisateur_horizontal_marge_v3(float gauche, float droite){

bool margeValid= false ;
 double marge = fabs(gauche) - fabs(droite);
   if (marge <= 0.300){
   	margeValid = true;
   }
return margeValid;


} 


char * lireEntree (const char* entre){

char ligne [128];

fgets (ligne, 128, entre);

return ligne;


}


void traiterLigne (char * ligne){
  char *pc, *ps;

  printf("premiere ligne \n");
  pc = strtok(ligne, DELIMS);
  while (pc != NULL){
  	printf("<%s>\n", pc);

  	pc = strtok(NULL, DELIMS);
  }

}


int main (int argc, char* argv[];){
  char * ligne = lireEntree(stdin);
  traiterLigne(ligne);

	return 0 ;

}


*/

//extern int getline(char [], int);

void count_lines(FILE *fp,  char *ligne, char *time, char* trx, char *litrois, char *liquat) {
	
		
		//fgets (ligne, 128, fp);
while ( (fgets (ligne, 128, fp) && sscanf(ligne, "%s %s %s %s", time, trx, litrois, liquat) >=3)){

  /*  printf("\n%s\n",ligne);
   // printf("%s\n", time);
   int tempvalide =  gererTimeStamp(time);
   if (tempvalide != 1){
   fprintf(stderr, " erreur timeStamp invalide %s\n", time);
                return 1;
   }
    printf("%s\n",trx );
    printf("%s\n",litrois );
    printf("%s\n",liquat);
   // printf("%d\n", a );*/
    }
    //return ligne;
} 


void  gererTimeStamp(char* time, int* tempvalide ){
   //int valide = 0; 
   int intTime;
   sscanf(time, "%d", &intTime);
   //printf("%d\n", intTime);
  if (intTime<0){
  	
   fprintf(stderr, " erreur timeStamp invalide %s\n", time);
               //return 1;
              

  } else{

    *tempvalide = intTime;
  }
  //return intTime;
}


// verifier etat avion 
bool verifierEtat( char * litrois){

  bool etatValide = false;
  int intEtat;
  sscanf(litrois, "%d", &intEtat);
if (validation_etat_appareil_v3(intEtat)){
    etatValide = true;
}
  return etatValide;
}

// afficher etat inacceptable avion

void sortieValeurInnacceptableEtat(int* sensor, int* tempvalide, char* litrois){

	char num [2] = "08";

	printf("%s %d %d %d\n", num , *sensor, *tempvalide, *litrois);
}




int main(int argc, char *argv[]) {
    FILE *fp;
    char ligne [128], time[20],  trx[20], litrois[20], liquat[20];

    int sensor;

    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            fp = fopen(argv[i], "r");
            if (fp == NULL) {
                fprintf(stderr, "cannot open %s\n", argv[i]);
                return 1;
            }
            count_lines( fp, ligne, time, trx, litrois, liquat);
            fclose(fp);
        }
    } else {
        /* read from standard input if no argument on the command line */
        //count_lines(stdin, ligne, time, trx, litrois, liquat);
        while ( (fgets (ligne, 128, stdin) && sscanf(ligne, "%s %s %s %s", time, trx, litrois, liquat) >=3)){

   // printf("\n%s\n",ligne);
   // printf("%s\n", time);

   int tempvalide;
  // tempvalide =  gererTimeStamp(time);
     gererTimeStamp(time, &tempvalide);         
    //printf("%d\n", tempvalide);


    // gerer les trx 
       if (strcmp (trx, "01") == 0){

       	char valeur[20] = litrois;

       	if (!verifierEtat(litrois)){
          // gestion de valeur inacceptable pour etat avion 
         sensor = 14;
         sortieValeurInnacceptableEtat(&sensor, &tempvalide, valeur);

       	}

       //printf("%s\n",trx );

       }else if (strcmp (trx, "02") == 0){
       //printf("%s\n",trx );

       }else if (strcmp (trx, "03") == 0){
       //printf("%s\n",trx );

       }else if (strcmp (trx, "04") == 0){
        // printf("%s\n",trx );

       }else if (strcmp (trx, "05") == 0){
        // printf("%s\n",trx );

       }else{

       	// errror trx 
       	printf("ERREUR TRX");
       }

   // printf("%s\n",trx );
   // printf("%s\n",litrois );
   // printf("%s\n",liquat);
   // printf("%d\n", a );
            }

        }
    return 0;
}


















/*
angle_incidence_marge_v1
atterrissage_angle_conforme_v1
decollage_angle_conforme_v2
stabilisateur_horizontal_conforme_v3
stabilisateur_horizontal_marge_v3
tarmac_angle_conforme_v1
validation_etat_appareil_v3
vol_angle_conforme_v3
volet_ouverture_marge_v3
volet_ouvert_v2



ecrire sur stdout fprintf permet decrire ici sur un flux de sortie 

fprintf(stdout, "Hello, world\n");
    return 0;






    exemple de code qui prend en paramatre un  fichier ou stdin 


    Probably you can show your code to see what's missing. This one works.

//$ cat simplecat.c
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 100

int main(int argc, char ** argv)
{ char buf[BUF_SIZE + 1];
FILE * inp;

if(argc == 2)
{ inp = fopen(argv[1], "r");
if(!inp)
{ return EXIT_FAILURE;
}
}
else
{ inp = stdin;
}
while(fgets(buf, sizeof buf, inp))
{ printf("%s", buf);
}
fclose(inp);
return EXIT_SUCCESS;
}



*/





