def main():
    food = input("What food is being investigated? ")
    print(food)
    a = float(input("How many people ate " + food + " and got sick? "))
    print(a)
    b = float(input("How many people ate " + food + " and did NOT get sick? "))
    print(b)
    c = float(input("How many people did NOT eat " + food + " and got sick? "))
    print(c)
    d = float(input("How many people did NOT eat " + food + " and did NOT get sick? "))
    print(d)
    print("The relative risk of " + str(food) + " is:")
    risk_exposed = a / (a + b)
    risk_unexposed = c / (c + d)
    relative_risk = risk_exposed / risk_unexposed
    print(relative_risk)


if __name__ == "__main__":
    main()
