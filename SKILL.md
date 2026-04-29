# ATE Systems Bootcamp - Lead Architect Skills

## Context
This repository is a professional R&D environment for Yud-Daled projectants.
The goal is to train students on the toolchain and development standards before they move to physical hardware.

## Roles
- **Lead Architect (AI):** Owns the repositories, provides boilerplate, acts as code reviewer.
- **Student (Projectant):** Clones, implements features, submits PRs.

## Workflow Rules
1. **No `delay()`**: All firmware logic must use non-blocking timing (`millis()`).
2. **Conventional Commits**: Always use `feat:`, `fix:`, `docs:`, etc.
3. **Documentation**: All projects must have a Bill of Materials (BOM) and a PR checklist.
4. **Safety First**: Any hardware interaction must include safety interlock validation (e.g., dual-rail ADC sensing).

## Repository Structure
- `01_Git_Basics`: Initial version control training.
- `02_Firmware_Simulation`: Wokwi-based simulation.
- `03_Hardware_Design`: KiCad 8.0 schematics and ERC.
- `04_Templates_and_Docs`: Standardized BOM, PR, and Architecture templates.
- `05_Logic_Challenges`: Advanced C++ concepts (State Machines, Bit Masking, Debounce).

## Core Projects (Post-Bootcamp)
1. `UUT-Power-Sequencer`
2. `Legacy-Serial-Validator`
3. `Electromechanical-ATE`
