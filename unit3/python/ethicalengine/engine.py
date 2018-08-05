from scenario import Scenario


def ruleset1(scenario: Scenario) -> str:
    """
    Decides whether your car will save the passengers or pedestrians.
    - Save the passenger, if and only if they are pregnant.
    Note: in this activity, there will only be one passenger and one pedestrian.
    @param scenario: details about the scenario
    @return: "passengers" or "pedestrians" depending on who you want to save
    """
    return "passengers"


def ruleset2(scenario: Scenario) -> str:
    """
    Decides whether your car will save the passengers or pedestrians.
    - Save the passenger, if and only if they are pregnant.
    Note: in this activity, there will only be one passenger and one pedestrian.
    @param scenario: details about the scenario
    @return: "passengers" or "pedestrians" depending on who you want to save
    """
    return "passengers"


def ruleset3(scenario: Scenario) -> str:
    """
    Decides whether your car will save the passengers or pedestrians.
    - The first priority is to save the youngest person.
    - The second priority is to save athletic people.
    - The third priority is to save people who are either a doctor or a CEO.
    - The fourth priority is to save females.
    - The fifth priority is to save the passenger.
    Note: in this activity, there will only be one passenger and one pedestrian.
    @param scenario: details about the scenario
    @return: "passengers" or "pedestrians" depending on who you want to save
    """
    return "passengers"


def my_decision(scenario: Scenario) -> str:
    """
    Decides whether your car will save the passengers or pedestrians.
    - Your own decision algorithm.
    Note: in this activity, there will only be one passenger and one pedestrian.
    @param scenario: details about the scenario
    @return: "passengers" or "pedestrians" depending on who you want to save
    """
    return "passengers"
