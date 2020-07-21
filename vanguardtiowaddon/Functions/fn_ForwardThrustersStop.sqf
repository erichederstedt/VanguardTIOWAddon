//hint "VNG_fnc_ForwardThrustersStart got called";

_vehicle = _this;
_vehicle setVariable ["forwardThrusterEnabled", false, true];

while { (alive _vehicle) && !(_vehicle getVariable ["forwardThrusterEnabled", false]) && (speed _vehicle > 250) } do 
{
	_vel = velocity _vehicle;
	_dir = direction _vehicle;
	_speed = -3; comment "Added speed";
	_vehicle setVelocity [
		(_vel select 0) + (sin _dir * _speed), 
		(_vel select 1) + (cos _dir * _speed), 
		(_vel select 2)
	];

	sleep 0.1;
};