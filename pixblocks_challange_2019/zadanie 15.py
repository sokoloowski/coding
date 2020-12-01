width = input[0] * 2 - 1
height = input[0]
for h in range(height):
    print " " * h + "*" * (width - 2 * h) + " " * h
print "" # I have no idea why to print this, but it's required

