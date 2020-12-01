# Napisz program, który dla podanych par liczb wypisze liczbę
# większą.

for i in range(len(input)):
    if input[i][:2] > input[i][3:]:
        print(input[i][:2])
    else:
        print(input[i][3:])

