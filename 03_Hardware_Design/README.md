# Hardware Design with KiCad 8

This tutorial provides a step-by-step guide for absolute beginners to start their first hardware project in KiCad 8.

## Objective
Create a simple circuit featuring an ESP32 and an LM358 Op-Amp.

## Step-by-Step Instructions

1. **Create a New Project**: Open KiCad 8, go to `File -> New Project`, and name it `Bootcamp_Design` inside this folder.
2. **Open Schematic Editor**: Double-click the `.kicad_sch` file.
3. **Place Components**:
   - Press `A` to open the symbol chooser.
   - Search for and place an **ESP32** (e.g., ESP32-WROOM-32).
   - Search for and place an **LM358** Op-Amp.
   - Place an **LED** and a **Resistor**.
4. **Wiring**:
   - Use the `Wire` tool (`W`) to connect one of the ESP32 GPIOs to the non-inverting input of the LM358.
   - Connect the output of the LM358 to the LED (don't forget the current-limiting resistor!).
5. **Electrical Rules Check (ERC)**:
   - Click the `ERC` icon in the top toolbar.
   - Run the check and resolve any errors or warnings.

## Why ERC is Critical
In military and aerospace design, reliability is paramount. The Electrical Rules Check (ERC) is a critical first line of defense. It ensures there are no floating inputs, conflicting drivers (two outputs connected together), or missing power connections. A single wiring error in a flight control system or a missile guidance module can lead to catastrophic mission failure. ERC helps catch these "silly" mistakes before they ever reach the PCB layout or manufacturing stages.
