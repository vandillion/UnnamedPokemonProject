Common_EventScript_MartClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE08_GET, CommonMartAllBadges
	goto_if_set FLAG_BADGE07_GET, CommonMart7Badges
	goto_if_set FLAG_BADGE05_GET, CommonMart5Badges
	goto_if_set FLAG_BADGE04_GET, CommonMart4Badges
	goto_if_set FLAG_BADGE03_GET, CommonMart3Badges
	goto_if_set FLAG_BADGE01_GET, CommonMart1Badge
	pokemart PokemartNoBadges
	msgbox gText_PleaseComeAgain, MSGBOX_AUTOCLOSE
	end


CommonMart1Badge:
	pokemart Pokemart1Badge
	msgbox gText_PleaseComeAgain, MSGBOX_AUTOCLOSE
	end


CommonMart3Badges:
	pokemart Pokemart3Badges
	msgbox gText_PleaseComeAgain, MSGBOX_AUTOCLOSE
	end


CommonMart4Badges:
	pokemart Pokemart4Badges
	msgbox gText_PleaseComeAgain, MSGBOX_AUTOCLOSE
	end


CommonMart5Badges:
	pokemart Pokemart5Badges
	msgbox gText_PleaseComeAgain, MSGBOX_AUTOCLOSE
	end


CommonMart7Badges:
	pokemart Pokemart7Badges
	msgbox gText_PleaseComeAgain, MSGBOX_AUTOCLOSE
	end


CommonMartAllBadges:
	pokemart PokemartAllBadges
	msgbox gText_PleaseComeAgain, MSGBOX_AUTOCLOSE
	end

gText_HowMayIServeYou::
	.string "Welcome!\n"
	.string "How may I serve you?$"

gText_PleaseComeAgain::
	.string "Please come again!$"

gText_PlayerWhatCanIDoForYou::
	.string "{PLAYER}{STRING 5}, welcome!\n"
	.string "What can I do for you?$"
	
	.align 2
PokemartNoBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_NONE

	.align 2
Pokemart1Badge:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
Pokemart3Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

	.align 2
Pokemart4Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

	.align 2
Pokemart5Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

	.align 2
Pokemart7Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

	.align 2
PokemartAllBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
