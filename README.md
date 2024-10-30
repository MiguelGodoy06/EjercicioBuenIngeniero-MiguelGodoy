https://github.com/MiguelGodoy06/EjercicioBuenIngeniero-MiguelGodoy.git

Las estructuras de datos son las principales herramientas o recursos que tienen los programadores para el desarrollo de sus algoritmos. Es difícil pensar en un algoritmo o conjunto de estos que no tenga como macroestructura de soporte una estructura de datos. Entre las definiciones más conoci- das de estructuras de datos podemos mencionar:

Una estructura de datos es una forma de almacenar y organizar datos para facilitar el acceso y las modificaciones. Ninguna estructura de datos funciona bien para todos los propósitos, por lo que es importante conocer las fortalezas y limitaciones de cada una de ellas. (Cormen at. al., 2009: 9)

Una estructura de datos es una colección de datos (normalmente de tipo simple) que se carac- terizan por su organización y las operaciones que se definen en ellos. (Quetglás at. al., 1995: 171)

En otras palabras, una estructura de datos es una colección de datos simples o compuestos –como los registros– con un sentido u orden concreto para quien lo está utilizando, sobre la cual se definen un conjunto de operaciones que por lo general describen el comportamiento de la estructura.

La estructura de datos más simple que disponemos es una variable. Con esta podemos realizar las siguientes operaciones: obtener y modificar su valor de manera directa utilizando su identificador. Por su parte, un registro define un conjunto de atributos o campos a los que podemos acceder me- diante su identificador y luego utilizar el operador punto seguido del nombre del campo para acce- der a su valor: “registro.altura”, “registro.peso”.

Existen numerosos tipos de estructuras de datos, generalmente construidas sobre otras más sim- ples. Por ejemplo, vector, matriz, pila, cola, lista, árboles, montículo, grafos, archivo, etc. Estas son lineales o no lineales –también llamadas ramificadas– las mismas pueden ser estáticas o dinámicas. Por lo general, al trabajar sobre estas estructuras de datos se suelen contemplar algunas actividades mínimas como insertar, eliminar y buscar un dato en la misma. A lo largo de los capítulos de esta asignatura se describen en profundidad varias de las estructuras de datos clásicas.

 Pensamiento algorítmico ¿De qué se trata?

Quizás, uno de los aspectos más importantes de esta obra es su intención de crear y fortalecer el pensamiento algorítmico del alumno. Por esta razón, en cada guía de ejercicios se encontrarán al- gunos problemas sencillos para aplicar los conceptos abordados en el capítulo y luego otros más avanzados e integradores, donde se deberá atacar los problemas con un enfoque algorítmico para poder obtener una solución. Para comenzar a introducir al alumno en esta mecánica práctica se pue- de plantear un primer ejercicio: “resuelva el problema de mover el caballo de ajedrez sobre el tecla- do de un teléfono”.

Suponga que tiene a su disposición dicha ficha del ajedrez, y que se puede mover en ciertas formas particulares como se observa en la figura 1. Ahora, desea saber cuántos movimientos válidos pue- den realizarse partiendo con el caballo desde todos los números del teclado realizando un movi- miento desde cada número.

El Caballo

Figura 1. Problema de los movimientos de caballo de ajedrez

Si se parte del 1 se puede ir al 6 y al 8 (dos movimientos); si se sale del 2 se puede llegar al 7 y al 9 (dos movimientos más); iniciando desde el 3 se puede arribar al 4 y al 8 (se suman nuevamente dos); si se arranca desde el 4 las posibilidades son 3, 9 y 0 (ahora se acumulan tres movimientos); pero si la po- sición inicial es el 5 no se puede mover la ficha a ningún lugar dado que no hay movimientos válidos

–sin embargo aún restan varias posibilidades más para seguir probando–; desde el 6 se pueden alcan- zar el 1, 7 y 0 (nuevamente se agregan tres más); por su parte desde el 7 se puede mover la ficha hasta el 2 y el 6 (la cantidad se incrementa en dos); si se toma el 8 como inicio se pueden alcanzar el 1 y el 3 (se adicionan dos movimientos); si se posiciona la ficha en el 9 las opciones para moverse son 2 y 4 (nue- vamente se tienen dos movimientos); y por último si se sale desde el 0 los movimientos válidos son 4 y 6 (se suman los últimos dos). En total se pueden realizar veinte movimientos válidos con esta ficha.

Ahora, diseñe un algoritmo que permita calcular cuántos posibles movimientos válidos puede rea- lizar la ficha del caballo, recibiendo como entrada la cantidad de movimientos a realizar desde el inicio, partiendo de todos los números. Por ejemplo, como mostramos anteriormente si la cantidad de movimientos es uno, la cantidad de movimientos válidos son veinte. Pero si la cantidad de mo- vimientos son dos y se sale desde el 1 se puede ir hasta el 6 y el 8 (un movimiento), a continuación, a partir del 6 hasta el 1, 7 y 0 (dos movimientos de la ficha), luego se sigue desde el 8 hasta el 1 y 3 (para alcanzar los dos movimientos de la ficha). En resumen, se tienen cinco posibles movimientos válidos partiendo desde el 1 (1-6-1, 1-6-7, 1-6-0, 1-8-1 y 1-8-3) a estos se deben sumar todos los movi- mientos que resulten de partir de los demás número. En total la cantidad de posibles movimientos válidos para dos movimientos son 46. Una vez desarrollado el algoritmo complete la siguiente tabla.

Cantidad de movimientos

Posibilidades válidas

1

20

2

46

3

104

5


8


10


15


18


21


23


32
