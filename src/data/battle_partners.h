//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_ORION_GRASS] =
    {
#line 9
        .trainerName = _("Orion"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 13
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_JUNGLIDE,
#line 15
            .gender = TRAINER_MON_MALE,
#line 17
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 16
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 18
    [DIFFICULTY_NORMAL][PARTNER_ORION_FIRE] =
    {
#line 19
        .trainerName = _("Orion"),
#line 20
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 21
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 23
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 25
            .species = SPECIES_PARMI,
#line 25
            .gender = TRAINER_MON_MALE,
#line 27
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 26
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 28
    [DIFFICULTY_NORMAL][PARTNER_ORION_WATER] =
    {
#line 29
        .trainerName = _("Orion"),
#line 30
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 31
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 33
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 35
            .species = SPECIES_RADPOLE,
#line 35
            .gender = TRAINER_MON_MALE,
#line 37
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 36
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
