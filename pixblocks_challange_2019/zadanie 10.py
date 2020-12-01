for line in input:
    x = 0
    y = 0
    line = line.split(" ")
    for move in line:
        if move == "U":
            y += 1
        if move == "D":
            y -= 1
        if move == "R":
            x += 1
        if move == "L":
            x -= 1
    if x == 0:
        if y == 0:
            print(True)
        else:
            print(False)
    else:
        print(False)

