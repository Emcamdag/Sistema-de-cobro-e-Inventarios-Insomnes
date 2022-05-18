#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Interfaz de usuario tentativa (11/05/22)

#define LONGITUD 80
#define TECLA_ENTER 13
#define TECLA_BACKSPACE 8

int main()
{
    // Variable para elegir de las opciones del menu; V. para la cantidad de productos siendo comprados; V. para usar en el switch de inventario
    int opcionMenu, cantProductos, inventarioSwitch;

    // Variables para iniciar sesion
    char loginUsuario[ LONGITUD + 1 ], loginClave[ LONGITUD + 1 ], char caracter;
    int numUsuarios[3];
    // Servira para decidir en un switch que opcion realizar respecto al registro de usuarios
    int registroUsuarios;

    // Arreglos de usuarios y sus respectivas claves
    char usuarios[numUsuarios][ LONGITUD + 1 ];
    char claves[numUsuarios][ LONGITUD + 1 ];
	
    strcpy(usuarios[0], "0001");
    strcpy(claves[0], "clave123");

    printf("\n\t\t\tINICIO DE SESION\n");
	do
    {
	int i = 0;
	system("cls");
	printf("\n\tUSUARIO: ");
	gets(usuario);
	printf("\tCLAVE: ");
	while (caracter = getch())
	{
		if (caracter == TECLA_ENTER)
		{
			clave[i] = '\0';
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
				clave[i] = caracter;
				i++;
			}
		}
	}
		
	// Valida al usuario
        for (int j = 0; j < NUMERO_USUARIOS; ++j) {
            if (strcmp(usuario, usuarios[j]) == 0 && strcmp(clave, claves[j]) == 0)
	    {
                ingresa = 1;
                break;    
            }
     } while ( i = 0 );
    
	do
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
        } while ( opcionMenu < 1 || opcionMenu > 4);

        switch ( opcionMenu1 )
        {
            // Tambien los casos son tentativos
        case 1:
			do
			{
				// Las opciones son de ejemplo
				printf("\n    1. Realizar venta");
				printf("\n    2. Apertura de caja");
				printf("\n    3. Corte de caja");
				printf("\n    4. Salir");
				
				do
				{
					printf("\n Ingrese su eleccion (1-4):    ");
					scanf("%d", &opcionMenu2);
				} while ( opcionMenu2 < 1 || opcionMenu2 > 4);
				
				switch ( opcionMenu2 )
				{
					// Tambien los casos son tentativos
				case 1:
					printf("\n Ingrese el codigo y cantidad de los productos\n");
					do
					{
						scanf("%d", &cantProductos);
					} while (cantProductos != -1);
					
					break;
					
				case 2:
					
					break;
					
				case 3:
					
					break;
				}
				
			} while ( opcionMenu2 != 4);
            break;
        
        case 2:
			do{
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
            printf("\n 1. Registrar empleados");
            printf("\n 2. Editar registro de empleados");

            switch ( registroUsuarios )
            {
            case 1:
                // Ingresar un nuevo usuario
                datosUsuario ;
                printf("Ingrese la clave del usuario : ");
                scanf("%d");
                printf("Ingrese la contraseña para el usuario %d : ", );
                scanf("");
				
                break;
            
            default:
                break;
            }
            break;
        }
        
    } while ( opcionMenu1 != 4);
    
    return 0;
}
