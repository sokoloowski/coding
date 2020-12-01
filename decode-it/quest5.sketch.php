<?php
// Odporność sieci społecznościowych

// Trackerzy z naszej ekipy, Alice i Rob, potrzebują Twojej pomocy. Bardzo zainteresowali się sieciami społecznymi i mają kilka pomysłów jak możemy je wykorzystać przy naszym zleceniu.

// – “Al, wierzysz w zalecenia dawane Ci przez kolesi, których nie znasz osobiście?” – spytał Robert
// – “Nie.” – odpowiedziała Alicja
// – “Ale jak twój ziomek daje Ci tipa, to raczej mu ufasz?” – drążył Rob
// – “Dokładnie, wtedy to co innego” – odpowiedziała Alice
// – “Właśnie, ja mam tak samo. A gdyby ktoś chciał wpłynąć na całą sieć społeczną?” – zapytał Rob
// – “Jeśli w danej sieci istnieje osoba, powiedzmy A, która jest w prywatnej relacji z całą resztą, to wystarczy kontrolować konto tej osoby, żeby móc wpływać na całą sieć.” – kontynuował Robert
// – “Czyli odporność sieci na takie ataki zależy od jej struktury?” – zauważyła Alice
// – “Totalnie! I dokładnie to musimy rozgryźć.” – potwierdził Rob

// Kilka godzin później oboje zgodzili się na następujący model: dla sieci społecznej o n członkach i symetrycznej relacji przyjaźni (tzn. jeśli A jest przyjacielem B to również B jest przyjacielem A. Dodatkowo, każdemu członkowi A przypisujemy dodatnią liczbę całkowitą W(A). Liczbę W(A) interpretujemy jako koszt przejęcia kontroli nad kontem członka A.
// Zadanie jakie postawili sobie nasi trackerzy polega na znalezieniu takiego zbioru członków sieci społecznej D, że każdy członek sieci społecznej albo należy do tego zbioru albo przyjaźni się z kimś kto do tego zbioru należy. Dodatkowo Alice i Rob chcieliby znaleźć taki zbiór D, dla którego koszt przejęcia kont należących do tego zbioru jest możliwie najmniejszy.
// Pomóż im to ogarnąć, a będziemy o krok bliżej do udziału w ważnym dla nas konkursie!

// Dane wejściowe
// W pierwszej linii danych wejściowych znajduje się liczba całkowita nbędąca liczbą członków sieci społecznej. W kolejnych n liniach znajdują się dane w następującym formacie:
//     name_i W(name_i)
// To znaczy najpierw nazwa i-tego członka sieci będąca ciągiem co najwyżej 15 znaków. Następnie liczba całkowita 1 <= W(name_i) <= 100 będąca kosztem przejęcia konta tego członka. Kolejna linia danych wejściowych zawiera liczbę całkowitą m będącą liczbą relacji przyjaźni między członkami sieci społecznej. W kolejnych m liniach znajdują się dane w następującym formacie:
//     name_x name_y
// To znaczy nazwy dwóch różnych członków o których wiadomo, że są przyjaciółmi.

// Dane wyjściowe
// W pierwszej linii danych wyjściowych wypisz liczbę d będącą liczbą członków w wyznaczonym zbiorze D. Następnie w kolejnych d liniach wypisz nazwy członków zbioru D.
// Na koniec, w ostatniej linii danych wejściowych wypisz jedną liczbę będącą sumarycznym kosztem przejęcia wszystkich kont ze zbioru D.

// Sposób punktacji
// Liczba punktów jaką uzyska Twoje rozwiązanie zostanie obliczone jak S/S_d , gdzie S jest sumarycznym kosztem przejęcia wszystkich kont sieci społecznej a S_d jest sumarycznym kosztem przejęcia wszystkich kont ze zbioru D.
// Wynik końcowy jest czterokrotnością sumy wyników uzyskanych przez Twój program dla wszystkich poprawnie rozwiązanych przypadków testowych.
// Zadanie zostaje uznane za rozwiązane jeśli Twój program rozwiąże przynajmniej jedne przypadek testowy i jako wynik końcowy uzyska ponad 20 puntów.

// Przykład
// Wejście          Wyjście
// 5                2
// Robert 12        Daniel
// Julia 23         Carol
// Adam 1           14
// Carol 10
// Daniel 4
// 5
// Robert Julia
// Robert Carol
// Adam Robert
// Daniel Adam
// Daniel Julia

header('Content-Type: text/plain');

function input(): string
{
    return trim(fgets(STDIN));
}

$n = input();
$accounts = [];
for ($i = 0; $i < $n; $i++) {
    $acc = explode(' ', input());
    $accounts[$acc[0]]['value'] = $acc[1];
}
$m = input();
for ($i = 0; $i < $m; $i++) {
    $rel = explode(' ', input());
    $accounts[$rel[0]]['relatives'][] = $rel[1];
    $accounts[$rel[1]]['relatives'][] = $rel[0];
}

print_r($accounts);
