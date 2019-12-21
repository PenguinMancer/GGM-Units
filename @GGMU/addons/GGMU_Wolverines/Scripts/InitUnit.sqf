_unit = _this select 0; 
_typeofUnit = toLower (_this select 1); 

if (isServer && !(_unit getvariable ["Unit_invset", false])) then { 
	//#include "SetUnitIdentity.sqf"			//Should set updated identities, I think this may not be necessary any more.
    #include "RandomizeUnits.sqf"	            //actual equipment set.
} 
else { // Check for JIP from standard slots.  
            if (local _unit) then  
            { 
                If (isNil "Unit_isJIP") then  
                { 
                    Unit_isJIP = false; 
                    //If not JIP then skip all this. 
                    if (isNull player) then  
                    { 
                        if !(isDedicated || !isMultiplayer) then  
                        { 
                        Unit_isJIP = true; 
                        }; 
                    }; 
                }; 
                If (isNil "Unit_isJIP") then {diag_log format ["UNIT WARNING Unit_isJIP = %1",Unit_isJIP]}; 
                If (Unit_isJIP || time>10) then  
                {  
				//#include "SetUnitIdentity.sqf"
				#include "RandomizeUnits.sqf"
                }; 
            }; 
};