
#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Rocket.h"
#include "Planet.h"
//This Incoporates an AI system that can be used to simulate a NASA space mission to explore the outer planets of our solar system. The AI system uses advanced algorithms and data analysis techniques to simulate the behavior of spacecraft and their interactions with the environment of the outer planets. The goal of the AI system is to provide a realistic simulation of space exploration and to help scientists and engineers better understand the challenges and opportunities of exploring our solar system.
struct AISystem
{
	std::string name;
	std::string description;
	std::vector<std::string> capabilities;
	std::vector<std::string> limitations;
	AISystem(std::string n, std::string d, std::vector<std::string> c, std::vector<std::string> l)
		: name(n), description(d), capabilities(c), limitations(l) {
	}
};
enum class MissionType
{
	Orbital,
	Landing,
	Flyby,
	SampleReturn
};

struct AILogic
{
	std::string name;
	std::string description;
	std::vector<std::string> algorithms;
	std::vector<std::string> dataAnalysisTechniques;
	AILogic(std::string n, std::string d, std::vector<std::string> a, std::vector<std::string> dat)
		: name(n), description(d), algorithms(a), dataAnalysisTechniques(dat) {
	}
};

struct MissionAI {
	AISystem aiSystem;
	MissionType missionType;
	AILogic aiLogic;
	std::shared_ptr<Rocket> rocket;
	std::shared_ptr<Planet> planet;

	MissionAI(AISystem ai, MissionType mt, AILogic al, std::shared_ptr<Rocket> r, std::shared_ptr<Planet> p)
		: aiSystem(ai), missionType(mt), aiLogic(al), rocket(r),
		planet(p) {
	}

	std::string analyzeMission();
	std::string recommendAction();
	float calculateRiskScore();
	std::string generateMissionReport();
};
