[player] spawn jedi_fnc_intro;


/*
	This is a little bit of code that checks you Squad association with the Arma3.com squads page
	This will add a notification whenever someone joins the server and is part of TacticalGaming.com/HQ on the Squads page. 

	@association
		To add this for your own server just replace the email at _email == "YourEmailHereForSquad" 
		Then change the output message to whatever you would like.
*/
_infoArray = squadParams player;    
_infoSquad = _infoArray select 0;
_squad = _infoSquad select 1;
_infoName = _infoArray select 1;
_name = _infoName select 1; 
_email = _infoSquad select 2;

if (_email == "tgcompetitive@mail.com") then {

_GlobalHint = format[
	"<t align='center' size='2.2' color='#FF0000'>
		%1
		<br/>
	</t>
	<t size='1.4' color='#33CCFF'>
		%2
	</t>
		<br/>
		has joined the server, To get involved in the TacticalGaming community, join us online at www.TacticalGaming.net\HQ for more details!
	</t>
	",_squad,_name];
[_GlobalHint] remoteExec ["jedi_fnc_globalHint",0,false];
} else {};