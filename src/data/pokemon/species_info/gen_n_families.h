#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGenN[] =
{
#endif

#if P_FAMILY_SUGARGLIDE
    [SPECIES_SUGARGLIDE] =
    {
        .baseHP        = 35,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 67,
        .baseSpAttack  = 63,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sugarglide"),
        .cryId = CRY_SPRIGATITO,
        .natDexNum = NATIONAL_DEX_SUGARGLIDE,
        .categoryName = _("Sugar Glider"),
        .height = 4,
        .weight = 41,
        .description = COMPOUND_STRING(
            "The sweet scent its body gives off\n"
            "mesmerizes those around it. The\n"
            "scent grows stronger when this\n"
            "Pokémon is in the sun."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sprigatito,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Sprigatito,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Sprigatito,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Sprigatito,
        .shinyPalette = gMonShinyPalette_Sprigatito,
        .iconSprite = gMonIcon_Sprigatito,
        .iconPalIndex = 1,
        FOOTPRINT(Sprigatito)
        OVERWORLD(
            sPicTable_Sprigatito,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            gOverworldPalette_Sprigatito,
            gShinyOverworldPalette_Sprigatito
        )
        .levelUpLearnset = sSugarglideLevelUpLearnset,
        .teachableLearnset = sSprigatitoTeachableLearnset,
        .eggMoveLearnset = sSprigatitoEggMoveLearnset,
        //.evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_CANOKITE}),
    },
#endif //P_FAMILY_SUGARGLIDE

#if P_FAMILY_PARMI
    [SPECIES_PARMI] =
    {
        .baseHP        = 63,
        .baseAttack    = 67,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Parmi"),
        .cryId = CRY_FUECOCO,
        .natDexNum = NATIONAL_DEX_PARMI,
        .categoryName = _("Red Panda"),
        .height = 4,
        .weight = 98,
        .description = COMPOUND_STRING(
            "Its flame sac is small, so energy is\n"
            "always leaking out. This energy is\n"
            "released from the dent atop\n"
            "Fuecoco's head and flickers to and fro."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fuecoco,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Fuecoco,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fuecoco,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Fuecoco,
        .shinyPalette = gMonShinyPalette_Fuecoco,
        .iconSprite = gMonIcon_Fuecoco,
        .iconPalIndex = 2,
        FOOTPRINT(Fuecoco)
        OVERWORLD(
            sPicTable_Fuecoco,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            gOverworldPalette_Fuecoco,
            gShinyOverworldPalette_Fuecoco
        )
        .levelUpLearnset = sParmiLevelUpLearnset,
        .teachableLearnset = sFuecocoTeachableLearnset,
        .eggMoveLearnset = sFuecocoEggMoveLearnset,
        //.evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_PANDARO}),
    },
#endif //P_FAMILY_PARMI

#if P_FAMILY_RADPOLE
    [SPECIES_RADPOLE] =
    {
        .baseHP        = 67,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 55,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield =  62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Radpole"),
        .cryId = CRY_QUAXLY,
        .natDexNum = NATIONAL_DEX_RADPOLE,
        .categoryName = _("Phrog"),
        .height = 5,
        .weight = 61,
        .description = COMPOUND_STRING(
            "Its strong legs let it easily swim\n"
            "around in even fast-flowing rivers.\n"
            "It likes to keep things tidy and is\n"
            "prone to overthinking things."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Quaxly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Quaxly,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Quaxly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Quaxly,
        .shinyPalette = gMonShinyPalette_Quaxly,
        .iconSprite = gMonIcon_Quaxly,
        .iconPalIndex = 0,
        FOOTPRINT(Quaxly)
        OVERWORLD(
            sPicTable_Quaxly,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            gOverworldPalette_Quaxly,
            gShinyOverworldPalette_Quaxly
        )
        .levelUpLearnset = sRadpoleLevelUpLearnset,
        .teachableLearnset = sQuaxlyTeachableLearnset,
        .eggMoveLearnset = sQuaxlyEggMoveLearnset,
        //.evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_FROGIDOKI}),
    },
#endif //P_FAMILY_RADPOLE

#ifdef __INTELLISENSE__
};
#endif
