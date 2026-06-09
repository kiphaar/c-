#include <iostream>
 
int main()
{
    int keuze;
 
    std::cout << "je wordt wakker in een kapot huisje in een regenwoud" << '\n';
    std::cout << "je kijkt rond en je ziet een speer liggen" << '\n';
    std::cout << "wat doe je?" << '\n';
    std::cout << "1. pak de speer op" << '\n';
    std::cout << "2. blijf binnen" << '\n';
 
    std::cin >> keuze;
 
    if (keuze == 1)
    {
        std::cout << "je pakt de speer op en gaat naar buiten" << '\n';
        std::cout << "het is heel benauwd buiten en overal zijn smerige insecten" << '\n';
 
        std::cout << "je loopt dieper het bos in om eten te zoeken" << '\n';
        std::cout << "je ziet een wilde zwijn met een baby'tje" << '\n';
 
        int keuze2;
        std::cout << "wat doe je?" << '\n';
        std::cout << "1. je doodt de zwijn met de speer en laat de baby alleen zonder moeder" << '\n';
        std::cout << "2. je doodt de zwijn en neemt de baby mee" << '\n';
 
        std::cin >> keuze2;
 
        if (keuze2 == 1)
        {
            std::cout << "je doodt de zwijn maar de baby is heel verdrietig en gaat huilen" << '\n';
            std::cout << "de baby trekt aan je broek" << '\n';
        }
        else if (keuze2 == 2)
        {
            std::cout << "je doodt de zwijn en neemt de baby mee" << '\n';
            std::cout << "de baby is opgelucht en gaat niet huilen" << '\n';
            std::cout << "je hebt eten voor een paar dagen" << '\n';
        }
        else
        {
            std::cout << "Ongeldige keuze. Je gaat dood" << '\n';
            return 0;
        }
 
        std::cout << "je gaat verder het bos in en je ziet een rivier" << '\n';
 
        int keuze4;
        std::cout << "wat doe je?" << '\n';
        std::cout << "1. je gebruikt het voor water" << '\n';
        std::cout << "2. je loopt langs de rivier in hoop dat je een dorp vindt" << '\n';
 
        std::cin >> keuze4;
 
        if (keuze4 == 1)
        {
            std::cout << "je gebruikt het voor water en je blijft gezond" << '\n';
            std::cout << "je hebt genoeg water voor een paar dagen" << '\n';
 
            std::cout << "je loopt hopeloos rond en je kan niks vinden" << '\n';
            std::cout << "je wordt moe en hongerig" << '\n';
 
            int keuze5;
            std::cout << "wat doe je?" << '\n';
            std::cout << "1. je gaat liggen en hoopt dat iemand je vindt" << '\n';
            std::cout << "2. je gaat een tijger zoeken om mee te vechten omdat je toch niks anders kunt doen" << '\n';
 
            std::cin >> keuze5;
 
            if (keuze5 == 1)
            {
                std::cout << "niemand vindt je en je gaat dood" << '\n';
            }
            else if (keuze5 == 2)
            {
                std::cout << "je vecht met de tijger maar hij is te sterk en je gaat dood" << '\n';
            }
            else
            {
                std::cout << "Ongeldige keuze. Je gaat dood" << '\n';
            }
        }
        else if (keuze4 == 2)
        {
            std::cout << "je loopt langs de rivier en je vindt een dorp" << '\n';
            std::cout << "de mensen in het dorp zijn vriendelijk maar je hebt er een raar gevoel over" << '\n';
 
            int keuze5;
            std::cout << "wat doe je?" << '\n';
            std::cout << "1. je gaat het dorp uit en volgt een bordje" << '\n';
            std::cout << "2. je blijft daar" << '\n';
 
            std::cin >> keuze5;
 
            if (keuze5 == 1)
            {
                std::cout << "je komt veilig weg en je ziet je thuis stad in de verte" << '\n';
                std::cout << "je voelt je opgelucht en loopt naar huis" << '\n';
            }
            else if (keuze5 == 2)
            {
                std::cout << "de mensen komen allemaal naar je toe" << '\n';
                std::cout << "ze hebben grote messen bij hun" << '\n';
                std::cout << "je maken je dood." << '\n';
            }
            else
            {
                std::cout << "Ongeldige keuze. Je gaat dood" << '\n';
            }
        }
        else
        {
            std::cout << "Ongeldige keuze. Je gaat dood" << '\n';
        }
    }
    else if (keuze == 2)
    {
        std::cout << "je blijft binnen en zoekt naar eten" << '\n';
        std::cout << "het huisje is heel vies" << '\n';
 
        std::cout << "je vindt een kastje met een blikje eten" << '\n';
        std::cout << "het blikje is al 3 jaar over de datum" << '\n';
 
        int keuze3;
        std::cout << "wat doe je?" << '\n';
        std::cout << "1. je eet het blikje eten met de kans op ziekte" << '\n';
        std::cout << "2. je laat het blikje eten liggen" << '\n';
 
        std::cin >> keuze3;
 
        if (keuze3 == 1)
        {
            std::cout << "je eet het blikje eten en je voelt je niet goed" << '\n';
            std::cout << "je ziet de wereld vervagen" << '\n';
            std::cout << "je wordt wakker bij een cannibalen ritueel en je wordt levend opgegeten" << '\n';
        }
        else if (keuze3 == 2)
        {
            std::cout << "je laat het blikje eten liggen" << '\n';
            std::cout << "je blijft hongerig" << '\n';
            std::cout << "je durft niet naar buiten en je hebt geen eten" << '\n';
            std::cout << "je gaat uiteindelijk dood door honger" << '\n';
        }
        else
        {
            std::cout << "Ongeldige keuze. Je gaat dood" << '\n';
        }
    }
    else
    {
        std::cout << "Ongeldige keuze. Je gaat dood" << '\n';
    }
 
    return 0;
}