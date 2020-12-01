# Napisz program, który wyświetli najmniejszą z liczb.

min = input[0]
for i in range(len(input)):
    if input[i] < min:
        min = input[i]
print(min)
