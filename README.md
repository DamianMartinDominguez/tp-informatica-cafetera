# tp-informatica-cafetera
Es una cafetera con tres funciones.
La primera funcion es calentar agua para tomar un te, la segunda funcion es para tomar un cafe, y la ultima es para tomar cafe con leche.


![diagrama cafetera](https://user-images.githubusercontent.com/64601914/131196093-ff168235-d145-4345-a134-461b6a44d5bc.jpg)

el programa comienza en la funcion espera, una vez que se elige el servicio se pasa a la funcion calentar agua, donde se acciona una resistencia que calienta el agua. Esta se testea con un sensor hasta la temperatura deseada. segun el servicio que se desea el programa va a servir agua en el caso que sea te y luego vuelve a la funcion esperar, o colocando cafe en cualquiera de los otros dos casos. Luego de colocado el cafe el programa va a servir agua y dependiendo de que se quiera cafe solo o cafe con leche el programa va a mezclar bebida (en el primer caso) o a calentar leche y posteriormente a servir la leche para por ultimo mezclar la bebida para por ultimo retornar a la funcion del comienzo esperar().

