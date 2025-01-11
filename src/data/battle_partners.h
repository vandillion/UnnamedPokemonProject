//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [PARTNER_NONE] =
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
    [PARTNER_ORION_GRASS] =
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
            .species = SPECIES_SUGARGLIDE,
#line 15
            .gender = TRAINER_MON_MALE,
#line 17
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 16
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 17
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 20
    [PARTNER_ORION_FIRE] =
    {
#line 21
        .trainerName = _("Orion"),
#line 22
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 23
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender = 
#line 25
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 27
            .species = SPECIES_PARMI,
#line 27
            .gender = TRAINER_MON_MALE,
#line 29
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 28
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 29
                MOVE_SCRATCH,
                MOVE_TAIL_WHIP,
            },
            },
        },
    },
#line 32
    [PARTNER_ORION_WATER] =
    {
#line 33
        .trainerName = _("Orion"),
#line 34
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 35
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender = 
#line 37
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 39
            .species = SPECIES_RADPOLE,
#line 39
            .gender = TRAINER_MON_MALE,
#line 41
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 40
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 41
                MOVE_POUND,
                MOVE_LEER,
            },
            },
        },
    },
