#include <gtk/gtk.h>
 typedef struct
{
int Jour;
int Mois;
int Annee;
}Date;
typedef struct
{int IdVols;
char Depart[30];
char Destination[30];
Date Date_depart;
int Prix;
char Class[30];
}vol;


void AjoutVol(char Depart[],char Destination[],int JourDep,int MoisDep,int AnneeDep,int Prix,char Class[]);
int verifier(char Depart[],char Destination[]);
void AfficherVol(GtkWidget *liste);
int verifier_selection(char choix[]);
void modifier(char choix[],char DepartM[],char DestinationM[],char Jour[],char  Mois[],char  Annee[] ,char PrixM[],char ClassM[]);
void Volselectionner(char choix[]);
void SupprimerVol(char Ids[]);
void AfficherVolrecherche(GtkWidget *liste,char filtre[]);

