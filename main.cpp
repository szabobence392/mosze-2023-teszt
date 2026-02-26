#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // ❌ Hibás konstansnév (NELEMENTS nem létezik)
    // int *b = new int[NELEMENTS];
    int *b = new int[N_ELEMENTS];

    // ❌ Hiányzó pontosvessző, és karakter literál helyett string kell
    // std::cout << '1-100 ertekek duplazasa'
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    // ❌ Hibás for ciklus (nincs feltétel és nincs inkrementálás)
    // for (int i = 0;)
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }

    // ❌ Hibás feltétel (i; mindig igaz amíg i != 0)
    // ❌ Hiányzó kiírandó változó és pontosvessző
    // for (int i = 0; i; i++)
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // std::cout << "Ertek:"
        std::cout << "Ertek: " << b[i] << std::endl;
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    // ❌ Inicializálatlan változó
    // int atlag;
    int atlag = 0;

    // ❌ Hibás for szintaxis (vessző helyett pontosvessző kell)
    // ❌ Hiányzó ciklusblokk kapcsos zárójel
    // for (int i = 0; i < N_ELEMENTS, i++)
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // ❌ Hiányzó pontosvessző
        // atlag += b[i]
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b;  // ❗ Memóriaszivárgás elkerülése
    std::cout << "Radics Peti ORBÁN - A BUKÁS PARÓDIA" << std::endl;

    return 0;
}

