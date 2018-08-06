#include <iostream>
#include "ethicalengine.h"
using namespace std;

int main(int argc, char** argv) {
    int seed = getSeed(argc, argv);
    runSimulation(seed);
    return 0;
}

/**
 * Decides whether your car will save the passengers or pedestrians.
 * - Save the passenger, if and only if they are pregnant.
 * Note: in this activity, there will only be one passenger and one pedestrian.
 * @param scenario: details about the scenario
 * @return: "passengers" or "pedestrians" depending on who you want to save
 */
string ruleset1(Scenario scenario) {
    Person passenger = scenario.getPassengers()[0];
    Person pedestrian = scenario.getPedestrians()[0];
    // TODO: Fill in the method
    return "passengers";
}

/**
 * Decides whether your car will save the passengers or pedestrians.
 * - Save the pedestrian, if they are crossing legally or if they are a child.
 * Note: in this activity, there will only be one passenger and one pedestrian.
 * @param scenario: details about the scenario
 * @return: "passengers" or "pedestrians" depending on who you want to save
 */
string ruleset2(Scenario scenario) {
    Person passenger = scenario.getPassengers()[0];
    Person pedestrian = scenario.getPedestrians()[0];
    // TODO: Fill in the method
    return "passengers";
}

/**
 * Decides whether your car will save the passengers or pedestrians.
 * - The first priority is to save the person who is a baby.
 * - The second priority is to save athletic people.
 * - The third priority is to save people who are either a doctor or a CEO.
 * - The fourth priority is to save females.
 * - The fifth priority is to save the passenger.
 * Note: in this activity, there will only be one passenger and one pedestrian.
 * @param scenario: details about the scenario
 * @return: "passengers" or "pedestrians" depending on who you want to save
 */
string ruleset3(Scenario scenario) {
    Person passenger = scenario.getPassengers()[0];
    Person pedestrian = scenario.getPedestrians()[0];
    // TODO: Fill in the method
    return "passengers";
}

/**
 * Decides whether to save the passengers or the pedestrians
 * - Your own decision algorithm.
 * Note: in this activity, there will only be one passenger and one pedestrian.
 * @param Scenario scenario: the ethical dilemma
 * @return Decision: which group to save
 */
string decide(Scenario scenario) {
    Person passenger = scenario.getPassengers()[0];
    Person pedestrian = scenario.getPedestrians()[0];    // TODO: Implement your own decision engine!
    // TODO: Fill in the method
    return "passengers";
}
