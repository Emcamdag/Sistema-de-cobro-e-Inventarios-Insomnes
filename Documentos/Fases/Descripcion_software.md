# Descripción del producto software: 
_________________________________________________________________________________________________________________________________________________________________________

Ya con los antecedentes establecidos en equipo se planteó a realizar un sistema de cobros automatizado para una microempresa el sistema realizado en Lenguaje C consiste en una interfaz que realice las principales funciones de poder realizar cobros, acceder al inventario, mover, depurar y agregar piezas al inventario y realizar cortes de venta. Cada una de estas funciones consisten en: 

## 1-Realizar cobros: 
En la interfaz de la aplicación estará disponible la opción de realizar los cobros de las ventas que se realicen día con día en la empresa, así como indicar los datos de la venta:  

-Monto 
-Método de venta,
-Número de venta 
-Empleado encargado de la venta 
-Sucursal  
-Fecha 
-Datos de facturación en caso de requerirlo el cliente o no 

Todo esto impreso en un archivo de texto generado. 

## 2-Inventario: 
Esta estará ligada a la base de datos del sistema, se utilizará el lenguaje de bases de datos SQLite donde las piezas de los artículos podrán ser agregadas, movimientos de mercancía de bodega a tienda o de sucursal a sucursal y piezas eliminadas por venta o fallo de producto. 

## 3-Cortes de venta: 
Se podrá realizar el corte de venta que sume las ventas totales del día por método de pago (efectivo y tarjeta), para así ser generado un archivo de texto que imprima a detalle lo que se vendió en el día y los montos totales de caja y de las ventas realizadas por tarjeta. 
