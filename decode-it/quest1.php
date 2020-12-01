<?php
// Zepsuty soroban

// Treść zadania
// Leon, wujek Toma, ma warsztat, w którym przerabia różne klamoty, które wpadną mu w ręce. Z pozoru zwykły stolarz, ale niech Cię to nie zwiedzie – jest tam parę rzeczy, które już od dawna mamy na oku i przydałyby się nam na robocie. Jedyny sposób aby spokojnie się tam rozejrzeć, to zatrudnienie się u Leona, który może byłby i chętny, ale jest dość... oldskulowy. Ma Toma za półgłówka i jako warunek przyjęcia go do pracy wyznaczył Tomowi nauczenie się używania starego, samurajskiego liczydła, którego sam Leon używa do sumowania rachunków. Stare samurajskie liczydło nazywa się Soroban. Serio.
// Liczydło "Soroban" pozwala prowadzić obliczenia w systemie dziesiętnym. Kolejne cyfry w systemie dziesiętnym reprezentowane są przez kolejne kolumny liczydła, zaczynając od prawej. Koraliki powyżej belki reprezentują wartość 5. Każdy koralik poniżej belki reprezentuje wartość 1. Konkretną cyfrę reprezentuje się dosuwając koraliki do belki na środku. Przykład: 7 pokazuje się dosuwając koralik powyżej belki (5) oraz dwa koraliki poniżej belki (1+1).
// Podczas nauki Tom znalazł uszkodzone liczydło. Co prawda wszystkie koraliki powyżej górnej belki są na miejscu, jednak koraliki które powinny być poniżej belki wypadły, a co gorsza, część z nich się zgubiła. Tom postanowił, że naprawi liczydło tak, żeby miało jak największe możliwości. Czyli postanowił powkładać dolne koraliki do liczydła w taki sposób, żeby możliwe było reprezentowanie tak wielu liczb jak się da.
// Oczywiście sam sobie z tym nie poradzi, więc pomóż mu to zrobić, zanim Leon straci cierpliwość!

// Dane wejściowe
// Każdy zestaw danych zawiera dwie dodatnie liczby naturalne r oraz s podane w jednym wierszu i rozdzielone spacją:
//     - 1 <= r <= 8 - liczba kolumn liczydła,
//     - 0 <= s <= 4r - liczba koralików, które Johnny znalazł i chce umieścić poniżej dolnej belki liczydła.

// Dane wyjściowe
// Wypisz jedną wartość – największą liczbę poprawnych liczb, jaki można reprezentować na zepsutym Sorobanie po naprawach.

// Przykład
// Wejście          Wyjście
// 2 1              8
// 2 3              24

// Rozwiązanie T.Turka

header('Content-Type: text/plain');

function input(): string
{
    return trim(fgets(STDIN));
}

$result = 1;

list($r, $s) = explode(' ', input());
$rest = $s % $r;
$s -= $rest;
$a = $s / $r;
$result = (((1 + $a) * 2) ** ($r - $rest)) * (((2 + $a) * 2) ** $rest);
echo $result . PHP_EOL;
