
## Ejercicio 1: Varios bugs

Correr el programa con un debugger, sin agregar flags de
debug. ¿Tienen toda la información que requerían?
No, porque no use ningun flag para debuggear, entocnes, no 
no hay tabla de símbolos cargada.

- ¿Qué pasa si ponen el flag de debug? (CFLAGS=-g)

Se crea la tabla de simbolos para tener la información para debuggear.
Leyendo símbolos desde ./add_array_segfault.e...hecho.

¿Qué flag de optimización es el mejor para debuggear?

make all "CFLAGS=-g -O0"

El -O0 es para que no haga ninguna optimización del codigo.



`gdb ./add_array_segfault.e` 

    break 25
    run
    watch a[i]
    step 
    ... 

Hardware watchpoint 2: a[i]

Old value = 2
New value = 0   ----> Esta tomando un valor desde memoria , la mala suerte es que justo había un valor cero en la posición, de este modo con
for (i = 0; i <= n + 1; i++)  obteniamos lo mismo que  {for (i = 0; i < n; i++). 

`//for (i = 0; i <= n + 1; i++) {   // Esto supera el numero de indice asignado del array` 







