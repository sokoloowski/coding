# Napisz program, który sprawdzi wszystkie podane na wejściu
# liczby, czy są one pierwsze. Jeśli tak, wypisz True, w przeciwnym
# wypadku wypisz False.

for num in input:
    res = True
    if num > 1:
        for i in range(2, math.sqrt(num)):
            if i >= 2:
                if (num % i) == 0:
                    res = False
                    break
        print(res)

