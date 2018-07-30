from scenario import Scenario
from engine import (
    ruleset1,
    ruleset2,
    ruleset3,
    my_decision
)


def runSimulation():
    ''' Temporarily putting a main function here to cycle through scenarios'''

    print("===========================================")
    print("THE ETHICAL ENGINE")
    print("===========================================")
    print()

    keepRunning = True
    while keepRunning:
        scene = Scenario()
        print(scene)
        print()
        result = ruleset1(scene)
        # result = ruleset2(scene)
        # result = ruleset3(scene)
        # result = my_decision(scene)
        print()
        input('Hit any key to see decision: ')
        print('I choose to save the', result)
        print()

        # For breaking the loop
        response = input("Hit 'q' to quit or 'enter' to continue: ")
        if response == 'q':
            keepRunning = False

    print('Done')


if __name__ == '__main__':
    runSimulation()
