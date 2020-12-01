<?php
// Dziwne sumowanie

// Dobra, przyszła pora na prawdziwą akcję. Pierwsza przeszkoda – znaleźliśmy przydatny klucz, który ma przestarzałe kodowanie, trzeba je rozszyfrować. Mamy ciąg cyfr, który można podzielić na grupy po cztery cyfry każda. Dla każdej czterocyfrowej grupy stwórz dwie dwucyfrowe liczby. Pierwszą liczbę tworzymy biorąc pierwszą i trzecią cyfrę grupy. Drugą liczbę tworzymy biorąc drugą i czwartą cyfrę grupy. Suma otrzymanych liczb jest kodem ASCII kolejnego znaku tajnego hasła. Twoim zadaniem jest napisanie programu dekodującego hasła z podanych sekwencji cyfr.
// Przykładowo sekwencję 24746211151814964359 dzielimy na pięć grup 2474 6211 1518 1496 4359. Następnie dla każdej grupy tworzymy dwie liczby, które będziemy dodawać: 27+44  61+21  11+58  19+46  45+39 otrzymując w ten sposób kody znaków ASCII 71 82 69 65 84. W kodzie ASCII mamy hasło: GREAT.
// Odszyfrujesz hasło? Wygląda na sporo roboty, szybciej i pewniej będzie napisać program, który zrobi to za Ciebie.

// Dane wejściowe
// Pierwsza linia danych wejściowych zawiera jedną liczbę t – liczbe przypadków testowych. Dla każdego przypadku testowego, pierwsza linia zawiera jedną dodatnią liczbę całkowitą 1 <= n <= 10 . Druga linia zawiera ciąg cyfr długości 4n będący zaszyfrowanym hasłem.

// Dane wyjściowe
// Dla każdego przypadku testowego w osobnej linii należy wypisać rozszyfrowane hasło.

// Przykład
// Wejście                  Wyjście
// 2                        GREAT
// 5                        0
// 24746211151814964359
// 1
// 2244

header('Content-Type: text/plain');

function input(): string
{
    return trim(fgets(STDIN));
}

$cases = input();
$input = [];
for ($i = 0; $i < $cases; $i++) {
    for ($j = 0; $j < 2; $j++) {
        $input[$i][$j] = input();
    }
}

foreach ($input as $case) {
    $tmp_arr = str_split($secret_message, 4);
    foreach ($tmp_arr as $tmp_cell) {
        $cell = str_split($tmp_cell);
        $ascii = ($cell[0] . $cell[2]) + ($cell[1] . $cell[3]);
        echo chr($ascii);
    }
    echo PHP_EOL;
}
