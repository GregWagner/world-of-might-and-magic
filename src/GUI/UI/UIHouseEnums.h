#pragma once

#include <cstdint>

#include "Utility/Segment.h"

enum GUILD_ID : int32_t {
    GUILD_OF_ELEMENTS = 0,
    GUILD_OF_SELF = 1,
    GUILD_OF_AIR = 2,
    GUILD_OF_EARTH = 3,
    GUILD_OF_FIRE = 4,
    GUILD_OF_WATER = 5,
    GUILD_OF_BODY = 6,
    GUILD_OF_MIND = 7,
    GUILD_OF_SPIRIT = 8,
    GUILD_OF_LIGHT = 9,
    GUILD_OF_DARK = 10,

    GUILD_FIRST = GUILD_OF_ELEMENTS,
    GUILD_LAST = GUILD_OF_DARK
};

enum HOUSE_ID {
    HOUSE_INVALID = 0,
    HOUSE_SMITH_EMERALD_ISLE = 1,
    HOUSE_SMITH_HARMONDALE = 2,
    HOUSE_SMITH_ERATHIA = 3,
    HOUSE_SMITH_TULAREAN_FOREST = 4,
    HOUSE_SMITH_CELESTE = 5,
    HOUSE_SMITH_PIT = 6,
    HOUSE_SMITH_NIGHON = 7,
    HOUSE_SMITH_TATALIA_VANDERS = 8,
    HOUSE_SMITH_AVLEE = 9,
    HOUSE_SMITH_STONE_CITY = 10,
    HOUSE_SMITH_CASTLE_HARMONDALE = 11,
    HOUSE_SMITH_TATALIA_ALLOYED = 12,
    HOUSE_SMITH_13 = 13,
    HOUSE_SMITH_14 = 14,
    HOUSE_ARMOURER_EMERALD_ISLE = 15,
    HOUSE_ARMOURER_HARMONDALE = 16,
    HOUSE_ARMOURER_ERATHIA = 17,
    HOUSE_ARMOURER_TULAREAN_FOREST = 18,
    HOUSE_ARMOURER_CELESTE = 19,
    HOUSE_ARMOURER_PIT = 20,
    HOUSE_ARMOURER_NIGHON = 21,
    HOUSE_ARMOURER_TATALIA_MISSING_LINK = 22,
    HOUSE_ARMOURER_AVLEE = 23,
    HOUSE_ARMOURER_STONE_CITY = 24,
    HOUSE_ARMOURER_CASTLE_HARMONDALE = 25,
    HOUSE_ARMOURER_TATALIA_ALLOYED = 26,
    HOUSE_ARMOURER_27 = 27,
    HOUSE_ARMOURER_28 = 28,
    HOUSE_MAGE_EMERALD_ISLE = 29,
    HOUSE_MAGE_HARMONDALE = 30,
    HOUSE_MAGE_ERATHIA = 31,
    HOUSE_MAGE_TULAREAN_FOREST = 32,
    HOUSE_MAGE_DEYJA = 33,
    HOUSE_MAGE_BRACADA_DESERT = 34,
    HOUSE_MAGE_CELESTE = 35,
    HOUSE_MAGE_PIT = 36,
    HOUSE_MAGE_NIGHON = 37,
    HOUSE_MAGE_STONE_CITY = 38,
    HOUSE_MAGE_39 = 39,
    HOUSE_MAGE_40 = 40,
    HOUSE_MAGE_41 = 41,
    HOUSE_ALCHEMIST_EMERALD_ISLE = 42,
    HOUSE_ALCHEMIST_HARMONDALE = 43,
    HOUSE_ALCHEMIST_ERATHIA = 44,
    HOUSE_ALCHEMIST_TULAREAN_FOREST = 45,
    HOUSE_ALCHEMIST_DEYJA = 46,
    HOUSE_ALCHEMIST_BRACADA_DESERT = 47,
    HOUSE_ALCHEMIST_CELESTE = 48,
    HOUSE_ALCHEMIST_PIT = 49,
    HOUSE_ALCHEMIST_STONE_CITY = 50,
    HOUSE_ALCHEMIST_CASTLE_HARMONDALE = 51,
    HOUSE_ALCHEMIST_52 = 52,
    HOUSE_ALCHEMIST_53 = 53,
    HOUSE_STABLES_HARMONDALE = 54,
    HOUSE_STABLES_STEADWICK = 55,
    HOUSE_STABLES_TULAREAN_FOREST = 56,
    HOUSE_STABLES_DEYJA = 57,
    HOUSE_STABLES_BRACADA_DESERT = 58,
    HOUSE_STABLES_TATALIA = 59,
    HOUSE_STABLES_AVLEE = 60,
    HOUSE_STABLES_61 = 61,
    HOUSE_STABLES_62 = 62,
    HOUSE_BOATS_EMERALD_ISLE = 63,
    HOUSE_BOATS_ERATHIA = 64,
    HOUSE_BOATS_TULAREAN_FOREST = 65,
    HOUSE_BOATS_BRACADA_DESERT = 66,
    HOUSE_BOATS_EVENMORN_ISLAND = 67,
    HOUSE_BOATS_PIT = 68, // Not made it in MM7, but boat with the same name exist in MM8
    HOUSE_BOATS_TATALIA = 69,
    HOUSE_BOATS_AVLEE = 70,
    HOUSE_BOATS_CELESTE = 71, // Not made it in MM7
    HOUSE_BOATS_72 = 72,
    HOUSE_BOATS_73 = 73,
    HOUSE_TEMPLE_EMERALD_ISLE = 74,
    HOUSE_TEMPLE_HARMONDALE = 75,
    HOUSE_TEMPLE_ERATHIA = 76,
    HOUSE_TEMPLE_TULAREAN_FOREST = 77,
    HOUSE_TEMPLE_DEYJA = 78,
    HOUSE_TEMPLE_BRACADA_DESERT = 79,
    HOUSE_TEMPLE_CELESTE = 80,
    HOUSE_TEMPLE_PIT = 81,
    HOUSE_TEMPLE_NIGHON = 82,
    HOUSE_TEMPLE_TATALIA = 83,
    HOUSE_TEMPLE_AVLEE = 84,
    HOUSE_TEMPLE_STONE_CITY = 85,
    HOUSE_TEMPLE_CASTLE_HARMONDALE = 86,
    HOUSE_TEMPLE_87 = 87,
    HOUSE_TEMPLE_88 = 88,
    HOUSE_TRAINING_HALL_EMERALD_ISLE = 89,
    HOUSE_TRAINING_HALL_HARMONDALE = 90,
    HOUSE_TRAINING_HALL_ERATHIA = 91,
    HOUSE_TRAINING_HALL_TULAREAN_FOREST = 92,
    HOUSE_TRAINING_HALL_CELESTE = 93,
    HOUSE_TRAINING_HALL_PIT = 94,
    HOUSE_TRAINING_HALL_NIGHON = 95,
    HOUSE_TRAINING_HALL_TATALIA = 96,
    HOUSE_TRAINING_HALL_AVLEE = 97,
    HOUSE_TRAINING_HALL_STONE_CITY = 98,

    HOUSE_TOWNHALL_HARMONDALE = 102,
    HOUSE_TOWNHALL_ERATHIA = 103, // aka Steadwick Townhall.
    HOUSE_TOWNHALL_TULAREAN_FOREST = 104, // aka Pierpont Townhall.
    HOUSE_TOWNHALL_CELESTE = 105, // aka Hall of Dawn.
    HOUSE_TOWNHALL_THE_PIT = 106, // aka Hall of Midnight.
    HOUSE_TAVERN_EMERALD_ISLE = 107,
    HOUSE_TAVERN_STONE_CITY = 120,
    HOUSE_BANK_HARMONDALE = 128,
    HOUSE_FIRE_GUILD_INITIATE_EMERALD_ISLE = 139,
    HOUSE_FIRE_GUILD_ADEPT_HARMONDALE = 140,
    HOUSE_FIRE_GUILD_MASTER_TULAREAN_FOREST = 141,
    HOUSE_FIRE_GUILD_PARAMOUNT_NIGHON = 142,
    HOUSE_AIR_GUILD_INITIATE_EMERALD_ISLE = 143,
    HOUSE_AIR_GUILD_ADEPT_HARMONDALE = 144,
    HOUSE_AIR_GUILD_MASTER_TULAREAN_FOREST = 145,
    HOUSE_AIR_GUILD_PARAMOUNT_CELESTE = 146,
    HOUSE_WATER_GUILD_INITIATE_HARMONDALE = 147,
    HOUSE_WATER_GUILD_ADEPT_TULAREAN_FOREST = 148,
    HOUSE_WATER_GUILD_MASTER_BRACADA_DESERT = 149,
    HOUSE_WATER_GUILD_PARAMOUNT_EVENMORN = 150,
    HOUSE_EARTH_GUILD_INITIATE_HARMONDALE = 151,
    HOUSE_EARTH_GUILD_ADEPT_TULAREAN_FOREST = 152,
    HOUSE_EARTH_GUILD_MASTER_STONE_CITY = 153,
    HOUSE_EARTH_GUILD_PARAMOUNT_PIT = 154,
    HOUSE_SPIRIT_GUILD_INITIATE_EMERALD_ISLE = 155,
    HOUSE_SPIRIT_GUILD_ADEPT_HARMONDALE = 156,
    HOUSE_SPIRIT_GUILD_MASTER_DEYJA = 157,
    HOUSE_SPIRIT_GUILD_PARAMOUNT_ERATHIA = 158,
    HOUSE_MIND_GUILD_INITIATE_HARMONDALE = 159,
    HOUSE_MIND_GUILD_ADEPT_ERATHIA = 160,
    HOUSE_MIND_GUILD_MASTER_TATALIA = 161,
    HOUSE_MIND_GUILD_PARAMOUNT_AVLEE = 162,
    HOUSE_BODY_GUILD_INITIATE_EMERALD_ISLE = 163,
    HOUSE_BODY_GUILD_ADEPT_HARMONDALE = 164,
    HOUSE_BODY_GUILD_MASTER_ERATHIA = 165,
    HOUSE_BODY_GUILD_PARAMOUNT_AVLEE = 166,
    HOUSE_LIGHT_GUILD_ADEPT_BRACADA_DESERT = 167,
    HOUSE_LIGHT_GUILD_PARAMOUNT_CELESTE = 168,
    HOUSE_DARK_GUILD_ADEPT_DEYJA = 169,
    HOUSE_DARK_GUILD_PARAMOUNT_PIT = 170,
    HOUSE_SELF_GUILD_1 = 171,
    HOUSE_SELF_GUILD_2 = 172,
    HOUSE_LORD_AND_JUDGE_EMERALD_ISLE = 186,
    HOUSE_JAIL = 187,
    HOUSE_JUDGE_HARMONDALE = 190,
    HOUSE_224_EMERALD_ISLE = 224,
    HOUSE_225_EMERALD_ISLE = 225,
    HOUSE_238_EMERALD_ISLE = 238,
    HOUSE_466_HARMONDALE = 466,
    HOUSE_467_HARMONDALE = 467,
    HOUSE_468_HARMONDALE = 468,
    HOUSE_472_HARMONDALE = 472,
    HOUSE_488_HARMONDALE = 488,
    HOUSE_489_HARMONDALE = 489,
    HOUSE_524 = 524,

    // These two are "pseudo" houses, they does not have entry in building table
    HOUSE_THRONEROOM_WIN_GOOD = 600,  // Final task completion for good side
    HOUSE_THRONEROOM_WIN_EVIL = 601,   // Final task completion for evil side

    HOUSE_FIRST_SHOP = HOUSE_SMITH_EMERALD_ISLE,
    HOUSE_LAST_SHOP = HOUSE_ALCHEMIST_52, // Using 52 and not 53 because vanilla shop arrays does not take it into account.

    HOUSE_FIRST_WEAPON_SHOP = HOUSE_SMITH_EMERALD_ISLE,
    HOUSE_LAST_WEAPON_SHOP = HOUSE_SMITH_14,

    HOUSE_FIRST_ARMOR_SHOP = HOUSE_ARMOURER_EMERALD_ISLE,
    HOUSE_LAST_ARMOR_SHOP = HOUSE_ARMOURER_28,

    HOUSE_FIRST_MAGIC_SHOP = HOUSE_MAGE_EMERALD_ISLE,
    HOUSE_LAST_MAGIC_SHOP = HOUSE_MAGE_41,

    HOUSE_FIRST_ALCHEMY_SHOP = HOUSE_ALCHEMIST_EMERALD_ISLE,
    HOUSE_LAST_ALCHEMY_SHOP = HOUSE_ALCHEMIST_53,

    HOUSE_FIRST_STABLE = HOUSE_STABLES_HARMONDALE,
    HOUSE_LAST_STABLE = HOUSE_STABLES_62,

    HOUSE_FIRST_BOAT = HOUSE_BOATS_EMERALD_ISLE,
    HOUSE_LAST_BOAT = HOUSE_BOATS_73,

    HOUSE_FIRST_TRANSPORT = HOUSE_STABLES_HARMONDALE,
    HOUSE_LAST_TRANSPORT = HOUSE_BOATS_73,

    HOUSE_FIRST_MAGIC_GUILD = HOUSE_FIRE_GUILD_INITIATE_EMERALD_ISLE,
    HOUSE_LAST_MAGIC_GUILD = HOUSE_DARK_GUILD_PARAMOUNT_PIT, // self guilds (which is missing in MM7) are not counted here

    HOUSE_FIRST_TOWNHALL = HOUSE_TOWNHALL_HARMONDALE,
    HOUSE_LAST_TOWNHALL = HOUSE_TOWNHALL_THE_PIT,

    HOUSE_FIRST = HOUSE_SMITH_EMERALD_ISLE,
    HOUSE_LAST = HOUSE_524
};

inline Segment<HOUSE_ID> allTownhallHouses() {
    return {HOUSE_FIRST_TOWNHALL, HOUSE_LAST_TOWNHALL};
}

inline Segment<HOUSE_ID> allHouses() {
    return {HOUSE_FIRST, HOUSE_LAST};
}

inline bool isShop(HOUSE_ID houseId) {
    return houseId >= HOUSE_FIRST_SHOP && houseId <= HOUSE_LAST_SHOP;
}

inline bool isWeaponShop(HOUSE_ID houseId) {
    return houseId >= HOUSE_FIRST_WEAPON_SHOP && houseId <= HOUSE_LAST_WEAPON_SHOP;
}

inline bool isArmorShop(HOUSE_ID houseId) {
    return houseId >= HOUSE_FIRST_ARMOR_SHOP && houseId <= HOUSE_LAST_ARMOR_SHOP;
}

inline bool isMagicShop(HOUSE_ID houseId) {
    return houseId >= HOUSE_FIRST_MAGIC_SHOP && houseId <= HOUSE_LAST_MAGIC_SHOP;
}

inline bool isAlchemyShop(HOUSE_ID houseId) {
    return houseId >= HOUSE_FIRST_ALCHEMY_SHOP && houseId <= HOUSE_LAST_ALCHEMY_SHOP;
}

inline bool isMagicGuild(HOUSE_ID houseId) {
    return houseId >= HOUSE_FIRST_MAGIC_GUILD && houseId <= HOUSE_LAST_MAGIC_GUILD;
}

inline bool isStable(HOUSE_ID houseId) {
    return houseId >= HOUSE_FIRST_STABLE && houseId <= HOUSE_LAST_STABLE;
}

inline bool isBoat(HOUSE_ID houseId) {
    return houseId >= HOUSE_FIRST_BOAT && houseId <= HOUSE_LAST_BOAT;
}

enum class HouseSoundType : uint32_t {
    HOUSE_SOUND_GENERAL_GREETING = 1,
    HOUSE_SOUND_GENERAL_NOT_ENOUGH_GOLD = 2,

    HOUSE_SOUND_MAGIC_GUILD_MEMBERS_ONLY = 3,
    HOUSE_SOUND_SHOP_GOODBYE_RUDE = 3,
    HOUSE_SOUND_SHOP_GOODBYE_POLITE = 4,
    HOUSE_SOUND_ALCHEMY_SHOP_GOODBYE_REGULAR = 3,
    HOUSE_SOUND_ALCHEMY_SHOP_GOODBYE_BOUGHT = 4,
    HOUSE_SOUND_TEMPLE_GOODBYE = 3,
    HOUSE_SOUND_BANK_GOODBYE = 3,
    HOUSE_SOUND_TAVERN_RENT_ROOM = 2,
    HOUSE_SOUND_TAVERN_BUY_FOOD = 3,
    HOUSE_SOUND_TAVERN_NOT_ENOUGH_GOLD = 4,
    HOUSE_SOUND_TRAINING_TRAIN = 2,
    HOUSE_SOUND_TRAINING_CANT_TRAIN = 3,
    HOUSE_SOUND_TRAINING_NOT_ENOUGH_GOLD = 4,
    HOUSE_SOUND_TRANSPORT_TRAVEL = 2,
    HOUSE_SOUND_TRANSPORT_NOT_ENOUGH_GOLD = 3
};
using enum HouseSoundType;
