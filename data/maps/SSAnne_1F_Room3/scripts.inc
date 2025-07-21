SSAnne_1F_Room3_MapScripts::
	.byte 0

SSAnne_1F_Room3_EventScript_LittleGirl::
	msgbox SSAnne_1F_Room3_Text_AlwaysTravelWithWigglytuff, MSGBOX_NPC
	end

SSAnne_1F_Room3_EventScript_BaldingMan::
	lock
	faceplayer
	msgbox SSAnne_1F_Room3_Text_OfferHealing, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, SSAnne_1F_Room3_EventScript_HealPokemon
	case 1, SSAnne_1F_Room3_EventScript_DeclineHealing
	case SCR_MENU_CANCEL, SSAnne_1F_Room3_EventScript_DeclineHealing
	release
	end

SSAnne_1F_Room3_EventScript_HealPokemon::
	msgbox SSAnne_1F_Room3_Text_HealingPokemon
	waitmessage
	call SSAnne_1F_Room3_EventScript_DoHealing
	msgbox SSAnne_1F_Room3_Text_HealingComplete
	release
	end

SSAnne_1F_Room3_EventScript_DoHealing::
	applymovement VAR_LAST_TALKED, Movement_Bow
	waitmovement 0
	special HealPlayerParty
	return

SSAnne_1F_Room3_EventScript_DeclineHealing::
	msgbox SSAnne_1F_Room3_Text_CruiseIsElegantAndCozy
	release
	end

SSAnne_1F_Room3_EventScript_Wigglytuff::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WIGGLYTUFF, CRY_MODE_NORMAL
	msgbox SSAnne_1F_Room3_Text_Wigglytuff
	waitmoncry
	release
	end
