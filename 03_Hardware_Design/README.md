<div dir="rtl">

# 03 - תכנון חומרה (Hardware Design)

שלב זה מתמקד בתכנון מעגל אנלוגי ודיגיטלי משולב תוך שימוש בכלי עריכה מתקדמים.

## המשימה: Signal Conditioning Module
עליכם לתכנן מעגל המבוסס על ESP32 ועל מגבר שרת LM358 לצורך התמרה של אותות מחיישן אנלוגי.

## אתגרים חדשים (KiCad 10.0)
1. **שימוש בנכסים חיצוניים:** עליכם להוריד Symbol ו-Footprint של מחבר DB9 או Power-Jack מאתר חיצוני (DigiKey / Mouser / SnapMagic) ולשלב אותו בספריית הפרויקט.
2. **יצירת רכיב מותאם (Custom Symbol):** צרו Symbol חדש עבור מחבר 10-פינים מותאם על סמך Datasheet שתבחרו. יש להקפיד על Pin Numbering ו-Pin Functions נכונים.
3. **ייצוא תיעוד:** הגשת הפרויקט חייבת לכלול ייצוא של הסכימה לקובץ **PDF** איכותי. סכימה ללא PDF לא תיבדק.

## דרישות תכנון
- הגדרת Net Classes עבור מתח (Power) ואותות (Signals).
- הוספת Test Points בנקודות קריטיות (Output of LM358, VCC, GND).
- שימוש ב-Hierarchical Sheets במידה והמעגל הופך למורכב.

</div>
