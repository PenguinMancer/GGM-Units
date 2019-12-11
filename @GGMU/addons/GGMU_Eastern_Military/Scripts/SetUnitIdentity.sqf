_Speakers = ["Male01ENG", "Male02ENG", "Male03ENG", "Male04ENG", "Male05ENG", "Male06ENG", "Male07ENG", "Male08ENG", "Male09ENG", "Male10ENG", "Male11ENG", "Male12ENG", "Male01ENGB", "Male02ENGB", "Male03ENGB", "Male04ENGB", "Male05ENGB"];
_Faces = ["GreekHead_A3_01", "GreekHead_A3_03", "AfricanHead_03", "Johnson", "PersianHead_A3_03", "WhiteHead_13", "WhiteHead_21"];

switch (_typeofUnit) do 
{
	case "general": 
    {
	[_unit,"ARC_Patch_FR"] call bis_fnc_setUnitInsignia;
	_unit setSpeaker "ACE_NoVoice";
	_unit setFace "WhiteHead_10";
    };
	case "mpilot": 
    { 
	[_unit,"GryffinRegiment"] call bis_fnc_setUnitInsignia;
	_unit setSpeaker "Male02ENGB";
	_unit setFace "Zee_White_Head_08";
    }; 
	default
    { 
	[_unit,"ARC_Patch_FR"] call bis_fnc_setUnitInsignia;
	_unit setSpeaker (selectRandom _Speakers);
	_unit setFace (selectRandom _Faces);
    }; 
}; 