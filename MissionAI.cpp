//This File Incoporates the implementation of the MissionAI class, which is responsible for simulating a NASA space mission to explore the outer planets of our solar system. The MissionAI class uses advanced algorithms and data analysis techniques to simulate the behavior of spacecraft and their interactions with the environment of the outer planets. The goal of the MissionAI class is to provide a realistic simulation of space exploration and to help scientists and engineers better understand the challenges and opportunities of exploring our solar system.
#include "MissionAI.h"
std::string MissionAI::analyzeMission() {
	missionType = missionType;
	if (missionType == MissionType::Orbital){
		return "Analyzing orbital mission parameters...";
	}
	else if (missionType == MissionType::Landing) {
		return "Analyzing landing mission parameters...";
	}
	else if (missionType == MissionType::Flyby) {
		return "Analyzing flyby mission parameters...";
	}
	else if (missionType == MissionType::SampleReturn) {
		return "Analyzing sample return mission parameters...";
	}
	else {
		return "Unknown mission type.";
	}
	return "Mission analysis complete.";
}

std::string MissionAI::recommendAction() {
	if (missionType == MissionType::Orbital) {
		return "Recommend adjusting orbital parameters for optimal trajectory.";
	}
	else if (missionType == MissionType::Landing) {
		return "Recommend preparing landing sequence and descent trajectory.";
	}
	else if (missionType == MissionType::Flyby) {
		return "Recommend adjusting flyby trajectory for maximum data collection.";
	}
	else if (missionType == MissionType::SampleReturn) {
		return "Recommend preparing sample collection and return trajectory.";
	}
	else {
		return "Unknown mission type. No recommendations available.";
	}
}
std::string MissionAI::generateMissionReport() {
	std::string report = "Mission Report:\n";
	report += "AI System: " + aiSystem.name + "\n";
	report += "Mission Type: ";
	switch (missionType) {
	case MissionType::Orbital:
		report += "Orbital\n";
		break;
	case MissionType::Landing:
		report += "Landing\n";
		break;
	case MissionType::Flyby:
		report += "Flyby\n";
		break;
	case MissionType::SampleReturn:
		report += "Sample Return\n";
		break;
	default:
		report += "Unknown\n";
		break;
	}
	report += "Rocket: " + rocket->name + "\n";
	report += "Planet: " + planet->name + "\n";
	report += "Risk Score: " + std::to_string(calculateRiskScore()) + "\n";
	return report;
}
float MissionAI::calculateRiskScore() {
	float riskScore = 0.0f;
	if (missionType == MissionType::Orbital) {
		riskScore += 10.0f;
	}
	else if (missionType == MissionType::Landing) {
		riskScore += 20.0f;
	}
	else if (missionType == MissionType::Flyby) {
		riskScore += 5.0f;
	}
	else if (missionType == MissionType::SampleReturn) {
		riskScore += 15.0f;
	}
	if (rocket->currentFuel < rocket->fuelCapacity * 0.2) {
		riskScore += 10.0f; // Increase risk score if fuel is low
	}
	if (planet->surfaceTemperature < 200 || planet->surfaceTemperature > 400) {
		riskScore += 10.0f; // Increase risk score for extreme temperatures
	}
	if (planet->gravity < 5.0f || planet->gravity > 15.0f) {
		riskScore += 10.0f; // Increase risk score for extreme gravity
		if (rocket->thrust < planet->escapeVelocity) {
			riskScore += 10.0f; // Increase risk score if rocket thrust is insufficient for escape velocity
		}
		if (rocket->maxVelocity < planet->escapeVelocity) {
			riskScore += 20.0f; // Increase risk score if rocket max velocity is insufficient for escape velocity
		}
	}
	return riskScore;
}
