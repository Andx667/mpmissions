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
    "Hinweise",
    "Allgemein <br/>"
    + "<t/>- Funker hat ein 'cTab' um bei Funkausfall mit Adler per Textnachricht zu kommunizieren <br/>"
    + "<t/>- Breacher haben eine Schrotflinte dabei, Ausrüstung via Taste '4'<br/>"
    + "<t/>- Nachschub für den Zugsanitäter in der VBT-Kisten (begrenzt) <br/>"
    //+ "- Ausrüstung <gear unit='1017'>Gruppenführer</gear> <br/>"
    + "Fähigkeiten Zugsanitäter: <br/>"
    + "<t/> - Epinephrin: nein <br/>"
    + "<t/> - Nähen: nein <br/>"
    + "<t/> - IV: ja, überall <br/>"
    + "<t/> - PAK: nein <br/>"
    + "Fähigkeiten Combat Medics: <br/>"
    + "<t/> - Epinephrin: ja, überall <br/>"
    + "<t/> - Nähen: ja, Nähte verbrauchen sich, im Hubschrauber oder Flughafen<br/>"
    + "<t/> - IV: ja, überall <br/>"
    + "<t/> - PAK: ja, verbraucht sich <br/>"
]];


 player createDiaryRecord ["Diary", [
    "Durchführung",
    "<t/> - Infiltration per Boot <br/>"
    + "<t/> - Angriff auf <marker name='marker_0'>Obj. 1</marker> <br/>"
    + "<t/> - Weiteres durch OPL vor Ort <br/>"
]];

player createDiaryRecord ["Diary", [
    "Auftrag",
    "An die Taskforce 'Fox': <br/>"
    + "<t/>- Vernichten Sie den Störsender im ehem. Gouverneurspalast <br/>"
    + "<t/>- Finden Sie dort Intel über den Standort der Milizbastion <br/>"
    + "<t/>- Zerschlagen Sie den Feind in der Milizbastion <br/>"
    + "um der Miliz dauerhaft die Operationen in der Region zu erschweren. <br/>"
]];

player createDiaryRecord ["Diary", [
    "Lage",
    "Unterstützt durch die Takistanische Armee hat die Miliz die Kontrolle über die Region übernommen. <br/>"
    + "Die CSAT unterstützt nun auch offen die Miliz und hat ihr eines ihrer modernen Störsender-Systeme zur Verfügung gestellt. Mit seinen ca. 5km Reichweite verhindert dieses System effektiv die Durchführung von Operationen in unserem Einflussbereich.<br/>"
]];
