# Narysuj prostokąt z *, o wymiarach podanych na wejściu. Pierwsza
# dana liczba odpowiada za szerokość prostokąta, a druga za
# wysokość.

width = input[0]
height = input[1]
print("*" * width)
for i in range(2, height):
    print("*" + (" " * (width - 2)) + "*")
print("*" * width)

