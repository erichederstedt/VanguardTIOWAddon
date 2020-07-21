//hint "Smite was called";
_wPos = screenToWorld [0.5,0.5];
private _moduleGroup = createGroup sideLogic;
"ModuleLightning_F" createUnit [
	_wPos,
	_moduleGroup,
	"this setVariable ['BIS_fnc_initModules_disableAutoActivation', false, true];"
];