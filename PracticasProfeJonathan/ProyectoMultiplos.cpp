#include<stdio.h>	
#include<conio.h>
#include<stdlib.h>

// Programa que imprima los multiplos del 3 o del 5...

//Funcion para que imprima los multilpos del 3
void multiplo_tres(){
    int con=0;
 	system("CLS");	system("Color 0d");
     while(con<1000){
        printf("%d\t\t",con);
		con = con+3;  
     }
	   getch();
}  
//Funcion para que  imprima los multiplos del 5       
void  multiplo_cinco(){
     int con=0;
     system("CLS");  system("Color 09");
      while(con<=1000){
		 printf("%d\t\t",con);
	   	 con = con+5;
	  }
	 getch();                
}
 // Inicio del programa principal	
int main ()
{

	int pillos = 10;
	int juan = 20003;
	int con=0; int opc;
	system("Color 0c");
	printf("\n \t\tMaria del Rosario Aguilar Carrillo \n\n\n\t\t\t Que Deseas Mostrar\n\n\n\n\t\t\t 1)Multiplos de  3   \n\t\t\t 2)Multiplos de  5\n");
	scanf("%d", &opc);
	switch (opc){
           case 1:multiplo_tres();
           break;
           case 2:multiplo_cinco();
           break;
}
}

