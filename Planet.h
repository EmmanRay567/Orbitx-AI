#pragma once
#include <string>
//This Enum class represents the planets in our solar system, with each planet assigned a unique integer value starting from 0 for Mercury and ending with 7 for Neptune. 
// The enum can be used to represent the planets in a more readable and maintainable way, rather than using raw integer values.
//The Structure class represents a planet in our solar system, with properties such as its name, mass, radius, distance from the sun, orbital period, rotation period, surface temperature, and escape velocity.
//Essentially, the enum and structure classes provide a way to represent and manipulate data related to the planets in our solar system in a more organized and efficient manner.
enum class  Planets
{
	Mercury,
	Venus,
	Earth,
	Mars,
	Jupiter,
	Saturn,
	Uranus,
	Neptune
};

struct Planet
{
	Planets planet;
	std::string name;
	double mass; // in kilograms
	double radius; // in meters
	double distanceFromSun; // in meters
	double orbitalPeriod; // in seconds
	double rotationPeriod; // in seconds
	double surfaceTemperature; // in Kelvin
	double escapeVelocity; // in meters per second
	float gravity; // in meters per second squared
	// Constructor to initialize the planet's properties
	Planet(Planets p, std::string n, double m, double r, double d, double o, double rot, double temp, double ev)
		: planet(p), name(n), mass(m), radius(r), distanceFromSun(d), orbitalPeriod(o), rotationPeriod(rot), surfaceTemperature(temp), escapeVelocity(ev), gravity((6.67430e-11 * m) / (r * r)) {
	}
};
