// Orbitx AI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This project is Orbitx AI, a C++ project that simulates a NASA space mission to explore the outer planets of our solar system.
//The project uses advanced algorithms and data analysis techniques to simulate the behavior of spacecraft and their interactions with the environment of the outer planets. The goal of the project is to provide a realistic simulation of space exploration and to help scientists and engineers better understand the challenges and opportunities of exploring our solar system.
#include "MissionAI.h"
#include "Rocket.h"
#include "Planet.h"
#include <string>	
#include <algorithm>
#include <memory>
#include <cmath>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <optional>
using namespace std;
MissionType MissionTypeSelection(string missionInput);
shared_ptr<Rocket> RocketSelection(string rocketInput);
shared_ptr <Planet> PlanetSelection(string planetInput);
MissionAI CreateMissionAI(
	shared_ptr<Rocket> rocket,
	shared_ptr<Planet> planet,
	MissionType missionType
);
void RunMissionVisual(
	shared_ptr<Rocket> rocket,
	shared_ptr<Planet> planet,
	MissionType missionType
);
int main()
{
	string rocketInput;
	cout << "Welcome to OrbitX! This is a NASA Space Mission Simulation designed to explore the outer planets of our solar system." << endl;
    cout << "Select a rocket:" << endl;
    cout << "1. Falcon 9" << endl;
    cout << "2. Starship" << endl;
    cout << "3. SLS" << endl;
    cout << "4. New Glenn" << endl;
    cout << "5. Electron" << endl;
    cout << "6. Ariane 5" << endl;
    cout << "7. Long March 5" << endl;
    cout << "8. H3" << endl;
    cout << "9. Vega" << endl;

	cin >> rocketInput;

	shared_ptr<Rocket> selectedRocket = RocketSelection(rocketInput);

	if (selectedRocket != nullptr)
	{
		cout << "\nRocket successfully loaded." << endl;
		cout << "Rocket Name: " << selectedRocket->name << endl;
		cout << "Current Fuel: " << selectedRocket->currentFuel << endl;
		cout << "Maximum Velocity: " << selectedRocket->maxVelocity << endl;
	}
	string planetInput;

    cout << "\nSelect a planet:" << endl;
    cout << "1. Mercury" << endl;
    cout << "2. Venus" << endl;
    cout << "3. Earth" << endl;
    cout << "4. Mars" << endl;
    cout << "5. Jupiter" << endl;
    cout << "6. Saturn" << endl;
    cout << "7. Uranus" << endl;
    cout << "8. Neptune" << endl;

	cin >> planetInput;

	shared_ptr<Planet> selectedPlanet = PlanetSelection(planetInput);

	if (selectedPlanet != nullptr)
	{
		cout << "\nPlanet successfully loaded." << endl;
		cout << "Planet Name: " << selectedPlanet->name << endl;
		cout << "Gravity: " << selectedPlanet->gravity << endl;
		cout << "Escape Velocity: " << selectedPlanet->escapeVelocity << endl;
	}
	string missionInput;

	cout << "\nSelect a mission type:" << endl;
	cout << "1. Orbital" << endl;
	cout << "2. Landing" << endl;
	cout << "3. Flyby" << endl;
	cout << "4. Sample Return" << endl;

	cin >> missionInput;

	MissionType selectedMission = MissionTypeSelection(missionInput);
	MissionAI missionAI = CreateMissionAI(
		selectedRocket,
		selectedPlanet,
		selectedMission
	);
	RunMissionVisual(
		selectedRocket,
		selectedPlanet,
		selectedMission
	);
	cout << "\n--- OrbitX AI ---" << endl;
	cout << missionAI.analyzeMission() << endl;
	cout << missionAI.recommendAction() << endl;	
	cout << missionAI.generateMissionReport() << endl;	
	cout << "Risk Score: " << missionAI.calculateRiskScore() << endl;
	cout << "\n--- End of Simulation ---" << endl;
	return 0;

}

shared_ptr<Rocket> RocketSelection(string rocketInput);
shared_ptr<Rocket> RocketSelection(string rocketInput)

{
    if (rocketInput == "1")
    {
        cout << "Falcon 9 selected." << endl;

        return make_shared<Rocket>(
            "Falcon 9",
            RocketType::Chemical,
            RocketStage::FirstStage,
            549054,
            385000,
            385000,
            7607000,
            8000
        );
    }

    else if (rocketInput == "2")
    {
        cout << "Starship selected." << endl;

        return make_shared<Rocket>(
            "Starship",
            RocketType::Chemical,
            RocketStage::FirstStage,
            5000000,
            1200000,
            1200000,
            74000000,
            11000
        );
    }

    else if (rocketInput == "3")
    {
        cout << "SLS selected." << endl;

        return make_shared<Rocket>(
            "SLS",
            RocketType::Chemical,
            RocketStage::FirstStage,
            2600000,
            987000,
            987000,
            39000000,
            10500
        );
    }

    else if (rocketInput == "4")
    {
        cout << "New Glenn selected." << endl;

        return make_shared<Rocket>(
            "New Glenn",
            RocketType::Chemical,
            RocketStage::FirstStage,
            1400000,
            750000,
            750000,
            17000000,
            9500
        );
    }

    else if (rocketInput == "5")
    {
        cout << "Electron selected." << endl;

        return make_shared<Rocket>(
            "Electron",
            RocketType::Chemical,
            RocketStage::FirstStage,
            13000,
            9250,
            9250,
            224000,
            7500
        );
    }

    else if (rocketInput == "6")
    {
        cout << "Ariane 5 selected." << endl;

        return make_shared<Rocket>(
            "Ariane 5",
            RocketType::Chemical,
            RocketStage::FirstStage,
            780000,
            640000,
            640000,
            15000000,
            9000
        );
    }

    else if (rocketInput == "7")
    {
        cout << "Long March 5 selected." << endl;

        return make_shared<Rocket>(
            "Long March 5",
            RocketType::Chemical,
            RocketStage::FirstStage,
            870000,
            700000,
            700000,
            10500000,
            9200
        );
    }

    else if (rocketInput == "8")
    {
        cout << "H3 selected." << endl;

        return make_shared<Rocket>(
            "H3",
            RocketType::Chemical,
            RocketStage::FirstStage,
            574000,
            450000,
            450000,
            8800000,
            8700
        );
    }

    else if (rocketInput == "9")
    {
        cout << "Vega selected." << endl;

        return make_shared<Rocket>(
            "Vega",
            RocketType::Chemical,
            RocketStage::FirstStage,
            137000,
            100000,
            100000,
            3000000,
            7800
        );
    }

    else
    {
        cout << "Invalid rocket selection." << endl;
        return nullptr;
    }
}

shared_ptr<Planet> PlanetSelection(string planetInput)
{
    if (planetInput == "1")
    {
        cout << "Mercury selected." << endl;

        return make_shared<Planet>(
            Planets::Mercury,
            "Mercury",
            3.3011e23,
            2.4397e6,
            5.791e10,
            7.60052e6,
            5.431e6,
            440,
            4.25e3
        );
    }
    else if (planetInput == "2")
    {
        cout << "Venus selected." << endl;

        return make_shared<Planet>(
            Planets::Venus,
            "Venus",
            4.8675e24,
            6.0518e6,
            1.082e11,
            1.94142e7,
            -2.243e6,
            737,
            10.36e3
        );
    }
    else if (planetInput == "3")
    {
        cout << "Earth selected." << endl;

        return make_shared<Planet>(
            Planets::Earth,
            "Earth",
            5.97237e24,
            6.371e6,
            1.496e11,
            3.15576e7,
            8.64e4,
            288,
            11.19e3
        );
    }
    else if (planetInput == "4")
    {
        cout << "Mars selected." << endl;

        return make_shared<Planet>(
            Planets::Mars,
            "Mars",
            6.4171e23,
            3.3895e6,
            2.279e11,
            5.93552e7,
            8.64e4,
            210,
            5.03e3
        );
    }
    else if (planetInput == "5")
    {
        cout << "Jupiter selected." << endl;

        return make_shared<Planet>(
            Planets::Jupiter,
            "Jupiter",
            1.8982e27,
            6.9911e7,
            7.785e11,
            3.7432e8,
            3.57e4,
            165,
            59.5e3
        );
    }
    else if (planetInput == "6")
    {
        cout << "Saturn selected." << endl;

        return make_shared<Planet>(
            Planets::Saturn,
            "Saturn",
            5.6834e26,
            5.8232e7,
            1.433e12,
            9.292e8,
            3.57e4,
            134,
            35.5e3
        );
    }
    else if (planetInput == "7")
    {
        cout << "Uranus selected." << endl;

        return make_shared<Planet>(
            Planets::Uranus,
            "Uranus",
            8.6810e25,
            2.5362e7,
            2.872e12,
            2.651e9,
            -6.48e4,
            76,
            21.3e3
        );
    }
    else if (planetInput == "8")
    {
        cout << "Neptune selected." << endl;

        return make_shared<Planet>(
            Planets::Neptune,
            "Neptune",
            1.02413e26,
            2.4622e7,
            4.495e12,
            5.204e9,
            5.97e4,
            72,
            23.5e3
        );
    }

    cout << "Invalid planet selection." << endl;
    return nullptr;
}




MissionType MissionTypeSelection(string missionInput)
{
	if (missionInput == "1")
	{
		cout << "Orbital mission selected." << endl;
		return MissionType::Orbital;
	}
	else if (missionInput == "2")
	{
		cout << "Landing mission selected." << endl;
		return MissionType::Landing;
	}
	else if (missionInput == "3")
	{
		cout << "Flyby mission selected." << endl;
		return MissionType::Flyby;
	}
	else
	{
		cout << "Sample Return mission selected." << endl;
		return MissionType::SampleReturn;
	}
}
MissionAI CreateMissionAI(
	shared_ptr<Rocket> rocket,
	shared_ptr<Planet> planet,
	MissionType missionType)
{
	AISystem aiSystem(
		"OrbitX AI",
		"AI system for analyzing space missions.",
		{
			"Mission Analysis",
			"Risk Assessment",
			"Mission Recommendations"
		},
		{
			"Simulation data only",
			"Limited unexpected event prediction"
		}
	);

	AILogic aiLogic(
		"OrbitX Mission Logic",
		"Analyzes rocket and planetary conditions.",
		{
			"Risk Scoring",
			"Trajectory Analysis",
			"Fuel Analysis"
		},
		{
			"Rocket Data Analysis",
			"Planetary Environment Analysis"
		}
	);

	MissionAI missionAI(
		aiSystem,
		missionType,
		aiLogic,
		rocket,
		planet
	);
	return missionAI;
}
void RunMissionVisual(
    shared_ptr<Rocket> rocket,
    shared_ptr<Planet> planet,
    MissionType missionType)
{
    sf::RenderWindow window(
        sf::VideoMode({ 1000, 700 }),
        "OrbitX AI - Mission Simulation"
    );

   

    float planetRadius = 60.0f;
    sf::Color planetColor = sf::Color::White;

    if (planet->name == "Mercury")
    {
        planetRadius = 45.0f;
        planetColor = sf::Color(150, 150, 150);
    }
    else if (planet->name == "Venus")
    {
        planetRadius = 60.0f;
        planetColor = sf::Color(230, 170, 60);
    }
    else if (planet->name == "Earth")
    {
        planetRadius = 62.0f;
        planetColor = sf::Color(50, 120, 255);
    }
    else if (planet->name == "Mars")
    {
        planetRadius = 50.0f;
        planetColor = sf::Color(200, 70, 40);
    }
    else if (planet->name == "Jupiter")
    {
        planetRadius = 95.0f;
        planetColor = sf::Color(210, 160, 110);
    }
    else if (planet->name == "Saturn")
    {
        planetRadius = 85.0f;
        planetColor = sf::Color(225, 200, 130);
    }
    else if (planet->name == "Uranus")
    {
        planetRadius = 70.0f;
        planetColor = sf::Color(100, 220, 230);
    }
    else if (planet->name == "Neptune")
    {
        planetRadius = 70.0f;
        planetColor = sf::Color(50, 80, 220);
    }

    sf::CircleShape planetShape(planetRadius);

    planetShape.setPosition({
        750.0f,
        350.0f - planetRadius
        });

    planetShape.setFillColor(planetColor);

    

    sf::Vector2f rocketSize({ 70.0f, 20.0f });
    sf::Color rocketColor = sf::Color::White;

    if (rocket->name == "Falcon 9")
    {
        rocketSize = { 70.0f, 14.0f };
        rocketColor = sf::Color(235, 235, 235);
    }
    else if (rocket->name == "Starship")
    {
        rocketSize = { 90.0f, 24.0f };
        rocketColor = sf::Color(170, 170, 180);
    }
    else if (rocket->name == "SLS")
    {
        rocketSize = { 85.0f, 20.0f };
        rocketColor = sf::Color(230, 120, 40);
    }
    else if (rocket->name == "New Glenn")
    {
        rocketSize = { 82.0f, 22.0f };
        rocketColor = sf::Color(70, 120, 220);
    }
    else if (rocket->name == "Electron")
    {
        rocketSize = { 55.0f, 12.0f };
        rocketColor = sf::Color(50, 50, 50);
    }
    else if (rocket->name == "Ariane 5")
    {
        rocketSize = { 75.0f, 18.0f };
        rocketColor = sf::Color(240, 240, 240);
    }
    else if (rocket->name == "Long March 5")
    {
        rocketSize = { 80.0f, 20.0f };
        rocketColor = sf::Color(220, 60, 60);
    }
    else if (rocket->name == "H3")
    {
        rocketSize = { 72.0f, 17.0f };
        rocketColor = sf::Color(220, 220, 230);
    }
    else if (rocket->name == "Vega")
    {
        rocketSize = { 60.0f, 14.0f };
        rocketColor = sf::Color(100, 160, 220);
    }

    sf::RectangleShape rocketShape(rocketSize);

    rocketShape.setPosition({
        100.0f,
        350.0f
        });

    rocketShape.setFillColor(rocketColor);

    sf::Clock clock;

    bool reachedPlanet = false;

    float orbitAngle = 0.0f;

    // Larger planets get a larger visual orbit
    float orbitRadius =
        planetRadius + 100.0f;

    // Selected rocket controls animation speed
    float visualSpeed = std::clamp(
        static_cast<float>(
            rocket->maxVelocity / 50.0
            ),
        80.0f,
        300.0f
    );

    cout << "\n--- Mission Visual Data ---" << endl;
    cout << "Rocket: " << rocket->name << endl;
    cout << "Planet: " << planet->name << endl;

    cout << "Rocket Max Velocity: "
        << rocket->maxVelocity
        << " m/s" << endl;

    cout << "Visual Speed: "
        << visualSpeed
        << " pixels/sec" << endl;

    while (window.isOpen())
    {
        float deltaTime =
            clock.restart().asSeconds();

        while (const std::optional event =
            window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

    

        if (missionType == MissionType::Flyby)
        {
            rocketShape.move({
                visualSpeed * deltaTime,
                0.0f
                });
        }

        

        else if (missionType == MissionType::Landing)
        {
            float rocketFront =
                rocketShape.getPosition().x +
                rocketShape.getSize().x;

            float planetLeft =
                planetShape.getPosition().x;

            if (rocketFront < planetLeft)
            {
                rocketShape.move({
                    visualSpeed * deltaTime,
                    0.0f
                    });
            }
        }


        else if (missionType == MissionType::Orbital)
        {
            orbitAngle +=
                (visualSpeed / orbitRadius)
                * deltaTime;

            float planetCenterX =
                planetShape.getPosition().x +
                planetRadius;

            float planetCenterY =
                planetShape.getPosition().y +
                planetRadius;

            float rocketX =
                planetCenterX +
                static_cast<float>(
                    std::cos(orbitAngle)
                    ) * orbitRadius;

            float rocketY =
                planetCenterY +
                static_cast<float>(
                    std::sin(orbitAngle)
                    ) * orbitRadius;

            rocketShape.setPosition({
                rocketX,
                rocketY
                });
        }


        else if (
            missionType == MissionType::SampleReturn)
        {
            float rocketFront =
                rocketShape.getPosition().x +
                rocketShape.getSize().x;

            float planetLeft =
                planetShape.getPosition().x;

            if (!reachedPlanet)
            {
                rocketShape.move({
                    visualSpeed * deltaTime,
                    0.0f
                    });

                if (rocketFront >= planetLeft)
                {
                    reachedPlanet = true;
                }
            }
            else
            {
                if (rocketShape.getPosition().x > 100.0f)
                {
                    rocketShape.move({
                        -visualSpeed * deltaTime,
                        0.0f
                        });
                }
            }
        }

       

        window.clear(sf::Color::Black);
        window.draw(planetShape);
        window.draw(rocketShape);
        window.display();
    }
}
