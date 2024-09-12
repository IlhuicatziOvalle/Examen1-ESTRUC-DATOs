#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "lib/h/IOF/strFile.h"
#include "lib/h/Listas/ListaDoble.h"

void imprimirPalabras(void *dato) {
    printf("%s\n", (char *)dato);
}


int main(void) {
    char texto[] = "derrotarlo es mediante el sacrificio de un Invocador, quien debe completar una peregrinación para invocar al Aeon Supremo que traerá la Calma, un periodo temporal de paz antes de que Sin regrese.La historia comienza con Tidus en su ciudad natal de Zanarkand, donde es una estrella de blitzball. Durante un partido, Sin ataca la ciudad y Tidus es arrastrado a una version de Spira 1000 años en el futuro. Tidus se encuentra con Auron, quien revela estar ligado a Sin, y pronto son arrastrados por el monstruo a Spira. Al despertar, Tidus se da cuenta de que Zanarkand ya no existe y que ha sido destruida hace 1000 años durante una guerra que involucró el uso de machina.Tidus es rescatado por un grupo de Al Bhed, donde conoce a Rikku, quien le explica la naturaleza de Sin y lo que le ha ocurrido. Luego de otro ataque de Sin, Tidus se separa de los Al Bhed y llega a la isla de Besaid, donde conoce a Yuna y sus guardianes, Lulu, Wakka y Kimahri. Yuna está iniciando su peregrinación para derrotar a Sin, siguiendo los pasos de su padre, y Tidus se une al grupo en la esperanza de encontrar una manera de regresar a Zanarkand.El viaje también explora las tensiones entre las diferentes razas y culturas de Spira, como los Al Bhed, quienes son marginados por su rechazo a las enseñanzas de Yevon. Rikku se une al grupo más tarde en la historia, lo que genera tensiones con Wakka, un ferviente creyente en Yevon que desconfía de los Al Bhed y de su uso de tecnología prohibida.Durante la peregrinación, el grupo también se encuentra repetidamente con Sin, quien parece tener un interés especial en Tidus. Finalmente, Auron revela a Tidus que Sin es, de hecho, Jecht, el padre de Tidus, quien se convirtió en Sin después de acompañar a Braska en su peregrinación una década antes. Esto explica por qué Sin parece estar conectado con Tidus y Auron.A medida que avanzan, el grupo comienza a cuestionar las enseñanzas de Yevon, especialmente después de que descubren que el Alto Clero de Yevon está corrupto y que el ciclo de destrucción de Sin es, en parte, perpetuado por la propia religion. En Bevelle, la ciudad capital y sede de Yevon, el grupo descubre que los líderes de Yevon no son sinceros acerca de la posibilidad de derrotar permanentemente a Sin. El Aeon Supremo, que los Invocadores buscan para derrotar a Sin, en realidad solo destruye temporalmente a Sin, después de lo cual el Invocador sacrifica su vida y Sin vuelve a renacer. Esta revelación destruye la fe de Yuna en Yevon, pero ella sigue adelante con su peregrinación, decidida a encontrar una manera de romper el ciclo sin sacrificarse. A lo largo del viaje, Tidus lucha con la realidad de que su padre es Sin y con su deseo de salvar tanto a Yuna como a Spira.El grupo finalmente llega a Zanarkand, donde descubren que la ciudad es ahora una ruina. Aquí, se revela la verdadera naturaleza de Spira y Sin. Yu Yevon, una entidad espiritual, es el verdadero creador de Sin y el responsable de su renacimiento constante. Los Invocadores que buscan derrotar a Sin están, sin saberlo, perpetuando el ciclo, ya que el Aeon Supremo se convierte en el nuevo recipiente de Yu Yevon, quien reencarna en un nuevo Sin.Yuna, Tidus y el resto del grupo deciden que ya no seguirán el plan tradicional de sacrificar a Yuna para derrotar a Sin. En cambio, elaboran un plan para derrotar a Yu Yevon y poner fin al ciclo de destrucción de una vez por todas. Con la ayuda de los Aeons y los recuerdos del padre de Tidus, Jecht, el grupo enfrenta a Sin y lo destruye, liberando a Spira de su terror cíclico.Sin embargo, en el proceso, Tidus descubre que él también es parte de una ilusión. Zanarkand, la ciudad de la que proviene, era en realidad una sueño creado por los Sueños de los Fayth, un grupo de espíritus que ha estado manteniendo la existencia de la ciudad como una forma de resistencia contra Yu Yevon. Al derrotar a Yu Yevon, los Sueños de los Fayth finalmente pueden descansar, lo que significa que Zanarkand y todo lo que proviene de ella, incluyendo a Tidus, dejarán de existir.";
    
    // Crear listas para palabras de diferentes longitudes
    ListaDoble log[4];
    int longitudes[] = {4, 8, 3, 6};  // Longitudes de palabras a buscar

    // Inicializar listas
    for (int i = 0; i < 4; i++) {
        InicializarListaDoble(&log[i]);
    }

    // Filtrar palabras y almacenarlas en las listas correspondientes
    for (int i = 0; i < 4; i++) {
        log[i] = filtro(texto, longitudes[i]);
    }

    // Imprimir las listas
    for (int i = 0; i < 4; i++) {
        printf("[pos %d] Palabras de %d letras:\n", i, longitudes[i]);
        ImprimirLista(&log[i], imprimirPalabras);
        printf("\n");
    }

    // Liberar memoria
    for (int i = 0; i < 4; i++) {
        LiberarLista(&log[i]);
    }

    return 0;
}