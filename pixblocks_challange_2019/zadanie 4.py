for i in input:
    line = i.split("	")
    if line[2] <= line[1]:
        if line[3] >= line[0]:
            print(True)
    else:
        print(False)

