<?php
// Ostatnie linijki

// Prawie to mamy, ostatnie zadanie – skupmy się! Pamiętasz, jak w dawnych czasach ludzie mieli takie marne rozrywki jak gierki w kolorowe kulki? Dzięki naszym wszystkim akcjom wypadowym dowiedzieliśmy się, że jakiś totalny freak zabezpieczył sprzęt, na którym nam zależy właśnie w taki sposób. Gierka logiczna, rozumiesz? Musisz dać radę, im zrobisz to lepiej, tym większa szansa na wygraną!
// Gra logiczna JawBreaker polega na usuwaniu przylegających kulek o tym samym kolorze z prostokątnej planszy. Kulki mogą być usunięte wyłącznie kiedy stykają się bokami i tworzą grupę przynajmniej dwuelementową. Liczba zdobywanych punktów zależy od rozmiaru usuwanej grupy. Liczba punktów przyznawana za usunięcie grupy N elementowej jest równa N(N-1). Przykładowo usunięcie pary kulek premiowane jest dwoma punktami, natomiast usunięcie 8-elementowej grupy jest warte 56 (8 * 7) punktów.
// Na kulki rozmieszczone na planszy działa grawitacja – po usunięciu grupy wszystkie kulki, które były powyżej opadają pionowo w dół wypełniając puste miejsca.
// Gra kończy się w momencie, w którym na planszy nie ma już ani jednej grupy, która można usunąć. Twoim zadaniem jest zdobycie jak największej liczby punktów dla podanej planszy Jawbreakera.

// Dane wejściowe
// W pierwszej linii znajduje się liczba przypadków testowych t <= 500. W dalszej części znajdują się kolejne przypadki testowe. Pojedynczy przypadek testowy zaczyna się od pojedynczej linii zawierających trzy liczby całkowite:
//     - 4 <= H <= 50 - liczba wierszy planszy
//     - 4 <= W <= 50 - liczba kolumn planszy
//     - 3 <= C <= 20 - liczba różnych kolorów jakie moga mieć kulki na planszy
// Następnie H linii zawierających W liczb rozdzielonych spacjami. Każda z liczb należy do przedziału [0; C-1] i oznacza kolor kulki.

// Dane wyjściowe
// Dla każdego przypadku testowego należy wypisać “Y” jeśli chce się podać rozwiązanie lub “N” jeśli chce się pominąć dany przypadek testowy. W przypadku wypisania “Y“, w kolejnych liniach należy podać rozwiązanie. Rozwiązaniem jest pewna liczba linii, z których każda zawiera dwie całkowite liczby:x i y Te liczby definiują odpowiednio numer wiersza ( zatem  ) oraz numer kolumny (zatem  ). Współrzędne określone są względem lewego górnego narożnika pola gry (który ma współrzędne   ) . Po wypisaniu ostatniej pary należy wypisać linię zawierającą napis “-1 -1“.
// Twoje rozwiązanie otrzyma status “błędna odpowiedź” jeśli wykonasz jeden z następujących ruchów:
//     - współrzędne wskażą punkt poza polem gry,
//     - współrzędne na których nie ma kulki,
//     - współrzędne wskazujące grupę jednoelementową.

// Przykłady
// Wejście          Wyjście
// 1                Y
// 4 4 3            1 0
// 0 0 1 1          1 0
// 1 1 2 2          3 2
// 0 1 2 0          -1 -1
// 0 1 1 2