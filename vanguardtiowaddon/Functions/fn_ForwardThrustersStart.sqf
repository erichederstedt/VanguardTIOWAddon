//hint "VNG_fnc_ForwardThrustersStart got called";

_vehicle = _this;
_vehicle setVariable ["forwardThrusterEnabled", true, true];
_rate = 0.0001; comment "Extra fuel drain rate";

while { (alive _vehicle) && (_vehicle getVariable ["forwardThrusterEnabled", false]) } do 
{
	if(speed _vehicle < 450) then 
	{
		_vel = velocity _vehicle;
		_dir = direction _vehicle;
		_speed = 1; comment "Added speed";
		_vehicle setFuel ( Fuel _vehicle - _rate); comment "Extra fuel drain";
		_vehicle setVelocity [
			(_vel select 0) + (sin _dir * _speed), 
			(_vel select 1) + (cos _dir * _speed), 
			(_vel select 2)
		];
	};
	
	sleep 0.1;
};