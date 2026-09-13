#pragma once
#include <string>

enum class RocketType
{
	Chemical,
	Electric,
	Nuclear,
	Hybrid
};
enum class RocketStage
{
	FirstStage,
	SecondStage,
	ThirdStage,
	FourthStage
};
struct Rocket {
	std::string name;
	RocketType type;
	RocketStage stage;
	double mass;
	double fuelCapacity;
	double currentFuel;
	double thrust;
	double maxVelocity;
	Rocket(std::string rocketName,
		RocketType rocketType,
		RocketStage rocketStage,
		double rocketMass,
		double fuelCap,
		double fuel,
		double rocketThrust,
		double velocity)
		: name(rocketName),
		type(rocketType),
		stage(rocketStage),
		mass(rocketMass),
		fuelCapacity(fuelCap),
		currentFuel(fuel),
		thrust(rocketThrust),
		maxVelocity(velocity)
	{
	}
	bool consumeFuel(double amount)
	{
		if (amount <= 0.0)
		{
			return false;
		}

		if (amount > currentFuel)
		{
			return false;
		}

		currentFuel -= amount;

		return true;
	}
};
