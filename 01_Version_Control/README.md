<div dir="rtl">

# 01 - ניהול גרסאות (Git Workflow)

בתעשיית ה-ATE, ניהול קוד הוא קריטי. כל שינוי חייב להיות מתועד, הדיר (Reproducible) וניתן לשחזור.

## המלצת המדריך
אני ממליץ בחום להשתמש ב-**GitHub Desktop**. זהו כלי ויזואלי המפשט את העבודה עם Git ומאפשר לכם להתרכז בהנדסה ולא בפקודות טרמינל מורכבות.

## מושגי יסוד (Basic Concepts)
- **Branch (ענף):** סביבת עבודה מבודדת. כל משימה חדשה מתחילה ב-Branch נפרד כדי לא "ללכלך" את הקוד היציב ב-`main`.
- **Commit (שמירה):** רישום של שינויים ב-Repository. כל Commit כולל הודעה המסבירה *מה* השתנה ו*למה*.
- **Pull Request - PR (בקשת מיזוג):** הדרך שלכם להגיש קוד לבדיקה. ב-PR מתבצע ה-Code Review, ורק לאחר אישור הוא ממוזג ל-`main`.


## המשימה
1. צרו Branch חדש ב-GitHub Desktop בשם `feature/onboarding-[your-name]`.
2. עדכנו את הקובץ `students_log.md` בתיקייה זו.
3. בצעו Commit עם הודעה בפורמט **Conventional Commits**:
   - `feat: add student details to log`
4. בצעו Push ופתחו Pull Request (PR) ב-GitHub.

## דגשים
- חובה להשתמש ב-PR Template הנמצא בתיקייה `04_Templates_and_Docs`.
- אין לבצע Merge ללא אישור המנחה.

</div>
