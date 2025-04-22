## Subject

```C
Nombre de la tarea: first_word
Archivos esperados: first_word.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y muestre su primera palabra, seguida de un
salto de línea.

Una palabra es una sección de una cadena delimitada por espacios/tabulaciones o por el inicio/fin
de la cadena.

Si el número de parámetros no es 1, o si no hay palabras, simplemente muestra
un salto de línea.

Ejemplos:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

```