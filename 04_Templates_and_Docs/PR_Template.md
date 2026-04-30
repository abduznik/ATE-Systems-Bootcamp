# Pull Request Checklist

## Description
Summary of the engineering changes introduced.

## Hardware Review (KiCad 10.0)
- [ ] **GND Continuity:** Confirmed common ground across all sheets.
- [ ] **ERC Clean:** Electrical Rules Check passed with 0 errors.
- [ ] **Custom Assets:** External footprints/symbols are correctly integrated.
- [ ] **PDF Export:** Schematic PDF is attached for review.

## Firmware Review (C++ / Arduino)
- [ ] **No-Delay Policy:** Verified that `millis()` is used for all timing tasks.
- [ ] **Baud Rate:** Serial communication is synchronized at 115200.
- [ ] **State Machine:** Logic follows the predefined state flow without blocking.
- [ ] **Formatting:** Code follows industrial indentation standards and English commenting.

## Visuals & Documentation
- [ ] BOM updated in `04_Templates_and_Docs`.
- [ ] Logic Analyzer / Serial Monitor screenshots attached (if applicable).
