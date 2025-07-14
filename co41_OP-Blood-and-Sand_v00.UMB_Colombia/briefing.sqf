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
    "USMC Platoon:</br>"
    + "<t/> - landet bei <marker name='marker_3'>San Antonio</marker>,<br/>"
    + "<t/> - nimmt Feind Kaserne bei San Antonio <marker name='marker_2'>Obj. 1</marker>,<br/>"
    + "<t/> - nimmt <marker name='marker_1'>Obj. 2</marker>,<br/>"
    + "<t/> - nimmt <marker name='marker_7'>Obj. 3</marker>,<br/>"
    + "<t/> und richtet sich ein zur zeitlich begrenzten Verteidigung,<br/>"
    + "um, dem USMC einen Brückenkopf zu schaffen für die weitere Intervention in Columbia."
]];

player createDiaryRecord ["Diary", [
    "01 Lage",
    "Truppen des Royal Army Corps of Shahrani haben in Columbia geputscht und die Kontrolle über alle Militäreinrichtungen übernommen.,<br/>"
    + "<br/>"
    + "Feindlage:<br/>"
    + "<t/> - In Obj. 1 feindliche Infanterie in Zugstärke, teils gehärtete Stellungen, vermutete Absicht ist es dem mobilen Kräften Zeit zu verschaffen<br/>"
    + "<t/> - In Obj. 2 feindliche Infanterie in Zugstärke, teils gehärtete Stellungen, vermutete Absicht ist es die Stellung zu halten und uns ein weiteres Vorstoßen nicht zu ermöglichen,<br/>"
    + "<t/> - für Obj.3 sind die Aufklärungsdaten unvollständig, es ist anzunhemen, dass es ähnlich wie in 1 und 2 ist,<br/>"
    + "<t/> - In der gesamten AO feindliche Reserven motorisiert und mechanisiert in Zugstärke, diese werden versuchen unseren Vorstoß schnellstmöglich aufzuhalten.<br/>"
    + "<br/>"
    + "Eigene Lage:<br/>"
    + "<t/> - Alpha Zug mit 2 Marine Squads und einem Assault Squad auf <marker name='marker_4'>Landungsboten</marker> vor der Küste in bereitschaft,<br/>"
    + "<t/> - angegliedert 3 Corpsman und ein Logistik Detachement mit 2 Logistikern, beides motorisiert mit Humvees.<br/>"
    + "<t/> - CLose-Air Support durch die Marine Expeditionary Unit vor Anlanden auf <marker name='marker_3'>Küste</marker> vorhanden.<br/>"
    + "<t/> - Absicht der oberen Führung ist es, einen ausreichend tiefen Brückenkopf zu errichten um weitere Kräfte nachführen zu können.<br/>"
    + "<br/>"
    + "Zivile Lage:<br/>"
    + "<t/> - Zivilisten sind schon vor dem Putsch geflohen oder wurden deportiert.<br/>"
    + "<br/>"
    + "Minenlage:<br/>"
    + "<t/> - Ohne<br/>"
]];
