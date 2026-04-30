<div dir="rtl">

# ATE Systems Bootcamp - Industrial Sandbox 2026

ברוכים הבאים ל-Bootcamp של מערכות ATE. זהו Sandbox תעשייתי שנועד לגשר על הפער בין הידע האקדמי לבין הדרישות המקצועיות בשוק ה-High-Tech. במהלך 7 הימים הקרובים תהפכו מהנדסאים צעירים למומחים המסוגלים לתכנן, לפתח ולתעד מערכות בדיקה מורכבות.

## Quick Start - תחילת עבודה
1. **התקנה:** ודאו שכל הכלים המופיעים בסעיף ה-Toolchain מותקנים במחשבכם.
2. **Clone:** שכפלו את ה-Repository הזה למחשבכם באמצעות GitHub Desktop.
3. **ספרינט:** עקבו אחר לוח הזמנים והתחילו בתיקייה `01_Version_Control`.

## Toolchain - כלי עבודה
כדי לעמוד בסטנדרט התעשייתי, חובה להשתמש בגרסאות הבאות:
- [GitHub Desktop](https://desktop.github.com/) - לניהול גרסאות וסנכרון.
- [Arduino IDE 2.3+](https://www.arduino.cc/en/software) - לפיתוח Firmware.
- [KiCad 10.0](https://www.kicad.org/download/) - לעריכת מעגלים מודפסים.
- [Draw.io Desktop](https://www.drawio.com/download) - לתיעוד דיאגרמות.

## Drivers - דרייברים נדרשים
ודאו שמותקנים הדרייברים לתקשורת Serial מול כרטיסי הפיתוח:
- [CP210x USB to UART Bridge](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers)
- [CH340/CH341 Serial Driver](http://www.wch-ic.com/downloads/CH341SER_EXE.html)

## The 7-Day Sprint Table
הספרינט מתנהל לפי לוחות זמנים קשיחים. אי-עמידה ביעד יגרור סגירה של ה-PR וביטול הפרויקט.

| יום | תיקייה | אבן דרך (Milestone) |
| :--- | :--- | :--- |
| 1-2 | `01_Version_Control` | הקמת סביבה, Git Workflow ופתיחת PR ראשון. |
| 2-3 | `02_Firmware_Simulation` | פיתוח לוגיקה לא-חוסמת בסימולציית Wokwi. |
| 3-5 | `03_Hardware_Design` | תכנון מלא של Signal Conditioning ב-KiCad 10. |
| 6 | `05_Logic_Challenges` | אתגרי יעילות קוד, State Machines וניהול אוגרים. |
| 7 | `04_Templates_and_Docs` | סקירה טכנית (Code Review), תיקונים ומיזוג סופי. |

## The Rules - חוקי הברזל
1. **No-Delay Policy:** כל שימוש ב-`delay()` ב-Firmware יביא לפסילה מיידית של הקוד. השתמשו ב-`millis()` בלבד.
2. **Technical English:** כל התיעוד הטכני, שמות המשתנים, הודעות ה-Commit ושמות הקבצים יהיו באנגלית בלבד.
3. **Conventional Commits:** יש להשתמש בפורמט תקני להודעות Commit (לדוגמה: `feat:`, `fix:`, `docs:`).

</div>
