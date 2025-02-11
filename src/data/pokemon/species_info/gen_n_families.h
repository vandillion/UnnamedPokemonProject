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
        .cryId = CRY_BULBASAUR,
        .natDexNum = NATIONAL_DEX_SUGARGLIDE,
        .categoryName = _("Glider"),
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
        .frontAnimId = ANIM_RISING_WOBBLE,
        .backPic = gMonBackPic_Sprigatito,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
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
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
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
        .cryId = CRY_BULBASAUR,
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
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fuecoco,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_SLIDE,
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
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
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
        .cryId = CRY_BULBASAUR,
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
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Quaxly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
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
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
        //.evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_FROGIDOKI}),
    },
#endif //P_FAMILY_RADPOLE

#if P_FAMILY_RACCAT
    [SPECIES_RACCAT] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_QUICK_FEET, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Raccat"),
        .cryId = CRY_BULBASAUR,
        .natDexNum = NATIONAL_DEX_RACCAT,
        .categoryName = _("????????????"),
        .height = 4,
        .weight = 175,
        .description = COMPOUND_STRING(
            "A Pokémon that has a body and wings of\n"
            "steel. People in the past used feathers\n"
            "fallen from Skarmory to make swords and\n"
            "knives."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 0,.frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Quaxly,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
                OVERWORLD(
            sPicTable_Quaxly,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            gOverworldPalette_Quaxly,
            gShinyOverworldPalette_Quaxly
        )
        .levelUpLearnset = sRaccatLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },
#endif //P_FAMILY_RACCAT

#if P_FAMILY_LUEL
    [SPECIES_LUEL] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 255,
        .expYield = 56,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_BIG_PECKS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Luel"),
        .cryId = CRY_BULBASAUR,
        .natDexNum = NATIONAL_DEX_LUEL,
        .categoryName = _("Koel"),
        .height = 7,
        .weight = 19,
        .description = COMPOUND_STRING(
            "A Pokémon that has a body and wings of\n"
            "steel. People in the past used feathers\n"
            "fallen from Skarmory to make swords and\n"
            "knives."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 0,.frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Quaxly,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
                OVERWORLD(
            sPicTable_Quaxly,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            gOverworldPalette_Quaxly,
            gShinyOverworldPalette_Quaxly
        )
        .levelUpLearnset = sLuelLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },
#endif //P_FAMILY_LUEL

#if P_FAMILY_BANDITOOK
    [SPECIES_BANDITOOK] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DARK),
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKPOCKET, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Banditook"),
        .cryId = CRY_BULBASAUR,
        .natDexNum = NATIONAL_DEX_BANDITOOK,
        .categoryName = _("Bandit"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "A Pokémon that has a body and wings of\n"
            "steel. People in the past used feathers\n"
            "fallen from Skarmory to make swords and\n"
            "knives."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 0,.frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Quaxly,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
                OVERWORLD(
            sPicTable_Quaxly,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            gOverworldPalette_Quaxly,
            gShinyOverworldPalette_Quaxly
        )
        .levelUpLearnset = sBanditookLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },
#endif //P_FAMILY_BANDITOOK

#if P_FAMILY_BABARK
    [SPECIES_BABARK] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 200,
        .expYield = 51,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS, EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_RUN_AWAY, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Babark"),
        .cryId = CRY_BULBASAUR,
        .natDexNum = NATIONAL_DEX_BABARK,
        .categoryName = _("Bush Dog"),
        .height = 3,
        .weight = 135,
        .description = COMPOUND_STRING(
            "A Pokémon that has a body and wings of\n"
            "steel. People in the past used feathers\n"
            "fallen from Skarmory to make swords and\n"
            "knives."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 0,.frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Quaxly,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
                OVERWORLD(
            sPicTable_Quaxly,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            gOverworldPalette_Quaxly,
            gShinyOverworldPalette_Quaxly
        )
        .levelUpLearnset = sBabarkLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },
#endif //P_FAMILY_BABARK

#if P_FAMILY_BELLANCO
    [SPECIES_BELLANCO] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 90,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FLYING, TYPE_STEEL),
        .catchRate = 25,
        .expYield = 168,
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_NONE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Bellanco"),
        .cryId = CRY_BULBASAUR,
        .natDexNum = NATIONAL_DEX_BELLANCO,
        .categoryName = _("Bell Bird"),
        .height = 17,
        .weight = 505,
        .description = COMPOUND_STRING(
            "A Pokémon that has a body and wings of\n"
            "steel. People in the past used feathers\n"
            "fallen from Skarmory to make swords and\n"
            "knives."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 0,.frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Quaxly,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
                OVERWORLD(
            sPicTable_Quaxly,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            gOverworldPalette_Quaxly,
            gShinyOverworldPalette_Quaxly
        )
        .levelUpLearnset = sBellancoLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },
#endif //P_FAMILY_BELLANCO

#if P_FAMILY_SKULLIAN
    [SPECIES_SKULLIAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DARK, TYPE_DARK),
        .catchRate = 190,
        .expYield = 65,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS, EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Skullian"),
        .cryId = CRY_BULBASAUR,
        .natDexNum = NATIONAL_DEX_SKULLIAN,
        .categoryName = _("Scalawag"),
        .height = 7,
        .weight = 45,
        .description = COMPOUND_STRING(
            "A Pokémon that has a body and wings of\n"
            "steel. People in the past used feathers\n"
            "fallen from Skarmory to make swords and\n"
            "knives."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 0,.frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Quaxly,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
                OVERWORLD(
            sPicTable_Quaxly,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            gOverworldPalette_Quaxly,
            gShinyOverworldPalette_Quaxly
        )
        .levelUpLearnset = sSkullianLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },
#endif //P_FAMILY_SKULLIAN

#ifdef __INTELLISENSE__
};
#endif
