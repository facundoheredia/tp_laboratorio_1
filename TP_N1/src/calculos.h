/// FUNCIONES DE CALCULOS
///
///	@author Heredia Facundo
/// @date Abril 9 del 2022

#ifndef CALCULOS_H_
#define CALCULOS_H_

//	> FUNCION DE CALCULO DE DESCUENTO O INTERES

float calculoDescuentoOInteres (float precio, int porcentaje, int auxiliar);

//	> FUNCION DIFERENCIA DE DOS NUMEROS FLOTANTES

float calculoDiferenciaDosNumerosFlotantes (float numeroUno, float numeroDos);

//	> FUNCION DE CAMBIO DE MONEDA

float calculoCambioDeMoneda (float monedaUno, float tipoDeCambioMonedaDos, float valorMonedaUnoEnMonedaDos);

//	> FUNCION DE PRECIOS UNITARIOS

float calculoPrecioUnitario (float dividendo, int divisor);

#endif /* CALCULOS_H_ */
