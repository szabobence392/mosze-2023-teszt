#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; 
    // HIBA: NELEMENTS nincs deklarálva (helyesen N_ELEMENTS lenne)

    std::cout << '1-100 ertekek duplazasa'
    // HIBA: hiányzó pontosvessző a sor végén
    // HIBA: karakter literál (' ') használata string (" ") helyett

    for (int i = 0;)
    // HIBA: hibás for ciklus szintaxis (hiányzik a feltétel és az inkrementálás)
    {
        b[i] = i * 2;
        // HIBA: a ciklus így végtelen lenne / nem definiált működés
    }

    for (int i = 0; i; i++)
    // HIBA: a ciklus feltétele hibás (i; nem megfelelő logikai feltétel)
    {
        std::cout << "Ertek:"
        // HIBA: hiányzó pontosvessző
        // HIBA: nem ír ki konkrét értéket (b[i])
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    int atlag;
    // HIBA: az atlag változó nincs inicializálva

    for (int i = 0; i < N_ELEMENTS, i++)
    // HIBA: vessző van pontosvessző helyett a for feltételben
    {
        atlag += b[i]
        // HIBA: hiányzó pontosvessző
        // HIBA: nem inicializált változóhoz adunk hozzá
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}

