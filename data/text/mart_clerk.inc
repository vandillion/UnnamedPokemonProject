Common_EventScript_MartClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_unset FLAG_SYS_POKEDEX_GET, CommonMartNoDex
	pokemart
Common_EventScript_MartClerk_Continue:
	msgbox gText_PleaseComeAgain, MSGBOX_AUTOCLOSE
	end

CommonMartNoDex:
	pokemart PokemartNoDex
	goto Common_EventScript_MartClerk_Continue

	.align 2
PokemartNoDex:
	.2byte ITEM_POTION
	.2byte ITEM_NONE

gText_HowMayIServeYou::
	.string "Welcome!\n"
	.string "How may I serve you?$"

gText_PleaseComeAgain::
	.string "Please come again!$"

gText_PlayerWhatCanIDoForYou::
	.string "{PLAYER}{STRING 5}, welcome!\n"
	.string "What can I do for you?$"
