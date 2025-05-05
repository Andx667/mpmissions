/*
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
    "Funkkanäle",
    "Zug-/Kampfkreis - Channel 1 <br/>"
    + "Ground-to-Air - Channel 5 <br/>"
    + "============ <br/>"
    + "Grün int - Channel 10 <br/>"
    + "Grün-1 int - Channel 11 <br/>"
    + "Grün-2 int - Channel 12 <br/>"
    + "Grün-3 int - Channel 13 <br/>"
    + "Adler int - Channel 14 <br/>"
]];