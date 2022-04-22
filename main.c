//Maximilian Wendt programmierte:

#include<stdio.h>



void printMatrix(char name[10] , int n[5][5]){
  
  printf("%s \n", name); 

    //Ein gepflegtes Aussehen ist wichtig, deshalb:
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(n[i][j]<10) printf("%d    ", n[i][j]); //Wenn eine einstellige Zahl setze 4 Leerzeichen hinter jeweiligen Wert
            else if(n[i][j]<100) printf("%d   ", n[i][j]); //Wenn eine zweistellige Zahl setze 3 Leerzeichen hinter jeweiligen Wert
            else printf("%d  ", n[i][j]); //Ansonsten setze 2 Leerzeichen hinter jeweiligen Wert
        }
        printf("\n"); // Leerzeichen für nächste Zeile
    }

    printf("\n");
}



void main(){

    int tab1[5][5]; //Operand1Matrix
    int tab2[5][5]; //Operand2Matrix
    int tab3[5][5]; //ErgebnisMatrix

    
    //Befülle Matrizen mit Werten
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            tab1[i][j]=i+2; //In Matrix1 in Zeile i, Spalte j speichere Wert i+2
            tab2[i][j]=i+j; //In Matrix2 in Zeile i, Spalte j speichere Wert i+j
        }
    }

    //Multipliziere Matrizen
   for (int i= 0;i < 5; i++){
    for (int j= 0;j < 5; j++){
        //Muster für Matrix Multiplikation
        tab3[i][j] = tab1[i][0]*tab2[0][j] + tab1[i][1]*tab2[1][j] + tab1[i][2]*tab2[2][j] + tab1[i][3]*tab2[3][j] + tab1[i][4]*tab2[4][j];
    }
   }

    
   printMatrix("Tabelle 1:", tab1); //Matrix1 mit Name drucken
   printMatrix("Tabelle 2:", tab2); //Matrix2 mit Name drucken
   printMatrix("Ergebnis:", tab3);  //Ergebnis mit Name drucken

}    
