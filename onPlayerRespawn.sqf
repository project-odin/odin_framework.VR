// Odin Framework
// 12/15/2019
// Executed locally when player respawns in a multiplayer mission. 

// Reset Previous Loadout
player setUnitLoadout (player getVariable ["Saved_Loadout",[]]);