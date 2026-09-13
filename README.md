# OrbitX AI

**OrbitX AI** is a C++ space mission simulation project that models planetary environments, rocket performance, fuel consumption, thrust, escape velocity, and mission risk.

The project combines object-oriented programming, physics-based calculations, and an AI-inspired mission analysis system to determine whether a rocket is prepared for launch under different mission conditions.

---

## Overview

OrbitX AI was created to explore the intersection of:

- C++ software development
- Spaceflight simulation
- Artificial intelligence concepts
- Physics and mathematical modeling
- Object-oriented programming
- Visualization with SFML

The simulation allows planetary and rocket characteristics to be analyzed before generating a mission recommendation.

The `MissionAI` system evaluates mission conditions and provides a risk level and launch recommendation.

---

## Features

- Planet simulation
- Rocket performance modeling
- Fuel consumption tracking
- Rocket thrust calculations
- Thrust-to-weight analysis
- Escape velocity calculations
- Multi-stage rocket support
- AI-inspired mission analysis
- Mission risk scoring
- Launch feasibility recommendations
- Mission report generation
- Optional SFML visualization
- Automated testing
- CMake build support
- GitHub Actions continuous integration

---

## Mission AI

OrbitX includes a `MissionAI` system that analyzes several mission variables.

Examples include:

- Rocket thrust
- Rocket mass
- Fuel level
- Maximum rocket velocity
- Planetary gravity
- Escape velocity
- Planet temperature
- Rocket staging
- Thrust-to-weight ratio

The system uses these conditions to calculate a mission risk score and generate a recommendation.

Example:

```text
Mission Analysis
---------------------------

Planet: Earth
Rocket: OrbitX-1

Surface Gravity: 9.82 m/s²
Escape Velocity: 11.19 km/s
Maximum Rocket Velocity: 12.50 km/s

Fuel Remaining: 100%
Thrust-to-Weight Ratio: 1.70

Risk Score: 0 / 100
Risk Level: LOW

Launch Feasible: YES
```

---

## 🛠️ Technologies

| Technology | Purpose |
|---|---|
| C++17 | Core simulation |
| CMake | Project build system |
| SFML | Optional graphical visualization |
| Git | Version control |
| GitHub | Repository hosting |
| GitHub Actions | Automated build and testing |

---

## Project Structure

```text
OrbitX-AI/
│
├── .github/
│   └── workflows/
│       └── ci.yml
│
├── app/
│   ├── main.cpp
│   └── sfml_main.cpp
│
├── include/
│   └── orbitx/
│       ├── Planet.hpp
│       ├── Rocket.hpp
│       ├── MissionAI.hpp
│       └── Simulation.hpp
│
├── src/
│   ├── Planet.cpp
│   ├── Rocket.cpp
│   ├── MissionAI.cpp
│   └── Simulation.cpp
│
├── tests/
│   └── orbitx_tests.cpp
│
├── docs/
│   └── ARCHITECTURE.md
│
├── assets/
│
├── CMakeLists.txt
├── CONTRIBUTING.md
├── LICENSE
├── .gitignore
└── README.md
```

---

## Planet Model

The `Planet` class stores information about planetary environments.

Example properties include:

```cpp
mass
radius
distance
orbitalVelocity
rotationSpeed
temperature
escapeVelocity
gravity
```

These values can be used to determine how difficult it would be for a spacecraft to launch from a specific planet.

---

## Rocket Model

The `Rocket` class represents a spacecraft used during the simulation.

The rocket contains information such as:

```cpp
type
stage
mass
fuel
thrust
maximumVelocity
```

The simulation can consume fuel and evaluate whether the rocket has enough performance to complete its mission.

---

## Physics

OrbitX AI uses simplified physics calculations to model mission conditions.

### Surface Gravity

```text
g = GM / r²
```

Where:

```text
G = gravitational constant
M = mass of the planet
r = radius of the planet
```

### Escape Velocity

```text
v = √(2GM / r)
```

Escape velocity represents the minimum velocity required for an object to escape a planet's gravitational influence.

### Thrust-to-Weight Ratio

```text
TWR = Thrust / Weight
```

A rocket generally requires a thrust-to-weight ratio greater than `1.0` to begin accelerating upward from a planetary surface.

---

## Building OrbitX AI

### Requirements

You will need:

- C++17 compatible compiler
- CMake 3.16 or newer

Examples:

```text
Visual Studio
GCC
Clang
```

---

### Clone the Repository

```bash
git clone https://github.com/EmmanRay567/OrbitX-AI.git
cd OrbitX-AI
```

---

### Build with CMake

Create a build directory:

```bash
mkdir build
cd build
```

Configure the project:

```bash
cmake ..
```

Build:

```bash
cmake --build .
```

Then run the OrbitX executable produced by your compiler.

---

## SFML Visualization

OrbitX AI also supports an optional SFML-based graphical application.

SFML can be used to eventually visualize:

- Rockets
- Planets
- Launch sequences
- Mission telemetry
- Orbital paths
- Space environments

The main simulation does not require SFML, allowing the core application to remain lightweight and portable.

---

## Testing

OrbitX includes automated tests for important simulation functionality.

When using CMake:

```bash
ctest
```

The test suite can verify components such as:

```text
Planet calculations
Rocket calculations
Mission analysis
Simulation behavior
```

---

## Continuous Integration

The repository includes a GitHub Actions workflow.

Whenever code is pushed to GitHub, GitHub Actions can automatically:

```text
Configure the project
Compile OrbitX
Run automated tests
Verify that the project builds successfully
```

This helps prevent new changes from accidentally breaking existing functionality.

---

## Future Development

OrbitX AI is an ongoing project.

Planned additions include:

- Real-time rocket telemetry
- Interactive SFML launch visualization
- Multiple planets and celestial bodies
- Orbital trajectory calculations
- Rocket component simulation
- Engine temperature simulation
- Rocket failure events
- Mission history logging
- CSV telemetry export
- Graphical mission dashboards
- NASA/Open Data integration
- Machine-learning mission prediction
- Reinforcement-learning mission agents
- PyTorch or ONNX integration
- AI-generated mission recommendations
- Advanced orbital mechanics

The long-term goal is to develop OrbitX into a more advanced intelligent spacecraft and mission simulation platform.

---

## Project Goals

OrbitX AI was created as both a learning project and a software engineering portfolio project.

It demonstrates concepts including:

```text
Object-Oriented Programming
Software Architecture
C++ Development
Physics Modeling
Artificial Intelligence Concepts
Simulation Development
Testing
CMake
Git
GitHub Actions
SFML
```

---

##  Author

**Emmanuel Ray**

Computer Science Student  
Florida A&M University

Interested in:

```text
Artificial Intelligence
Machine Learning
Autonomous Systems
Robotics
Audio Software
Simulation
Creative Technology
```

GitHub:

[@EmmanRay567](https://github.com/EmmanRay567)

---

## License

This project is licensed under the MIT License.

See the `LICENSE` file for more information.

---

## OrbitX AI

OrbitX AI is a growing exploration of **spaceflight, C++, physics, simulation, and intelligent autonomous systems**.

```text
Explore.
Simulate.
Analyze.
Launch.
```

 **OrbitX AI**
