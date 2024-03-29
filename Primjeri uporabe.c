// 1.Kratka sintaksa za jednostavne uvjete:
#include <stdio.h>

void _1() {
    char *stanje = "otvoreno";
    char *poruka =
        (stanje == "otvoreno") ? "Dobrodošli!" : "Trenutno zatvoreno.";

    printf("%s\n", poruka);  // Output: Dobrodošli!

    return 0;
}

// 2.Provjeravanje više uvjeta koristeći uvjetni operator:

void _2() {
    int broj = 75;

    (broj > 100)  ? printf("Broj je veći od 100.\n")
    : (broj > 50) ? printf("Broj je veći od 50, ali manji ili jednak 100.\n")
                  : printf("Broj je manji ili jednak 50.\n");

    // Output: Broj je veći od 50, ali manji ili jednak 100.

    return 0;
}

// 3.Uvjetno izvršavanje blokova koda:

void _3() {
    int broj = 7;

    (broj % 2 == 0) ? printf("Broj je paran.\n") : printf("Broj je neparan.\n");

    // Output: Broj je neparan.

    return 0;
}

// 4.Ispisivanje poruke na temelju uvjeta:

void _4() {
    int broj = 15;

    (broj > 10) ? printf("Broj je veći od 10.\n")
                : printf("Broj je manji ili jednak 10.\n");

    // Output: Broj je veći od 10.

    return 0;
}

// 5.Dodjela vrijednosti varijabli na temelju uvjeta:

void _5() {
    int x = 10;
    int y = 5;

    // Ako je x veći od y, dodijeli mu vrijednost 100, inače dodijeli 0
    int rezultat = (x > y) ? 100 : 0;

    printf("%d\n", rezultat);  // Output: 100

    return 0;
}

//6. Ako je broj veći od 0, ispisati će njegov kvadrat, ako je manji ,0.

#include<stdio.h>

void_6(){
 int a;
 printf("Upisite cijeli broj: ");
 scanf("%d",&a);
 (a>0) ? printf("%d",a*a)
        :printf("%d",a-a);
 return 0; 
}
