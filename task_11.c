#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER_OF_ITERATIONS 1000000

double randomdouble(double min, double max)
{
        double range = (max - min);
        double quotient = RAND_MAX / range;
        return min + (rand() / quotient);
}

double montecarlo(double r)
{
        srand(time(NULL));
        // Algoritmen för Monte Carlo-integrering ser ut så här:
        // 1. Initiera en variabel för totalsumma: S <- 0.
        // 2. Initiera en variabel för skattning av arean: A.
        // 3. Initiera en räknare: i <- 0.
        // 4. Iterera följande tills du tror dig ha uppnått tillräcklig noggrannhet.
        //    (a) Stega upp räknaren: i <- i + 1.
        //    (b) Generera ett slumptal inom intervallet. (En blå punkt i bilden ovan.)
        //        För ett kvadratiskt intervall behöver du generera en tvådimensionell
        //        koordinat, det vill säga ett slumpvärde för x och ett för y. Tänk på att för
        //        ett intervall som den röda kvadraten i figuren här måste koordinaterna
        //        ligga på intervallet [−r, +r].
        //        Här ska du alltså skapa slumpvis valda flyttal i stället för heltal, som i
        //        den förra uppgiften. För att få ett värde mellan 0 och 1 kan du dividera
        //        talet du får från rand med konstanten RAND_MAX. Men, eftersom de båda
        //        talen är heltal kommer det att bli heltalsdivision om du bara skriver
        //        rand()/RAND_MAX, och det är ju inte det du vill ha. Därför behöver du
        //        använda explicit typomvandling (cast) för att göra om minst ett av
        //        heltalen till flyttal: t. ex. med (double)(rand())/RAND_MAX.
        //        (Beräkningen ovan ger ett slumptal mellan 0 och 1. Men hur gör man
        //        för att få ett tal mellan −r och +r?)
        //    (c) Beräkna värdet av funktionen som ska integreras för den genererade
        //        punkten. I vårt fall har funktionen värdet 1 om punkten ligger innanför
        //        cirkeln, och 0 annars. Här måste du alltså kolla om din slumpvis valda
        //        punkt (x, y) ligger innanför cirkeln; med andra ord, om sqrt(x**2 + y**2) <= r,
        //        eller motsvarande (för att slippa beräkna en kvadratrot): x**2 + y**2 <= r**2.
        //    (d) Multiplicera värdet du fick (0 eller 1) med arean för integreringsintervallet
        //        (det vill säga kvadraten); alltså med (2r)**2.
        //    (e) Addera värdet till totalsumman som du räknar upp.
        //    (f) Ändra den nuvarande uppskattningen av arean till A <- S / i.
        // 5. Returnera A.

        double S = 0;
        double A = 0;
        long i = 0;

        while (i < NUMBER_OF_ITERATIONS)
        {
                i += 1;
                double x = randomdouble(-r, r);
                double y = randomdouble(-r, r);
                S += (2 * r) * (2 * r) * (x * x + y * y <= r * r);
        }

        A += S / i;

        return A;
}

int main(int argc, char *argv[])
{
        double r = strtod(argv[1], NULL);
        double A = montecarlo(r);
        printf("%lf\n", A);
        return 0;
}