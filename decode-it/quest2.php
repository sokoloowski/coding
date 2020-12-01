<?php
// Tajemnica liczby 6174

// Skrzynki z narzędziami znalezione w warsztacie Leona okazały się dopiero połową roboty. Stary cwaniak zabezpieczył się przed nieproszonymi gośćmi w dodatkowy sposób – czterocyfrowym kodem na każdej ze skrzyń. Dzięki znalezionej obok notatce, udało Ci się rozkminić, że chodzi o 6174, ale dlaczego tak to działa?
// Z notatki wynika, że mamy pewną czterocyfrową liczbę, na przykład 4223. Z niej możemy zrobić dwie nowe liczby czterocyfrowe, sortując cyfry wyjściowej liczby raz w porządku nierosnącym i raz w porządku niemalejącym – w tym przypadku 4322 oraz 2234. Następnie trzeba te liczby od siebie odjąć. Powtarzając procedurę po jakimś czasie zawsze wychodzi 6174… Wychodzić wychodzi, ale dlaczego? A zresztą... potwierdź tylko dla kilku liczb, że faktycznie chodzi o 6174. Nie ma zbyt wiele czasu, miejmy nadzieję, że ta własność ujawnia się szybko.
// 4332 – 2334 = 1998
// 9981 – 1899 = 8082
// 8820 – 0288 = 8532
// 8532 – 2358 = 6174
// 7641 – 1467 = 6174
// ...

// Dane wejściowe
// W pierwszej linii danych wejściowych znajduje się pojedyncza liczba t, która jest liczbą przypadków do rozważenia. Kolejne t linii zawierają pojedyncze liczby naturalne a, gdzie 1000 <= a <= 9999.

// Dane wyjściowe
// Dla każdej liczby a wypisz w osobnej linii liczbę kroków przedstawionej procedury, po których osiągnięta zostanie tajemnicza liczba 6174. Jeśli w procedurze nie da się otrzymać tajemniczej liczby 6174, to należy wypisać liczbę -1.

// Przykład
// Wejście          Wyjście
// 5                0
// 6174             3
// 4223             2
// 2088             1
// 8532             5
// 1112

header('Content-Type: text/plain');

function input(): string
{
    return trim(fgets(STDIN));
}

function decode_pin($number, $tries = 0)
{
    while (strlen($number) < 4) $number .= '0';
    if ($number == 6174) echo $tries . PHP_EOL;
    else if ($number == 0) echo '-1' . PHP_EOL;
    else {
        $arr = str_split($number);
        sort($arr);
        decode_pin(implode('', array_reverse($arr)) - implode('', $arr), $tries + 1);
    }
}

$cases = input();
$codes = [];
for ($i = 0; $i < $cases; $i++) {
    $codes[] = input();
}

foreach ($codes as $code) {
    decode_pin(trim($code));
}
