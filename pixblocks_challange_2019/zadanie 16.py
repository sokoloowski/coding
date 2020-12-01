# Narysuj szachownicę składającą się z X i O. Wielkość
# szachownicy podana jest na wejściu.

for i in range(input[0]):
    line=''
    for j in range(input[0]):
        if (i%2) == 0:
            if (j%2) == 0:
                line = line+'O ';
            else:
                line = line+'X ';
        else:
            if (j%2) == 0:
                line = line+'X ';
            else:
                line = line+'O ';
    print(line[:-1])