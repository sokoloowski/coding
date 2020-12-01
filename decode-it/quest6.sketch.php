<?php
// Kampus technologiczny

// Potrzebujemy kontrolować miejsce, w którym ma powstać kampus technologiczny. Ogłosili konkurs i musimy go wygrać, żeby nasz projekt został wdrożony. Ułatwi to dużo rzeczy i musisz nam w tym pomóc.
// Zdecydowano, że w fazie wstępnej projekty zostaną poddane ocenie parametrycznej, w której jednym z elementów jest koszt stworzenia i utrzymania Kampusu, a to z kolei zależy od długości ogrodzenia, jakie trzeba będzie wokół niego wybudować. Obiekty, które będą umieszczone w Kampusie mają nieregularne kształty, ponadto konieczne jest zagwarantowanie wolnej przestrzeni parku wokół każdego obiektu, dlatego ustalono, że dobrym przybliżeniem będzie plan, na którym obiekty wraz z wolną przestrzenią wokół będą zaznaczone jako okręgi. Twoim zadaniem jest dla każdego planu oszacowanie najmniejszej możliwej długości ogrodzenia budowanego w taki sposób, aby Kampus stanowił jeden spójny obszar.

// Dane wejściowe
// W pierwszej linii liczba testów t. Dla każdego testu w pierwszej linii liczba okręgów n i w kolejnych liniach dla każdego okręgu trzy liczby całkowite -1000 <= x,y,z <=1000 , współrzędne środka i promień okręgu odpowiednio. Nie należy zakładać, że okręgi się nie przecinają lub, że nie są położone jeden wewnątrz drugiego.

// Dane wyjściowe
// Dla każdego testu w oddzielnej linii jedna liczba będąca minimalną długością ogrodzenia wokół kampusu.

header('Content-Type: text/plain');

function input(): string
{
    return trim(fgets(STDIN));
}

$t = input();
$cases = [];

for ($i = 0; $i < $t; $i++) {
    list(
        $cases[$i]['x'],
        $cases[$i]['y'],
        $cases[$i]['z']
    ) = explode(' ', input());
}
