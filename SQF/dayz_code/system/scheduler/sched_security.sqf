// (c) facoptere@gmail.com, licensed to DayZMod for the community

sched_security_init = {
	if (DZE_schedDebug == 1) then {diag_log [ diag_ticktime, __FILE__, "Some security routines inited"];};
	[ "", time, 0, 0, grpNull ]	
};

sched_security = {
	local _netid = _this select 0;
	local _otime = _this select 1;
	local _idTrickCount = _this select 2;
	local _timeTrickCount = _this select 3;
	local _grp = _this select 4;
	local _time = time;

	if (typeName player != "OBJECT") then {
		PVDZ_sec_atp = format["WARNING typename error for play3r UID#%1", getPlayerUID player];
		publicVariableServer "PVDZ_sec_atp";
		endMission "LOSER";
	};

	switch (true) do {
		case (1==0) : {
			PVDZ_sec_atp = format["WARNING true error for play3r UID#%1", getPlayerUID player];
			publicVariableServer "PVDZ_sec_atp";
			endMission "LOSER";
		};
	};

	_timeTrickCount = _timeTrickCount * 0.8;
	if (_time - _otime > 1 or _time < _otime) then {
		_timeTrickCount = _timeTrickCount +1;
		if (_timeTrickCount > 2) then {
			PVDZ_sec_atp = format["WARNING unusual time shift for UID#%1", getPlayerUID player];
			publicVariableServer "PVDZ_sec_atp";
		};
	};

	local _pid = netid player;
	_idTrickCount = _idTrickCount * 0.8;
	if (_pid != _netid) then {
		_idTrickCount = _idTrickCount +1;
		if (_idTrickCount > 2) then {
			PVDZ_sec_atp = format["WARNING unusual outfit swap for UID#%1", getPlayerUID player];
			publicVariableServer "PVDZ_sec_atp";
		};
	};

	if (isNull _grp) then { _grp = group ((entities 'FunctionsManager') select 0); };
	if (!isNull _grp) then {
		local _list = units _grp;
		if (count _list > 1) then {
			local _quit = false;
			for "_i" from 2 to (count _list)-1 do {
			    local _u = (_list select _i);
			    if (!isNull _u) then {
			        local _pos = getPosATL _u;
			        PVDZ_sec_atp = format ["From play3r UID#%1: illegal gr0up m3mber %2 at %3,%4... Server may be compromised!", getPlayerUID player, typeOf _u, _pos select 0, _pos select 1];
			        publicVariableServer "PVDZ_sec_atp";
			        deleteVehicle _u;
			        _quit = true;
			    };
			};
			if (_quit) then {
			    endMission "LOSER";
			};
		};
	};

	[ _pid, _time, _idTrickCount, _timeTrickCount, _grp ]
};
