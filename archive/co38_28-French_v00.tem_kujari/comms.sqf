/*
    Briefingeinträge können mit dem Befehl createDiaryRecord erstellt werden.
    Der Text der einzelnen Einträge kann noch mit folgenden Befehlen formatiert
    werden:
    <br/>                                               - Zeilenumbruch
    <t/>                                                - Einrücken (Tabulator)?
    <img image='BILDPFAD' width='200' height='200'/>    - Bild einbinden
    <marker name='MARKER'>TEXT</marker>                 - Verlinkung auf Marker
    <execute expression='CODE'>TEXT</execute>           - Code ausführen

    https://community.bistudio.com/wiki/createDiaryRecord
 */

player createDiaryRecord ["Diary", [
    "Funkkanäle",
    "<br/>"
    + "<t/> Kampfkreis - Channel 1 <br/>"
    + "<t/> Air-to-Air - Channel 6 <br/>"
    + "<t/> Ground-to-Air - Channel 9 <br/>"
    + "<br/>"
    + "<t/> Fox int - Channel 10 <br/>"
    + "<t/> Fox-1 int - Channel 11 <br/>"
    + "<t/> Fox-2 int - Channel 12 <br/>"
    + "<t/> Fox-3 int - Channel 13 <br/>"
    + "<t/> Eagle-1 int - Channel 14 <br/>"
    + "<t/> Eagle-2 int - Channel 14 <br/>"
]];
