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
    "01 - Lage",
    "Die Armee Takistans verfügt in Al-Rayak über folgende Kräfte in unsrer Area-of-Operations:<br/>
    <t/><marker name='marker_0'>Obj. 1</marker> Leichte Infanterie in Zugstärke.<br/>
    <t/><marker name='marker_1'>Obj. 2</marker> 2 Gruppen Leichte Infanterie.<br/>
    <t/><marker name='marker_2'>Obj. 3</marker> Leichte Infanterie in doppelter Gruppenstärke. Hier werden außerdem Mörser vermutet.<br/>
    Im gesamten Gebiet also Kompanie, verstärkt mit 2-3 BTR-60.<br/>
    Der Feind verfügt außerdem über begrenzte Luftverlegbarkeit von etwa einem Infanteriezug aus dem Norden.<br/>
    <br/>
    Die Startbahn des Flughafen (Obj.2) wurde durch den Feind mit Sperren unbrauchbar gemacht.<br/>
    Vermutete Absicht des Feindes ist es uns das erreichen der Ziele zu verwehren, indem die Ziele von den Truppen gehalten oder zurückerobert werden.<br/>
    "
]];

player createDiaryRecord ["Diary", [
    "02 - Auftrag",
    "Charlie Platoon wird:<br/>
    <t/> - die Ölförderung unterbrechen<br/>
    <t/> - den Flughaben nehmen und einsatzbereit machen<br/>
    <t/> - die Kaserne in der Stadt nehmen<br/>"
]];

player createDiaryRecord ["Diary", [
    "03 - Durchführung",
    "Fallschirmsprung im Süden von <marker name='marker_3'>Al-Rayak</marker>. Dann ausführung des Auftrags."
]];
