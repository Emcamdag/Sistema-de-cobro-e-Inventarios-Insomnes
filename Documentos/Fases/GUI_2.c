#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Interfaz de usuario tentativa (11/05/22)

#define LONGITUD 80
#define TECLA_ENTER 13
#define TECLA_BACKSPACE 8
#define NUMERO_USUARIOS 3

int main()
{
    // Variable para elegir de las opciones del menu; V. para la cantidad de productos siendo comprados; V. para usar en el switch de inventario
    int opcionMenu1, opcionMenu2, opcionMenu3, opcionMenu4, cantProductos, inventarioSwitch, usarAsistente, ventasTotal, devTotal;
	

    // Variables para el corte y apertura de caja 
    int apertura, preDinero, posDinero, billMil, billQuin, billDosci, billCien, billCinc, billVen, monDiez, monCinc, monDos, monUno;

    // Variables para iniciar sesion
    char loginUsuario[ LONGITUD + 1 ], loginClave[ LONGITUD + 1 ], caracter;
	
    // Servira para decidir en un switch que opcion realizar respecto al registro de usuarios
    int registroUsuarios;

    // Arreglos de usuarios y sus respectivas claves
    char usuarios[ NUMERO_USUARIOS ][ LONGITUD + 1 ] = {"0001", "0002", "0003"};
    char claves[ NUMERO_USUARIOS ][ LONGITUD + 1 ] = {"12", "34", "56"};

    int i = 0, k = 0, j = 0;

//Inicio de sesion- Reynaldo
    printf("\n\t\t\tINICIO DE SESION\n");
	do
    {
	// 'system("cls")' limpia la pantalla - Daniel
        system("cls");
	    printf("\n\tUSUARIO: ");
	    gets(loginUsuario);
	    printf("\tCLAVE: ");

	// Hace que la contrasenna ingresada no sea visible; es cubierta por '*' - Daniel
        while (caracter = getch())
        {
		    if (caracter == TECLA_ENTER)
		    {
			    loginClave[i] = '\0';
			    break;
		    } 
		    else if (caracter == TECLA_BACKSPACE)
		    {
			    if (i > 0)
			    {
			    	i--;
				    printf("\b \b");
			    }
		    } 
		    else 
		    {
			    if (i < LONGITUD) 
			    {
				    printf("*");
				    loginClave[i] = caracter;
				    i++;
			    }
		    }
        }    
	
		
	    //Se Valida al usuario - Reynaldo
        for (j = 0; j < NUMERO_USUARIOS; j++) 
        {
            if (strcmp( loginUsuario , usuarios[j] ) == 0 && strcmp( loginClave, claves[j] ) == 0)
	        {
                k = 1;
                break;    
            	}
        } 
		// Corregir lo del inicio de sesion (no se que sale mal, pero si lo escribes mal a la primera, ya no puedes iniciar sesion; se reinicia el bucle idk) :)
    } while ( k = 0 );
    
	while ( opcionMenu1 != 4)
    {
        // Las opciones son de ejemplo
        printf("\n    1. Punto de venta");
        printf("\n    2. Revisar inventario");
        printf("\n    3. Administrar empleados");
        printf("\n    4. Salir");

        do
        {
            printf("\n Ingrese su eleccion (1-4):    ");
            scanf("%d", &opcionMenu1);
        } while ( opcionMenu1 < 1 || opcionMenu1 > 4);

        switch ( opcionMenu1 )
        {
        case 1:
			do
			{
				//Se despliega el menú principal - Daniel
				printf("\n    1. Realizar venta");
				printf("\n    2. Apertura de caja");
				printf("\n    3. Corte de caja");
				printf("\n    4. Salir");
				
				do
				{
					printf("\n Ingrese su eleccion (1-4):    ");//Se le pide al usuario que ingrese una opcion
					scanf("%d", &opcionMenu2);
				} while ( opcionMenu2 < 1 || opcionMenu2 > 4);
				
				switch ( opcionMenu2 )
				{
					// Menu para realizar una venta ~Emilio
				case 1:
					printf("\n Ingrese el codigo y cantidad de los productos\n");
					do
					{
						scanf("%d", &cantProductos);
					} while (cantProductos != -1);
					
					break;
					
				case 2:
					if(apertura != 1){
						// Opcion de apertura de caja ~Emilio
						do{
							printf("\n¿Desea usar el asistente de caja?(1=Si, 2=No)");
							scanf("%d", &usarAsistente);
						} while(usarAsistente < 1 || usarAsistente > 2); //Se valida que el usuario ingrese dentro de los parametros indicados ~Emilio

						if(usarAsistente == 1){
							/*Se despliega el asistente de caja ~Emilio*/
							printf("\n\tAsistente de Caja\n");
							printf("-----------------------\n");
							printf("\n¿Cuantos billetes de 1000 tiene?: ");
							scanf("%d", &billMil);
							printf("\n¿Cuantos billetes de 500 tiene?: ");
							scanf("%d", &billQuin);
							printf("\n¿Cuantos billetes de 200 tiene?: ");
							scanf("%d", &billDosci);
							printf("\n¿Cuantos billetes de 100 tiene?: ");
							scanf("%d", &billCien);
							printf("\n¿Cuantos billetes de 50 tiene?: ");
							scanf("%d", &billCinc);
							printf("\n¿Cuantos billetes, o monedas, de 20 tiene?: ");
							scanf("%d", &billVen);
							printf("\n¿Cuantos monedas de 10 tiene?: ");
							scanf("%d", &monDiez);
							printf("\n¿Cuantos monedas de 5 tiene?: ");
							scanf("%d", &monCinc);
							printf("\n¿Cuantos monedas de 2 tiene?: ");
							scanf("%d", &monDos);
							printf("\n¿Cuantos monedas de 1 tiene?: ");
							scanf("%d", &monUno);
							/*Se calcula el dinero que tiene la caja al momento de hacer la apertura*/
							preDinero = billMil+billQuin+billDosci+billCien+billCinc+billVen+monDiez+monCinc+monDos+monUno;
						} 
						else {
							printf("\nIngrese la cantidad de dinero que tenga la caja");
							scanf("%f", &preDinero);
						}
						printf("\nUsted tiene: $%d en la caja\n", preDinero);
						apertura = 1;
					}
					else{
						printf("\nNo se puede realizar una apertura, antes debe realizar un corte de caja");//Se imprime en caso de que no se haya realizado un corte de caja antes. ~Emilio
					}
					break;
					
				case 3:
					if(apertura == 1)
                    {
						//Opcion de corte de caja ~Emilio
						do
                        {
							printf("\n¿Desea usar el asistente de caja?(1=Si, 2=No)");
							scanf("%d", &usarAsistente);
						} while(usarAsistente < 1 || usarAsistente > 2);//Se valida que el usuario ingrese dentro de los parametros indicados ~Emilio

						if(usarAsistente == 1)
                        {
							/*Se despliega el asistente de caja ~Emilio*/
							printf("\n\tAsistente de Caja\n");
							printf("-----------------------\n");
							printf("\n¿Cuantos billetes de 1000 tiene?: ");
							scanf("%d", &billMil);
							printf("\n¿Cuantos billetes de 500 tiene?: ");
							scanf("%d", &billQuin);
							printf("\n¿Cuantos billetes de 200 tiene?: ");
							scanf("%d", &billDosci);
							printf("\n¿Cuantos billetes de 100 tiene?: ");
							scanf("%d", &billCien);
							printf("\n¿Cuantos billetes de 50 tiene?: ");
							scanf("%d", &billCinc);
							printf("\n¿Cuantos billetes, o monedas, de 20 tiene?: ");
							scanf("%d", &billVen);
							printf("\n¿Cuantos monedas de 10 tiene?: ");
							scanf("%d", &monDiez);
							printf("\n¿Cuantos monedas de 5 tiene?: ");
							scanf("%d", &monCinc);
							printf("\n¿Cuantos monedas de 2 tiene?: ");
							scanf("%d", &monDos);
							printf("\n¿Cuantos monedas de 1 tiene?: ");
							scanf("%d", &monUno);
							/*Se calcula el dinero que tiene la caja al momento de hacer la apertura*/
							posDinero = billMil+billQuin+billDosci+billCien+billCinc+billVen+monDiez+monCinc+monDos+monUno;
						} 
						else
                        {
							printf("\nIngrese la cantidad de dinero que tenga la caja");
							scanf("%f", &posDinero);
						}
						system("cls");
						/*Muestra en pantalla el reporte de corte de caja, indica si hay faltante ~Emilio*/
						printf("\n\tCORTE DE CAJA");
						printf("\n Arqueo inicial:\t$%d", preDinero);
						printf("\n Cobranza:\t$%d", ventasTotal);
						printf("\n Devoluciones:\t$%d", devTotal);
						printf("-----------------------------------------");
						printf("\n Total:\t$%d", preDinero+ventasTotal+devTotal);
						printf("\n\n Arqueo final:\t$%d", posDinero);
						printf("-----------------------------------------");
						printf("\n\n Faltante:\t$%d", (preDinero+ventasTotal+devTotal)-(posDinero));
						system("pause");
						apertura = 0;
					}
                    else
                    {
                    //Se imprime en caso de que no se haya realizado una apertura de caja antes. ~Emilio
					printf("\nNo se puede realizar un corte, antes debe realizar una apertura de caja");
                    }
					break;
				}
			} while ( opcionMenu2 != 4);
            break;
        
        case 2:
			do
            {
				printf("\n    1. Bodega");
				printf("\n    2. Tienda");
				printf("\n    3. Salir");
				
				do
				{
					printf("\n Ingrese su eleccion (1-3):    ");
					scanf("%d", &opcionMenu3);
				} while ( opcionMenu3 < 1 || opcionMenu3 > 3);
				
				switch ( opcionMenu3 )
				{
				case 1: 
					printf("\n    1. Zapatos");
					printf("\n    2. Cinturones");
					printf("\n    3. Bolsas y mochilas");
					printf("\n    4. Carteras");
					printf("\n    5. Otros");
					printf("\n    6. Salir");
					
					do 
					{
						printf("\n Ingrese su eleccion (1-6): ");
						scanf("%d", &inventarioSwitch);
					} while (inventarioSwitch < 1 || inventarioSwitch > 6);
					
					switch ( inventarioSwitch )
					{
					case 1:
						printf("\n Inventario de zapatos\n");
						break;
						
					case 2:
						printf("\n Inventario de cinturones\n");
						break;
						
					case 3:
						printf("\n Inventario de bolsas y mochilas\n");
						break;
						
					case 4:
						printf("\n Inventario de carteras\n");
						break;
						
					case 5:
						printf("\n Inventario de otros\n");
						break;
					}
					
					break;
					
				case 2: 
					printf("\n    1. Zapatos");
					printf("\n    2. Cinturones");
					printf("\n    3. Bolsas y mochilas");
					printf("\n    4. Carteras");
					printf("\n    5. Otros");
					printf("\n    6. Salir");
					
					do 
					{
						printf("\n Ingrese su eleccion (1-6): ");
						scanf("%d", &inventarioSwitch);
					} while (inventarioSwitch < 1 || inventarioSwitch > 6);
					
					switch ( inventarioSwitch )
					{
					case 1:
						printf("\n Inventario de zapatos\n");
						break;
						
					case 2:
						printf("\n Inventario de cinturones\n");
						break;
						
					case 3:
						printf("\n Inventario de bolsas y mochilas\n");
						break;
						
					case 4:
						printf("\n Inventario de carteras\n");
						break;
						
					case 5:
						printf("\n Inventario de otros\n");
						break;
					}
					break;
				}
				
			} while(opcionMenu3 != 3);

            break;

        case 3:
	    printf("\nCOMENTARIO: No se logro implementar\n");
            printf("\n 1. Registrar empleados");
            printf("\n 2. Editar registro de empleados");

            switch ( registroUsuarios )
            {
            case 1:
                // Ingresar un nuevo usuario
                /* datosUsuario ;
                printf("Ingrese la clave del usuario : ");
                scanf("%d");
                printf("Ingrese la contraseña para el usuario %d : ", );
                scanf(""); */
		printf("\nNo se logro implementar\n");	
                break;
            
            default:
                break;
            }
        }
    }
    printf("\t-------------------");
    printf("\n\tPrograma finalizado\n");
    printf("\t-------------------");
    return 0;
}
