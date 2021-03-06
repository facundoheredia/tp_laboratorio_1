/// FUNCIONES MENUS
/// @author HEREDIA, FACUNDO GASTON
///
/// @date 29 de Abril de 2022

//	========================
//	> BIBLIOTECAS NECESARIAS
//	========================
#include "hud_menu.h"

//	================================================================================================================
//	> FUNCION ENCABEZADO PRESENTACION
char iniciarPrograma (void)
{
	char opcionValidada;

	system("cls");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                  渦? TRABAJO PRACTICO N3 朮?                    ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                                                                 ?\n");
	printf("?                       PROGRAMA LINKEDLIST                       ?\n");
	printf("?      ALTAS, BAJAS, MODIFICACIONES E INFORMES DE PASAJEROS       ?\n");
	printf("?                                                                 ?\n");
	printf("?  DIVISION: 1F                                                   ?\n");
	printf("?  ALUMNO: Heredia Facundo                                        ?\n");
	printf("?                                                                 ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                    ?DESEA INICIAR EL PROGRAMA?                  ?\n");
	printf("?                       [S] SI         [N] NO                     ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("\n");

	opcionValidada = entrada_respuestaUsuario ("INGRESE UNA OPCION\n");

	system("cls");

	return opcionValidada;
}
//	================================================================================================================
//	> FUNCION MENU PRINCIPAL
int menuPricipal (void)
{
	int opcionMenuValidada;

	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                             渦? MENU  PRINCIPAL 朮?                             ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?  [01] CARGAR LOS DATOS DE LOS PASAJEROS DESDE ARCHIVO data.csv (modo texto)     ?\n");
	printf("?  [02] CARGAR LOS DATOS DE LOS PASAJEROS DESDE ARCHIVO data.bin (modo binario)   ?\n");
	printf("?  [03] ALTA DE PASAJERO                                                          ?\n");
	printf("?  [04] MODIFICAR DATOS DE PASAJERO                                               ?\n");
	printf("?  [05] BAJA DE PASAJERO                                                          ?\n");
	printf("?  [06] LISTAR PASAJEROS                                                          ?\n");
	printf("?  [07] ORDENAR PASAJEROS                                                         ?\n");
	printf("?  [08] GUARDAR LOS DATOS DE LOS PASAJEROS EN EL ARCHIVO data.csv (modo texto)    ?\n");
	printf("?  [09] GUARDAR LOS DATOS DE LOS PASAJEROS EN EL ARCHIVO data.bin (modo binario)  ?\n");
	printf("?  [10] SALIR                                                                     ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");

	opcionMenuValidada = entrada_obtenerEnteroEntreRango ("INGRESE UNA OPCION: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", M_OPCION_MINIMA, MP_OPCION_MAXIMA);
	system("cls");
	return opcionMenuValidada;
}
//	================================================================================================================
//	> FUNCION ENCABEZADO ALTA
void encabezadoAltas (void)
{
	system("cls");
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                     渦? ALTA DE PASAJERO 朮?                    ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?  POR FAVOR LLENE LOS DATOS QUE SE VAN SOLICITANDO PARA EL ALTA  ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("\n");
}
//	================================================================================================================
//	> FUNCION ENCABEZADO MODIFICACION
int menuModificacion (void)
{
	int opcionMenuValidada;

	//system("cls");
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                渦? MODIFICACION DE PASAJERO 朮?                 ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?  [1] NOMBRE                                                     ?\n");
	printf("?  [2] APELLIDO                                                   ?\n");
	printf("?  [3] PRECIO                                                     ?\n");
	printf("?  [4] CODIGO DE VUELO                                            ?\n");
	printf("?  [5] TIPO DE PASAJERO                                           ?\n");
	printf("?  [6] VOLVER AL MENU PRINCIPAL                                   ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");

	opcionMenuValidada = entrada_obtenerEnteroEntreRango ("INGRESE UNA OPCION: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", M_OPCION_MINIMA, MM_OPCION_MAXIMA);
	system("cls");
	return opcionMenuValidada;
}
//	================================================================================================================
//	> FUNCION ENCABEZADO BAJA
void encabezadoBajas (void)
{
	system("cls");
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                     渦? BAJA DE PASAJERO 朮?                    ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?   POR FAVOR ELIGA DE LA SIGUIENTE LISTA EL PASAJERO POR SU ID   ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
}
//	================================================================================================================
//	> FUNCION ENCABEZADO BAJA
void encabezadoDarDeBaja (void)
{
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様融\n");
	printf("?                                      EL SIGUIENTE PASAJERO SE DARA DE BAJA                                     ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵\n");
}
//	================================================================================================================
//	> FUNCION ENCABEZADO TABLA
void encabezadoTabla (void)
{
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様融\n");
	printf("?  ID   |      NOMBRE     |    APELLIDO     |    PRECIO    | COD. VUELO |     TIPO PASAJERO     | EST. DE VUELO  ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様郵\n");
}
//	================================================================================================================
//	> FUNCION PIE DE PAGINA TABLA
void PieDePaginaTabla (void)
{
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕\n");
}
//	================================================================================================================
//	> FUNCION ENCABEZADO TABLA TIPO PASAJERO
void encabezadoTablaTipoPasajero (void)
{
	printf("\n");
	printf("浜様様様様様様様様様様融\n");
	printf("?     TIPO PASAJERO    ?\n");
	printf("麺様様様様様様様様様様郵\n");
}
//	================================================================================================================
//	> FUNCION PIE DE TIPO PASAJERO
void PieDePaginaTablaTipoPasajero (void)
{
	printf("藩様様様様様様様様様様夕\n");
}
//	================================================================================================================
//	> FUNCION ENCABEZADO TABLA CODIGOS DE VUELO
void encabezadoTablaCodigosDeVuelo (void)
{
	printf("\n");
	printf("浜様様様様様様様?\n");
	printf("?  COD. VUELO   ?\n");
	printf("麺様様様様様様様?\n");
}
//	================================================================================================================
//	> FUNCION PIE DE PAGINA TABLA
void PieDePaginaTablaCodigosDeVuelo (void)
{
	printf("藩様様様様様様様?\n");
}
//	================================================================================================================
//	> FUNCION LISTADO DE PASAJEROS
int menuListado (void)
{
	int opcionMenuValidada;

	system("cls");
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?                   渦? LISTADO DE PASAJERO 朮?                   ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");
	printf("?  [1] LISTADO DE PASAJEROS POR APELLIDO Y TIPO PASAJERO          ?\n");
	printf("?  [2] TOTAL Y PROMEDIO DE PRECIOS DE LOS PASAJES,                ?\n");
	printf("?      Y CUANTOS PASAJEROS SUPERAN EL PRECIO PROMEDIO             ?\n");
	printf("?  [3] LISTADO DE LOS PASAJEROS POR CODIGO DE VUELO Y             ?\n");
	printf("?      ESTADOS DE VUELOS ACTIVOS                                  ?\n");
	printf("?  [4] SALIR                                                      ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様?\n");

	opcionMenuValidada = entrada_obtenerEnteroEntreRango ("INGRESE UNA OPCION: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", M_OPCION_MINIMA, ML_OPCION_MAXIMA);
	system("cls");
	return opcionMenuValidada;
}
//	================================================================================================================
//	> FUNCION ORDENAR PASAJEROS
int menuOrdenar (void)
{
	int opcionMenuValidada;

	system("cls");
	printf("\n");
	printf("浜様様様様様様様様様様様様様様様様様様?\n");
	printf("?  渦? ORDENAMIENTO DE PASAJEROS 朮?  ?\n");
	printf("麺様様様様様様様様様様様様様様様様様様?\n");
	printf("?  [1] POR ID                         ?\n");
	printf("?  [2] POR NOMBRE                     ?\n");
	printf("?  [3] POR APELLIDO                   ?\n");
	printf("?  [4] POR PRECIO                     ?\n");
	printf("?  [5] POR CODIGO DE VUELO            ?\n");
	printf("?  [6] POR TIPO DE PASAJERO           ?\n");
	printf("?  [7] POR ESTADO DE VUELO            ?\n");
	printf("?  [8] SALIR                          ?\n");
	printf("藩様様様様様様様様様様様様様様様様様様?\n");

	opcionMenuValidada = entrada_obtenerEnteroEntreRango ("INGRESE UNA OPCION: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", "UPS! NO ES UN DATO VALIDO, REINTENTE: ", M_OPCION_MINIMA, MO_OPCION_MAXIMA);
	system("cls");
	return opcionMenuValidada;
}
