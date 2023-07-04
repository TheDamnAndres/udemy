#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    printf("HOLA A TODOOOOOS");

    return 0;
}

///2
/*int main()
{
    char c1, c2, c3;

    printf ("Introduzca 3 caracteres \n");
    scanf ("%c %c %c", &c1, &c2, &c3);
    printf("%c - %c - %c",c1,c2,c3);

    return 0;
}*/

///3
/*int main()
{
    float base, altura;

    printf ("Intruduzca la base del rectangulo:  \n");
    scanf ("%f", &base);
    printf ("Intruduzca la altura del rectangulo:  \n");
    scanf ("%f", &altura);
    float area = base*altura;


    printf ("El area del rectangulo de base %2.f y altura %2.f es %2.f\n" ,base, altura, area);




    return 0;
}*/

///4
/*int main()
{
    float euros;

    printf ("Intruduzca los euros que quieras convertir:  \n");
    scanf ("%f", &euros);

    printf (" %2.f euros equivalen a %2.f pesetas\n" ,euros, euros*233.6);




    return 0;
}*/

///5
/*int main() {
    char c1, c2, c3;

    printf("Ingrese el primer caracter: ");
    scanf(" %c", &c1);

    printf("Ingrese el segundo caracter: ");
    scanf(" %c", &c2);

    printf("Ingrese el tercer caracter: ");
    scanf(" %c", &c3);

    printf("Caracteres ingresados: %c-%c-%c\n", c1, c2, c3);

    return 0;
}*/

///6
/*int main()
{
    int precio_base, kilometros;
    float consumo, precio_f;


    printf ("Introduce el precio del vehiculo:  \n");
    scanf ("%d", &precio_base);
    printf ("Introduce los kilometros:  \n");
    scanf ("%d", &kilometros);

    printf ("Introduce el consumo: \n");
    scanf ("%f", &consumo);



    if (kilometros<20000 && consumo <= 5){
        precio_f=precio_base*1.2;
    } else if (kilometros>20000 && consumo <= 5) {
        precio_f=precio_base*1.1;
    } else if (consumo>5) {
        precio_f=precio_base*1.5;
    }

    printf ("El precio final del vehiculo es %2.f\n" , precio_f);

    return 0;
}*/

///7
/*int main()
{
    int dia;
    printf("Escoja un dia de la semana entre 1-7\n");
    scanf ("%d",&dia);

    switch (dia){
        case (1):
        printf ("Lunes");
        break;
         case (2):
        printf ("Martes");
        break;
         case (3):
        printf ("Miercoles");
        break;
         case (4):
        printf ("Jueves");
        break;
         case (5):
        printf ("Viernes");
        break;
         case (6):
        printf ("Sabado");
        break;
         case (7):
        printf ("Domingo");
        break;
        default:
        printf ("Error dia inexistente");
    }


    return 0;
}*/

///8
/*int main (){
    for(int i = 0; i < 100; i++)
    {
        if (i%3==0)
        {
            printf ("%d\n",i);
        }



    }

}*/

///9
/*int main(){
    int notas;
    printf ("Ingrese la nota del alumno: \n");
    scanf ("%d", &notas);


    if (notas < 5){
        printf ("SUPLETORIOS");


    } else if (notas==6) {
        printf ("bien");
    } else if (notas==7 || notas ==8) {
        printf ("Notable");
    } else if (notas==9 || notas ==10) {
        printf ("SUPER BIEN DESTACABLE");
    } else {
        printf ("NOTA INEXISTENTE");
    }


} */

///10
/*int main() {
    int numero;
    int suma = 0;
    int cantidad_numeros = 0;

    printf("Ingrese un numero:\n");
    printf("(Si ingresa el numero 0 el programa finalizara):");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        suma += numero;
        cantidad_numeros++;

        printf("Ingrese otro numero:");
    }

    if (cantidad_numeros > 0) {
        float promedio = (float)suma / cantidad_numeros;
        printf("La suma de los numeros es: %d\n", suma);
        printf("El promedio de los numeros es: %.2f\n", promedio);
    } else {
        printf("No se ingresaron numeros.\n");
    }

    return 0;
}*/

//11
/*#define numero_personas 5

int main() {
    float pesos[numero_personas];
    float suma = 0;
    float promedio;
    int mayores = 0;
    int menores = 0;


    printf("Ingrese el peso de las %d personas:\n", numero_personas);
    for (int i = 0; i < numero_personas; i++) {
        printf("Persona %d: ", i+1);
        scanf("%f", &pesos[i]);
        suma += pesos[i];
    }


    promedio = suma / numero_personas;


    for (int i = 0; i < numero_personas; i++) {
        if (pesos[i] > promedio) {
            mayores++;
        } else if (pesos[i] < promedio) {
            menores++;
        }
    }


    printf("Promedio de peso: %.2f\n", promedio);
    printf("Personas con peso mayor al promedio: %d\n", mayores);
    printf("Personas con peso menor al promedio: %d\n", menores);

    return 0;
}*/

///12
/*#define numero_elementos 10

int main() {
    int vector[numero_elementos];
    int maximo, minimo;


    printf("Ingrese %d elementos:\n", numero_elementos);
    for (int a = 0; a < numero_elementos; a++) {
        printf("Elemento %d: ", a+1);
        scanf("%d", &vector[a]);
    }


    maximo = vector[0];
    minimo = vector[0];


    for (int i = 1; i < numero_elementos; i++) {
        if (vector[i] > maximo) {
            maximo = vector[i];
        }
        if (vector[i] < minimo) {
            minimo = vector[i];
        }
    }

    // Resultados
    printf("Valor maximo: %d\n", maximo);
    printf("Valor minimo: %d\n", minimo);

    return 0;
}*/

///13
/*#define numero_hab 3
#define numero_temp 3

int main() {
    int habitaciones[numero_hab][numero_temp] = {
        {1, 120, 150, 220},
        {2, 130, 160, 230},
        {3, 100, 120, 200}
    };

    float promedios[numero_temp] = {0};


    for (int i = 0; i < numero_hab; i++) {
        for (int j = 1; j <= numero_temp; j++) {
            promedios[j-1] += habitaciones[i][j];
        }
    }

    for (int i = 0; i < numero_temp; i++) {
        promedios[i] /= numero_hab;
    }


    printf("Promedio de precios por temporada:\n");
    for (int i = 0; i < numero_temp; i++) {
        printf("Temporada %d: %.2f\n", i+1, promedios[i]);
    }

    return 0;
}*/

///14
/*#define longitud_max 100

int main() {
    char cadenas[4][longitud_max];

    printf("Ingrese 4 cadenas:\n");
    for (int i = 0; i < 4; i++) {
        printf("Cadena %d: ", i + 1);
        scanf("%s", cadenas[i]);
    }

    printf("Cadenas ingresadas:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s", cadenas[i]);
        if (i != 3) {
            printf(" - ");
        }
    }

    return 0;
}*/

///15
/*#define longitud_maxima 100

int main() {
    char cadena[longitud_maxima];
    char caracter;
    int posicion = -1;

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strtol(cadena, NULL, 10) - 1] = '\0';

    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);


    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == caracter) {
            posicion = i;
            break;
        }
    }


    if (posicion != -1) {
        printf("El caracter '%c' se encuentra en la cadena en la posicion %d.\n", caracter, posicion);
    } else {
        printf("El caracter '%c' no se encuentra en la cadena.\n", caracter);
    }

    return 0;
}*/

///16
/*#define nombres 50
#define jugadores_max 5

struct Jugador {
    char nombre[nombres];
    int edad;
    float altura;
};

int main() {
    struct Jugador equipo[nombres];

    printf("Ingrese los datos de los jugadores:\n");
    for (int i = 0; i < jugadores_max; i++) {
        printf("Jugador %d:\n", i+1);
        printf("Nombre: ");
        fgets(equipo[i].nombre, sizeof(equipo[i].nombre), stdin);
        equipo[i].nombre[strcspn(equipo[i].nombre, "\n")] = '\0';
        printf("Edad: ");
        char edadStr[10];
        fgets(edadStr, sizeof(edadStr), stdin);
        equipo[i].edad = atoi(edadStr);
        printf("Altura: ");
        char alturaStr[10];
        fgets(alturaStr, sizeof(alturaStr), stdin);
        equipo[i].altura = atof(alturaStr);
        printf("\n");
    }

    int opcion;
    char nombreBusqueda[nombres];

    do {

        printf("MENU:\n");
        printf("1. Listar nombres y alturas de los jugadores.\n");
        printf("2. Buscar jugador por nombre.\n");
        printf("3. Jugador más alto del equipo.\n");
        printf("4. Salir.\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:

                printf("Nombres y alturas de los jugadores:\n");
                for (int i = 0; i < jugadores_max; i++) {
                    printf("Jugador %d - Nombre: %s, Altura: %.2f\n", i+1, equipo[i].nombre, equipo[i].altura);
                }
                break;
            case 2:

                printf("Ingrese el nombre del jugador a buscar: ");
                getchar();
                fgets(nombreBusqueda, sizeof(nombreBusqueda), stdin);
                nombreBusqueda[strcspn(nombreBusqueda, "\n")] = '\0';
                for (int i = 0; i < jugadores_max; i++) {
                    if (strcmp(equipo[i].nombre, nombreBusqueda) == 0) {
                        printf("Jugador encontrado:\n");
                        printf("Nombre: %s, Altura: %.2f, Edad: %d\n", equipo[i].nombre, equipo[i].altura, equipo[i].edad);
                        break;
                    }
                }
                break;
            case 3:

                int indiceMasAlto = 0;
                for (int i = 1; i < jugadores_max; i++) {
                    if (equipo[i].altura > equipo[indiceMasAlto].altura) {
                        indiceMasAlto = i;
                    }
                }
                printf("Jugador mas alto del equipo:\n");
                printf("Nombre: %s, Altura: %.2f, Edad: %d\n", equipo[indiceMasAlto].nombre, equipo[indiceMasAlto].altura, equipo[indiceMasAlto].edad);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción invalida. Por favor, ingrese una opción valida.\n");
                break;
        }

        printf("\n");
    } while (opcion != 4);

    return 0;
}*/

///17
/*#define elementos 5

int main() {
    float vector[elementos];
    float *puntero = vector;
    float suma = 0;
    float media;

    printf("Ingrese %d numeros reales:\n", elementos);
    for (int i = 0; i < elementos; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", puntero + i);
    }


    for (int i = 0; i < elementos; i++) {
        suma += *(puntero + i);
    }


    media = suma / elementos;

    printf("La media de los elementos es: %.2f\n", media);

    return 0;
}*/

///18
/*void multiplicar_vector(int *vector, int nElem, int numero);

int main (){

    int vector[10] ={1,2,3,4,5,6,7,8,9,10};
    multiplicar_vector(&vector[0],10,3);

    for(int i=0; i<10; i++){
        printf("%d",vector[i]);
    }
}
void multiplicar_vector(int *vector, int nElem, int numero){
    for (int i=0; i<nElem; i++){
        *(vector+i) = *(vector+i) * numero;
    }
}*/

///19
/*int main()
{

    int numero;
    printf("Introduce un numero:\n");
    scanf("%d", &numero);

    FILE *f;
    f = fopen("TABLA.TXT", "w");
    for (int i = 0; i <= 10; i++)
    {
        fprintf(f, "%d\n", i * numero);
    }
    fclose(f);

    return 0;
}*/

///20
/*int main (int argc, char *argv[]) {

    FILE *f;
    f= fopen("numeros.txt","r");
    int suma = 0, numero;

    while (feof(f) == 0){
      fscanf(f, "%d",&numero);
      suma = suma + numero;
    }


    printf("la suma de todos los ficheros es: %d\n",suma);

    fclose(f);

    return 0;
}*/

///21
/*int main () {


struct cilindro{
    float diametro;
    float carrera;
};

struct motor{

    int identificador;
    struct cilindro cilindro1;
    int num_cilindros;
    float cilindrada;
};

struct motor motor1;

printf("Introduce el identificador\n");
scanf("%d",&motor1.identificador);
printf("Introduce el diametro del cilindro\n");
scanf("%f",&motor1.cilindro1.diametro);
printf("Introduce la carrera del cilindro\n");
scanf("%f",motor1.cilindro1.carrera);
printf("Introduce el numero de cilindro\n");
scanf("%d",&motor1.num_cilindros);

motor1.cilindrada = (motor1.num_cilindros*(motor1.cilindro1.carrera/10)*3.14*pow((motor1.cilindro1.diametro/10),2))/4;

printf("Identificador: %d",motor1.identificador);
printf("Diametro(mm): %.2f",motor1.cilindro1.diametro);
printf("carrero(mm): %.2f",motor1.cilindro1.carrera);
printf("No cilindros %d",motor1.num_cilindros);
printf("cilindradas: %.2f",motor1.cilindrada);

    return 0;
}*/

///22
/*int main(){
    struct hora_entrada{
        int hora;
        int minuto;
    };

    struct entrada{
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };

    struct entrada el;

    char continuar = 's';

    while (continuar == 's'){

        printf("Introduce la hora la entrada\n");
        scanf("%d", &el.hora1.hora);
        printf("Introduce el minuto de entrada\n");
        scanf("%d",&el.hora1.minuto);
        printf("Introduce el numero de asistentes\n");
        scanf("%d",&el.asistentes);

        int total = 0;

        for (int i=0; i<el.asistentes; i++){
             int edad;
             printf("introduce la edad del asistente %d\n", (i+1));
             scanf("%d" ,&edad);
              if (edad < 6){
                total = total + 0;
            }
        }
    }


}*/

///23
/*struct producto {
    int codigo;
    char descripcion[50];
    float precio;
};

int main() {
    struct producto *prod;

    prod = malloc(sizeof(struct producto));

    if (prod == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    printf("Introduce el codigo: ");
    scanf("%d", &(prod->codigo));
    printf("Introduce la descripcion: ");
    scanf(" %49[^\n]", prod->descripcion);
    printf("Introduce el precio: ");
    scanf("%f", &(prod->precio));

    printf("Codigo del articulo: %d\n", prod->codigo);
    printf("Descripcion: %s\n", prod->descripcion);
    printf("Precio: %.2f\n", prod->precio);

    free(prod);
    prod = NULL;

    return 0;
}*/

