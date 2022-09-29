# UNIDAD 2

#### Actividad 1. (01_Renta.cpp)
Los tramos impositivos para la declaracion de la renta en un determinado pais son los siguientes:

Renta Tipos impositivo
Menos de $10,000 5%
Entre $10,000 y $20,000 15%
Entre $20,000 y $35,000 20%
Entre $35,000 y $60,000 30%
Mas de $60,000 45%

Escribir un programa que pregunte al usuario su renta anual y muestre por pantalla el tipo impositivo que le corresponde.



El programa funciona apartir de tres variables:
1. cantidad: el numero ingresado del monto de renta a pagar.
2. porcentaje: el valor exacto que multiplica a la variable cantidad.
3. impuestos: el numero que arroja el programa.
Mediante if y elese el programa identifica la cantidad y asigna un porcentaje a obtener, realiza una operacion simple multiplicando la variable cantidad con la variable porcentaje y al final imprime la cantidad de impuesto a pagar.



#### Actividad 2. (02_Beneficios.cpp)
En una determinada empresa, sus empleados son evaluados al final de cada año. 
Los puntos que pueden obtener en la evaluación comienzan en 0.0 y pueden ir aumentando, 
traduciéndose en mejores beneficios. Los puntos que pueden conseguir 
los empleados pueden ser 0.0, 0.4, 0.6 o más, pero no valores intermedios 
entre las cifras mencionadas. A continuación se muestra una tabla con los 
niveles correspondientes a cada puntuación. La cantidad de dinero conseguida
en cada nivel es de $2,400 multiplicada por la puntuación del nivel.

Nivel	Puntuación
Inaceptable	0.0
Aceptable	0.4
Meritorio	0.6 o más
Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento, 
así como la cantidad de dinero que recibirá el usuario.
*¡Muchas gracias por preferirnos! Esperamos poder servirte nuevamente.



El programa funciona apartir de tres variables:
1. nivel: valor ingresado por el usuario dependiendo de su puntaje.
2. pago: la cantidad total que depende de la puntuacion de el usuario obtendra.
3. cantidad: la cantidad que recibira el usuario al final.
Mediante un if el programa identifica el puntuaje de usuario y lo guarda en la variable nivel, realiza una operacion simple multiplicando las variables pago y nivel, por ultimo imprime la cantidad que recibira el usuario.



#### Actividad 3. (03_PresioDeJuegos.cpp)
Escribir un programa para una empresa que tiene salas de juegos para todas las edades yquiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar. El
programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si
el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5ysi es mayor de 18 años, $10.



El programa solo trabaja con la variable edad, la cual es un numero ingresado por el usuario, utilizando if y else el programa identifica a que grupo de edad pertenece el numero e imprime el precio a pagar.



#### Actividad 4. (04_Pizza.cpp)
La pizzería Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus clientes. Los
ingredientes para cada tipo de pizza aparecen a continuación.  Ingredientes vegetarianos: Pimiento y tofu.  Ingredientes no vegetarianos: Peperoni, Jamón y Salmón. Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y enfunción de su respuesta le muestre un menú con los ingredientes disponibles para que elija. Solo se puede eligir un ingrediente además de la mozzarella y el tomate que están en todas lapizzas.



El programa utiliza dos variables:
1. tipo: guarda la tecla ingresada por el usuario que determina el tipo de pizza.
2. ingre: guarda la tecla ingresada por el usuario que determina el ingrediente.
El programa mediante if pide al usuario ingresar el tipo de la pizza y el ingrdiente, al final dependiendo del tipo e ingrediente imprime como sera la pizza.