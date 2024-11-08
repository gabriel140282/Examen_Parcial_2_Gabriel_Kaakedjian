https://github.com/gabriel140282/Examen_Parcial_2_Gabriel_Kaakedjian.git

Examen de Programación en C++
Estimado estudiante,

Para asegurar una evaluación justa de tus habilidades en programación en C++, sigue estas instrucciones al entregar tus respuestas.

Instrucciones de Entrega
Repositorio en GitHub:

Crea un repositorio privado en GitHub para este examen y compártelo solo después de la revisión si así lo deseas.
Fichero ZIP:

Al finalizar, descarga tu repositorio como un archivo ZIP con el nombre Apellido_Nombre_ExamenCPP.zip.
Archivo README.md:

Incluye un archivo README.md en el repositorio, que contenga:
Un enlace directo al repositorio.
Una breve descripción de cada ejercicio resuelto y el archivo donde se encuentra.
Usa Markdown para estructurar tu README.
Entrega:

Sube el archivo ZIP a la plataforma indicada antes de la fecha límite.
Aspectos Adicionales:

Organiza y comenta tu código para que sea fácil de leer y entender.
Si utilizas referencias externas, inclúyelas en el README.md.

Parte 2: Problemas de Codificación (70 puntos en total)

Ejercicio 1: Identificación de Número Positivo, Negativo o Cero (HECHO POR MI)
Escribe un programa en C++ que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero". 

En este ejercicio se le pide al usuario que ingrese un numero entero que posteriormente va a ser almacenado en una variable llamada numero de tipo entero. He decidido utilizar el condicional if..else para
comprobar los distintas posibilidades que nos pide el ejercicio. Si un numero es mayor que 0, siempre va a ser positivo. Si el numero es igual a 0, me imprimirá el texto de que el numero es igual a 0, y en cualquier otro caso, el numero tendrá que ser negativo

Ejercicio 2: Día de la Semana (HECHO POR MI)
Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 

En este ejercicio le pedimos al usuario que ingrese un numero del 1 al 7. En este ejercicio lo ideal es usar el condicional switch, para que me compruebe dependiendo del numero introducido por el usuario (numeros del 1 al 7) cada
caso correspondiente. Al final del condicional, colocamos el default para que en cualquier otro caso nos muestre por pantalla el texto de que no es un numero valido.

Ejercicio 3: Cálculo de Promedio de Calificaciones (HECHO POR MI)
Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones. 

En este ejercicio le pido al usuario 8 notas por pantalla y las guardo en cada variable declarada anteriormente. Realizo la suma de las notas y la divido entre la cantidad de las mismas para sacar el promedio total.
He decidido hacer este ejercicio con variables de tipo float ya que normalmente las notas no suelen ser solo numeros enteros.

Ejercicio 4: Promoción de "3 por 2" en Tienda (HECHO POR MI)
En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.

En este ejercicio le he pedido al usuario 3 precios a ingresar. Valoro las posibilidades existentes para saber cual precio es mayor que otro, y posteriormente realizar la suma 
de los 2 precios más altos. Finalmente con el else, en caso de que los 3 precios sean iguales, se procederá simplemente a la suma de los 3.

Básicamente consiste en pensar de forma lógica las distintas posibilidades que hay e incluirlas en condicionales if.
