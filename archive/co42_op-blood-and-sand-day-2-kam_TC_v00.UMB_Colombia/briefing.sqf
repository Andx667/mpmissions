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
    "Auftrag",
    "USMC Platoon Alpha:<br/>"
    + "<t/> - nimmt den militärischen Komplex <marker name='marker_7'>Obj. 1</marker>,<br/>"
    + "<t/> - nimmt das <marker name='marker_8'>Depot (ZZ. 1)</marker> des Feindes ,<br/>"
    + "<t/> - nimmt den <marker name='marker_9'>Hafen (ZZ. 2)</marker> des Feindes ,<br/>"
    + "<t/> - nimmt die <marker name='marker_10'>Brücke (Obj. 2)</marker> und die <marker name='marker_10'>Kaserne (Obj. 2)</marker> in Montelibano ,<br/>"
    + "um, dem USMC Brückenkopf ins Landesinnere zu erweitern."
]];
