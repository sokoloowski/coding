for i in input:
    line = i.split("	")
    if (int(line[0]) + int(line[1])) == 0:
        print(True)
    else:
        print(False)

