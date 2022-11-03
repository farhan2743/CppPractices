
d =int(input("Enter Number: "))

match d/10:
    case 9 | 8:
        print("A+")
    case 7:
        print("B")
    case _:
        print("defult")
