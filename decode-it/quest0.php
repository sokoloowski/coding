<?php
// Warm up

// Na dobry początek zajmiemy się czymś, co da Ci dobry pogląd na to z czym trzeba będzie się zmierzyć. Jedna osoba z naszej ekipy pracuje nad miejscem, które będzie dobre jako punkt obserwacyjny do kolejnego zlecenia. Spory ogród na dachu jednego z okolicznych biurowców wydaje się do tego idealny. Tom z naszej grupy zatrudnił się tam jako ogrodnik, aby mieć lepszy dostęp do miejsca i wtopić się w tłum.
// Jednym z obowiązków Toma jest odpowiednie dbanie o rośliny. Ma przynieść specjalny nawóz, którym nawilży każdą z nich. Na każdy metr kwadratowy przypada jedna paczka nawozu, a ogród ma C metrów kwadratowych. Tom ma plecak, ale jest słaby i udźwignie tylko K kilogramów, gdzie każda paczka waży W kg. Pomóż mu ogarnąć czy da radę przynieść wszystko jak należy tak, aby go nie wylali i nie spalił miejscówki.

// Dane wejściowe
// W pierwszej linii jedna dodatnia liczba całkowita t≤100 oznaczająca liczba testów (Tom został poproszony o przyniesienie odżywek kilka razy). Następnie t linii, każda zawierająca trzy liczby: c, k, w, gdzie 1 <= c,k,w <= 100.
// t [liczba testów]
// c k w [liczba metrów, udźwig Toma oraz waga nawozu]
// c k w [następny test]
// ...

// Dane wyjściowe
// Wypisz t linii zawierających słowo “yes” jeśli Tom jest w stanie wykonać zadanie lub “no” jeśli nawóz przeciąży go i nie dałby rady go donieść.

// Przykład
// Wejście          Wyjście
// 3                yes
// 5 15 3           yes
// 1 5 4            no
// 13 25 2

header('Content-Type: text/plain');

function input(): string
{
    return trim(fgets(STDIN));
}

$ile_testow = (int) input();
$tests = [];
for ($i = 0; $i < $ile_testow; $i++) {
    $tests[] = input();
}

foreach ($tests as $single_test) {
    $test = explode(' ', $single_test);
    $surface = (int) $test[0];
    $capacity = (int) $test[1];
    $weight = (int) $test[2];
    if ($weight * $surface <= $capacity) echo 'yes' . PHP_EOL;
    else echo 'no' . PHP_EOL;
}
