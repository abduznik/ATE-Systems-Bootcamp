# Pull Request Template

## Description
Provide a brief summary of the changes introduced by this PR.

## Hardware Validation Checklist
- [ ] **GND Continuity:** All ground planes are connected.
- [ ] **Power Rails:** No shorts between VCC and GND.
- [ ] **KiCad 10.0:** Project created/updated using KiCad v10.0.
- [ ] **PDF Export:** Schematic PDF is attached/located in the `exports` folder.
- [ ] **Custom Assets:** External footprints/symbols are correctly linked.

## Firmware Validation Checklist
- [ ] **No-Delay Rule:** `millis()` is used for timing; `delay()` is NOT present in the code.
- [ ] **Baud Rate:** Serial communication set to 115200.
- [ ] **Documentation:** Code functions are commented in English.

## Visuals
(Attach screenshots of PCB layout or logic analyzer traces here)

## Reviewer Notes
(Mention any specific areas you want the architect to focus on)
