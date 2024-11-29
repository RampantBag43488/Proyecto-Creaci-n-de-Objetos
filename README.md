# Proyecto-Creacion-de-Objetos
### Iñaki Mancera Llano
Este proyecto tiene tres clases. La primera es el personaje de Mario Kart, el cual cuenta con sus respectivas características de velocidad, aceleración y peso. El segundo es el coche, el cual igualmente tendrá velocidad, aceleración y peso. Y la tercera es llanta la cual igual tiene velocidad, aceleración y peso. Para con estas piezas armar el kart del usuario y dar los detalles de este mismo.
En Mario Kart dependiendo de estas tres cosas que elijas dependen las estadísticas que tendrás durante la carrera, lo que puede definir si ganas o pierdes a parte de la habilidad, por lo que con este código se busca ver qué características tiene un conjunto de personaje, coche y llantas para ver cual es mejor para el usuario.

### Funcionalidad
El programa permite ingresar las estadisticas como velocidad, aseleración y peso del personaje, carcasa y las llantas al igual que detalles como nombre del personaje, tipo de llanta(todoterreno o pequeña) y estilo de carcasa(sea moto o coche) mediante un menu desplegado en consola. Con esto se crea un kart con estadisticas totales de velocidad, aceleracion y peso. En base a las caracteristicas ingresadas de las piezas se define tambien una caracteristica de control y manejo que tendrá el kart para que el usuario pueda decidir si quiere o no ese kart.

### Consideraciones
El codigo despliega un menu donde modificar todas las caracteristicas y detalles de un kart ya creado, no se puede crear uno nuevo ni tener mas de un kart a la vez.
El programa corre tanto en la consola como en visual studio code(con las extensiones necesarias instaladas y MinGW) y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar en consola con: "g++ ParametrosBase.h Personajes.h Carcasa.h Llantas.h Kart.h Mario_kart_main.cpp"

correr en windows: "./a.exe"

###Correcciones
1. Se aplico herencia y el main correctamente para que compile.

2. Se corrigio el contenido extra en el menu.
