/*
    Die briefing.sqf wird in der initPlayerLocal eingebunden und ausgeführt.
    Hier können und sollten Informationen rund um die Mission angegeben werden,
    die man sich dann bei Eventbeginn noch einmal kurz durchlesen kann. Dies
    ist besonders wichtig für die Reserve, da sie sich nicht auf eine bestimmte
    Rolle vorbereiten kann.

    Briefingeinträge können mit dem Befehl createDiaryRecord erstellt werden.
    Der Text der einzelnen Einträge kann noch mit folgenden Befehlen formatiert
    werden:
    <br/>                                               - Zeilenumbruch
    <t/>                                                - Einrücken (Tabulator)
    <img image='BILDPFAD' width='200' height='200'/>    - Bild einbinden
    <marker name='MARKER'>TEXT</marker>                 - Verlinkung auf Marker
    <execute expression='CODE'>TEXT</execute>           - Code ausführen
 */

player createDiaryRecord ["Diary", [
    "02 Auftrag",
    "USMC Platoon"
    + "landet bei <marker name='MARKER'>TEXT</marker>,<br/>"
    + "nimmt <marker name='MARKER'>TEXT</marker><br/>"
    + "nimmt <marker name='MARKER'>TEXT</marker><br/>"
    + "und richtet sich ein zur zeitlich begrenzten Verteidigung,"
    + "um, dem USMC einen Brückenkopf zu schaffen für die weitere Intervention in Columbia."


]];

player createDiaryRecord ["Diary", [
    "01 Lage",
    "Truppen des Royal Army Corps of Shahrani haben in Columbia geputscht und die Kontrolle über alle Militäreinrichtungen übernommen."
]];
