#pragma once

enum AdviceType
{
    ADVICE_NONE = -1,
    ADVICE_CLICK_ON_SUN = 0,
    ADVICE_CLICKED_ON_SUN = 1,
    ADVICE_CLICKED_ON_COIN = 2,
    ADVICE_SEED_REFRESH = 3,
    ADVICE_CANT_AFFORD_PLANT = 4,
    ADVICE_PLANT_GRAVEBUSTERS_ON_GRAVES = 5,
    ADVICE_PLANT_LILYPAD_ON_WATER = 6,
    ADVICE_PLANT_TANGLEKELP_ON_WATER = 7,
    ADVICE_PLANT_SEASHROOM_ON_WATER = 8,
    ADVICE_PLANT_POTATOE_MINE_ON_LILY = 9,
    ADVICE_PLANT_WRONG_ART_TYPE = 10,
    ADVICE_PLANT_NEED_POT = 11,
    ADVICE_PLANT_NOT_ON_GRAVE = 12,
    ADVICE_PLANT_NOT_ON_CRATER = 13,
    ADVICE_CANT_PLANT_THERE = 14,
    ADVICE_PLANT_NOT_ON_WATER = 15,
    ADVICE_PLANTING_NEEDS_GROUND = 16,
    ADVICE_BEGHOULED_DRAG_TO_MATCH_3 = 17,
    ADVICE_BEGHOULED_MATCH_3 = 18,
    ADVICE_BEGHOULED_MATCH_4 = 19,
    ADVICE_BEGHOULED_SAVE_SUN = 20,
    ADVICE_BEGHOULED_USE_CRATER_1 = 21,
    ADVICE_BEGHOULED_USE_CRATER_2 = 22,
    ADVICE_PLANT_NOT_PASSED_LINE = 23,
    ADVICE_PLANT_ONLY_ON_REPEATERS = 24,
    ADVICE_PLANT_ONLY_ON_MELONPULT = 25,
    ADVICE_PLANT_ONLY_ON_SUNFLOWER = 26,
    ADVICE_PLANT_ONLY_ON_SPIKEWEED = 27,
    ADVICE_PLANT_ONLY_ON_KERNELPULT = 28,
    ADVICE_PLANT_ONLY_ON_MAGNETSHROOM = 29,
    ADVICE_PLANT_ONLY_ON_FUMESHROOM = 30,
    ADVICE_PLANT_ONLY_ON_LILYPAD = 31,
    ADVICE_PLANT_NEEDS_REPEATER = 32,
    ADVICE_PLANT_NEEDS_MELONPULT = 33,
    ADVICE_PLANT_NEEDS_SUNFLOWER = 34,
    ADVICE_PLANT_NEEDS_SPIKEWEED = 35,
    ADVICE_PLANT_NEEDS_KERNELPULT = 36,
    ADVICE_PLANT_NEEDS_MAGNETSHROOM = 37,
    ADVICE_PLANT_NEEDS_FUMESHROOM = 38,
    ADVICE_PLANT_NEEDS_LILYPAD = 39,
    ADVICE_SLOT_MACHINE_PULL = 40,
    ADVICE_HUGE_WAVE = 41,
    ADVICE_SHOVEL_REFRESH = 42,
    ADVICE_PORTAL_RELOCATING = 43,
    ADVICE_SLOT_MACHINE_COLLECT_SUN = 44,
    ADVICE_DESTORY_POTS_TO_FINISIH_LEVEL = 45,
    ADVICE_USE_SHOVEL_ON_POTS = 46,
    ADVICE_ALMOST_THERE = 47,
    ADVICE_ZOMBIQUARIUM_CLICK_TROPHY = 48,
    ADVICE_ZOMBIQUARIUM_COLLECT_SUN = 49,
    ADVICE_ZOMBIQUARIUM_CLICK_TO_FEED,
    ADVICE_ZOMBIQUARIUM_BUY_SNORKEL,
    ADVICE_I_ZOMBIE_PLANTS_NOT_REAL,
    ADVICE_I_ZOMBIE_NOT_PASSED_LINE,
    ADVICE_I_ZOMBIE_LEFT_OF_LINE,
    ADVICE_SLOT_MACHINE_SPIN_AGAIN,
    ADVICE_I_ZOMBIE_EAT_ALL_BRAINS,
    ADVICE_PEASHOOTER_DIED,
    ADVICE_STINKY_SLEEPING,
    ADVICE_BEGHOULED_NO_MOVES,
    ADVICE_PLANT_SUNFLOWER5,
    ADVICE_PLANTING_NEED_SLEEPING,
    ADVICE_CLICK_TO_CONTINUE,
    ADVICE_SURVIVE_FLAGS,
    ADVICE_UNLOCKED_MODE,
    ADVICE_NEED_WHEELBARROW,
    NUM_ADVICE_TYPES
};
enum AlmanacPage
{
    ALMANAC_PAGE_INDEX,
    ALMANAC_PAGE_PLANTS,
    ALMANAC_PAGE_ZOMBIES
};
enum AwardType
{
    AWARD_FORLEVEL,
    AWARD_CREDITS_ZOMBIENOTE,
    AWARD_HELP_ZOMBIENOTE,
    AWARD_ACHIEVEMENTONLY,
    AWARD_PRECREDITS_ZOMBIENOTE,
};
enum BackgroundType
{
    BACKGROUND_1_DAY,
    BACKGROUND_2_NIGHT,
    BACKGROUND_3_POOL,
    BACKGROUND_4_FOG,
    BACKGROUND_5_ROOF,
    BACKGROUND_6_BOSS,
    BACKGROUND_7_FLOOD,
    BACKGROUND_8_STORM,
    BACKGROUND_9_HARD,
    BACKGROUND_10_HARDNIGHT,
    BACKGROUND_MUSHROOM_GARDEN,
    BACKGROUND_GREENHOUSE,
    BACKGROUND_ZOMBIQUARIUM,
    BACKGROUND_TREEOFWISDOM
};
enum BoardResult
{
    BOARDRESULT_NONE = 0,
    BOARDRESULT_WON = 1,
    BOARDRESULT_LOST = 2,
    BOARDRESULT_RESTART = 3,
    BOARDRESULT_QUIT = 4,
    BOARDRESULT_QUIT_APP = 5,
    BOARDRESULT_CHEAT = 6
};
enum BossPart
{
    BOSS_PART_BACK_LEG = 0,
    BOSS_PART_FRONT_LEG = 1,
    BOSS_PART_MAIN = 2,
    BOSS_PART_BACK_ARM = 3,
    BOSS_PART_FIREBALL = 4
};
enum ChallengePage
{
    CHALLENGE_PAGE_SURVIVAL = 0,
    CHALLENGE_PAGE_CHALLENGE = 1,
    CHALLENGE_PAGE_LIMBO = 2,
    CHALLENGE_PAGE_PUZZLE = 3,
    MAX_CHALLANGE_PAGES = 4
};
enum ChallengeState
{
    STATECHALLENGE_NORMAL,
    STATECHALLENGE_BEGHOULED_MOVING,
    STATECHALLENGE_BEGHOULED_FALLING,
    STATECHALLENGE_BEGHOULED_NO_MATCHES,
    STATECHALLENGE_SLOT_MACHINE_ROLLING,
    STATECHALLENGE_STORM_FLASH_1,
    STATECHALLENGE_STORM_FLASH_2,
    STATECHALLENGE_STORM_FLASH_3,
    STATECHALLENGE_ZEN_FADING,
    STATECHALLENGE_SCARY_POTTER_MALLETING,
    STATECHALLENGE_LAST_STAND_ONSLAUGHT,
    STATECHALLENGE_TREE_JUST_GREW,
    STATECHALLENGE_TREE_GIVE_WISDOM,
    STATECHALLENGE_TREE_WAITING_TO_BABBLE,
    STATECHALLENGE_TREE_BABBLING
};
enum ChosenSeedState
{
    SEED_FLYING_TO_BANK = 0,
    SEED_IN_BANK = 1,
    SEED_FLYING_TO_CHOOSER = 2,
    SEED_IN_CHOOSER = 3,
    SEED_PACKET_HIDDEN = 4
};
enum CoinMotion
{
    COIN_MOTION_FROM_SKY = 0,
    COIN_MOTION_FROM_SKY_SLOW = 1,
    COIN_MOTION_FROM_PLANT = 2,
    COIN_MOTION_COIN = 3,
    COIN_MOTION_LAWNMOWER_COIN = 4,
    COIN_MOTION_FROM_PRESENT = 5,
    COIN_MOTION_FROM_BOSS = 6
};
enum CoinType
{
    COIN_NONE,
    COIN_SILVER,
    COIN_GOLD,
    COIN_DIAMOND,
    COIN_SUN,
    COIN_SMALLSUN,
    COIN_LARGESUN,
    COIN_FINAL_SEED_PACKET,
    COIN_TROPHY,
    COIN_SHOVEL,
    COIN_ALMANAC,
    COIN_CARKEYS,
    COIN_VASE,
    COIN_WATERING_CAN,
    COIN_TACO,
    COIN_NOTE,
    COIN_USABLE_SEED_PACKET,
    COIN_PRESENT_PLANT,
    COIN_AWARD_MONEY_BAG,
    COIN_AWARD_PRESENT,
    COIN_AWARD_BAG_DIAMOND,
    COIN_AWARD_SILVER_SUNFLOWER,
    COIN_AWARD_GOLD_SUNFLOWER,
    COIN_CHOCOLATE,
    COIN_AWARD_CHOCOLATE,
    COIN_PRESENT_MINIGAMES,
    COIN_PRESENT_PUZZLE_MODE,
    COIN_PRESENT_SURVIVAL_MODE,
};
enum CrazyDaveState
{
    CRAZY_DAVE_OFF = 0,
    CRAZY_DAVE_ENTERING = 1,
    CRAZY_DAVE_LEAVING = 2,
    CRAZY_DAVE_IDLING = 3,
    CRAZY_DAVE_TALKING = 4,
    CRAZY_DAVE_HANDING_TALKING = 5,
    CRAZY_DAVE_HANDING_IDLING = 6
};
enum CursorType
{
    CURSOR_TYPE_NORMAL,
    CURSOR_TYPE_PLANT_FROM_BANK,
    CURSOR_TYPE_PLANT_FROM_USABLE_COIN,
    CURSOR_TYPE_PLANT_FROM_GLOVE,
    CURSOR_TYPE_PLANT_FROM_DUPLICATOR,
    CURSOR_TYPE_PLANT_FROM_WHEEL_BARROW,
    CURSOR_TYPE_SHOVEL,
    CURSOR_TYPE_HAMMER,
    CURSOR_TYPE_COBCANNON_TARGET,
    CURSOR_TYPE_WATERING_CAN,
    CURSOR_TYPE_FERTILIZER,
    CURSOR_TYPE_BUG_SPRAY,
    CURSOR_TYPE_PHONOGRAPH,
    CURSOR_TYPE_CHOCOLATE,
    CURSOR_TYPE_GLOVE,
    CURSOR_TYPE_MONEY_SIGN,
    CURSOR_TYPE_WHEEELBARROW,
    CURSOR_TYPE_TREE_FOOD
};
enum DamageFlags
{
    DAMAGE_BYPASSES_SHIELD = 0,
    DAMAGE_HITS_SHIELD_AND_BODY = 1,
    DAMAGE_FREEZE = 2,
    DAMAGE_DOESNT_CAUSE_FLASH = 3,
    DAMAGE_DOESNT_LEAVE_BODY = 4,
    DAMAGE_SPIKE = 5
};
enum DamageRangeFlags
{
    DAMAGES_GROUND,
    DAMAGES_FLYING,
    DAMAGES_SUBMERGED,
    DAMAGES_DOG,
    DAMAGES_OFF_GROUND,
    DAMAGES_DYING,
    DAMAGES_UNDERGROUND,
    DAMAGES_ONLY_MINDCONTROLLED
};
enum Dialogs
{
    DIALOG_NEW_GAME,                            // 0：
    DIALOG_OPTIONS,                             // 1：
    DIALOG_NEWOPTIONS,                          // 2：菜单
    DIALOG_ALMANAC,                             // 3：图鉴
    DIALOG_STORE,                               // 4：商店
    DIALOG_PREGAME_NAG,                         // 5：
    DIALOG_LOAD_GAME,                           // 6：
    DIALOG_CONFIRM_UPDATE_CHECK,                // 7：
    DIALOG_CHECKING_UPDATES,                    // 8：
    DIALOG_REGISTER_ERROR,                      // 9：
    DIALOG_COLORDEPTH_EXP,                      // 10：不支持窗口模式
    DIALOG_OPENURL_WAIT,                        // 11：
    DIALOG_OPENURL_FAIL,                        // 12：
    DIALOG_QUIT,                                // 13：退出游戏（主菜单点击退出时）
    DIALOG_HIGH_SCORES,                         // 14：
    DIALOG_NAG,                                 // 15：
    DIALOG_INFO,                                // 16：信息（3D 加速不支持/不推荐）
    DIALOG_GAME_OVER,                           // 17：游戏结束（关卡失败）
    DIALOG_LEVEL_COMPLETE,                      // 18：关卡完成
    DIALOG_PAUSED,                              // 19：暂停游戏
    DIALOG_NO_MORE_MONEY,                       // 20：
    DIALOG_BONUS,                               // 21：
    DIALOG_CONFIRM_BACK_TO_MAIN,                // 22：返回主菜单
    DIALOG_CONFIRM_RESTART,                     // 23：重新开始关卡
    DIALOG_THANKS_FOR_REGISTERING,              // 24：
    DIALOG_NOT_ENOUGH_MONEY,                    // 25：资金不足（购买商品但钱数不够时触发）
    DIALOG_UPGRADED,                            // 26：卡槽升级
    DIALOG_NO_UPGRADE,                          // 27：
    DIALOG_CHOOSER_WARNING,                     // 28：选卡提醒（未携带生产阳光的植物、未携带紫卡原植物等情况下触发）
    DIALOG_USERDIALOG,                          // 29：用户对话
    DIALOG_CREATEUSER,                          // 30：创建新用户
    DIALOG_CONFIRMDELETEUSER,                   // 31：删除用户
    DIALOG_RENAMEUSER,                          // 32：重命名用户
    DIALOG_CREATEUSERERROR,                     // 33：请输入名字（创建新用户对话中不输入用户名时触发）
    DIALOG_RENAMEUSERERROR,                     // 34：请输入名字（重命名用户对话中不输入用户名时触发）
    DIALOG_CHEAT,                               // 35：跳关对话（仅内测版可触发）
    DIALOG_CHEATERROR,                          // 36：跳关指令输入有误
    DIALOG_CONTINUE,                            // 37：继续游戏（读档进入关卡时）
    DIALOG_GETREADY,                            // 38：
    DIALOG_RESTARTCONFIRM,                      // 39：重新开始游戏（继续游戏对话中选择开始新游戏时触发）
    DIALOG_CONFIRMPURCHASE,                     // 40：
    DIALOG_CONFIRMSELL,                         // 41：
    DIALOG_TIMESUP,                             // 42：
    DIALOG_VIRTUALHELP,                         // 43：
    DIALOG_JUMPAHEAD,                           // 44：
    DIALOG_CRAZY_DAVE,                          // 45：
    DIALOG_STORE_PURCHASE,                      // 46：购买商品（戴夫商店）
    DIALOG_ZEN_SELL,                            // 47：出售盆栽植物（禅境花园）
    DIALOG_MESSAGE,                             // 48：通用消息对话，包括：①加载中（切换用户时触发）；②小游戏等模式未解锁；……
    DIALOG_IMITATER,                            // 49：模仿者对话
    DIALOG_PURCHASE_PACKET_SLOT,                // 50：升级卡槽的格子数量
    NUM_DIALOGS
};
enum DebugTextMode
{
    DEBUG_TEXT_NONE = 0,
    DEBUG_TEXT_ZOMBIE_SPAWN = 1,
    DEBUG_TEXT_MUSIC = 2,
    DEBUG_TEXT_MEMORY = 3,
    DEBUG_TEXT_COLLISION = 4
};
enum DrawStringJustification
{
    DS_ALIGN_LEFT = 0,
    DS_ALIGN_RIGHT = 1,
    DS_ALIGN_CENTER = 2,
    DS_ALIGN_LEFT_VERTICAL_MIDDLE = 3,
    DS_ALIGN_RIGHT_VERTICAL_MIDDLE = 4,
    DS_ALIGN_CENTER_VERTICAL_MIDDLE = 5
};
enum DrawVariation
{
    VARIATION_NORMAL,
    VARIATION_IMITATER,
    VARIATION_MARIGOLD_WHITE,
    VARIATION_MARIGOLD_MAGENTA,
    VARIATION_MARIGOLD_ORANGE,
    VARIATION_MARIGOLD_PINK,
    VARIATION_MARIGOLD_LIGHT_BLUE,
    VARIATION_MARIGOLD_RED,
    VARIATION_MARIGOLD_BLUE,
    VARIATION_MARIGOLD_VIOLET,
    VARIATION_MARIGOLD_LAVENDER,
    VARIATION_MARIGOLD_YELLOW,
    VARIATION_MARIGOLD_LIGHT_GREEN,
    VARIATION_ZEN_GARDEN,
    VARIATION_ZEN_GARDEN_WATER,
    VARIATION_SPROUT_NO_FLOWER,
    VARIATION_IMITATER_LESS,
    VARIATION_AQUARIUM
};
enum EffectType
{
    EFFECT_PARTICLE = 0,
    EFFECT_TRAIL = 1,
    EFFECT_REANIM = 2,
    EFFECT_ATTACHMENT = 3,
    EFFECT_OTHER = 4
};
enum EmitterType
{
    EMITTER_CIRCLE = 0,
    EMITTER_BOX = 1,
    EMITTER_BOX_PATH = 2,
    EMITTER_CIRCLE_PATH = 3,
    EMITTER_CIRCLE_EVEN_SPACING = 4
};
enum GameMode
{
    GAMEMODE_ADVENTURE,
    GAMEMODE_SURVIVAL_NORMAL_STAGE_1,
    GAMEMODE_SURVIVAL_NORMAL_STAGE_2,
    GAMEMODE_SURVIVAL_NORMAL_STAGE_3,
    GAMEMODE_SURVIVAL_NORMAL_STAGE_4,
    GAMEMODE_SURVIVAL_NORMAL_STAGE_5,
    GAMEMODE_SURVIVAL_HARD_STAGE_1,
    GAMEMODE_SURVIVAL_HARD_STAGE_2,
    GAMEMODE_SURVIVAL_HARD_STAGE_3,
    GAMEMODE_SURVIVAL_HARD_STAGE_4,
    GAMEMODE_SURVIVAL_HARD_STAGE_5,
    GAMEMODE_SURVIVAL_ENDLESS_STAGE_1,
    GAMEMODE_SURVIVAL_ENDLESS_STAGE_2,
    GAMEMODE_SURVIVAL_ENDLESS_STAGE_3,
    GAMEMODE_SURVIVAL_ENDLESS_STAGE_4,
    GAMEMODE_SURVIVAL_ENDLESS_STAGE_5,
    GAMEMODE_CHALLENGE_WAR_AND_PEAS,
    GAMEMODE_CHALLENGE_WALLNUT_BOWLING,
    GAMEMODE_CHALLENGE_SLOT_MACHINE,
    GAMEMODE_CHALLENGE_RAINING_SEEDS,
    GAMEMODE_CHALLENGE_BEGHOULED,
    GAMEMODE_CHALLENGE_INVISIGHOUL,
    GAMEMODE_CHALLENGE_SEEING_STARS,
    GAMEMODE_CHALLENGE_ZOMBIQUARIUM,
    GAMEMODE_CHALLENGE_BEGHOULED_TWIST,
    GAMEMODE_CHALLENGE_LITTLE_TROUBLE,
    GAMEMODE_CHALLENGE_PORTAL_COMBAT,
    GAMEMODE_CHALLENGE_COLUMN,
    GAMEMODE_CHALLENGE_BOBSLED_BONANZA,
    GAMEMODE_CHALLENGE_SPEED,
    GAMEMODE_CHALLENGE_WHACK_A_ZOMBIE,
    GAMEMODE_CHALLENGE_LAST_STAND,
    GAMEMODE_CHALLENGE_WAR_AND_PEAS_2,
    GAMEMODE_CHALLENGE_WALLNUT_BOWLING_2,
    GAMEMODE_CHALLENGE_POGO_PARTY,
    GAMEMODE_CHALLENGE_FINAL_BOSS,
    GAMEMODE_CHALLENGE_ART_CHALLENGE_WALLNUT,
    GAMEMODE_CHALLENGE_SUNNY_DAY,
    GAMEMODE_CHALLENGE_RESODDED,
    GAMEMODE_CHALLENGE_BIG_TIME,
    GAMEMODE_CHALLENGE_ART_CHALLENGE_SUNFLOWER,
    GAMEMODE_CHALLENGE_AIR_RAID,
    GAMEMODE_CHALLENGE_ICE,
    GAMEMODE_CHALLENGE_ZEN_GARDEN,
    GAMEMODE_CHALLENGE_HIGH_GRAVITY,
    GAMEMODE_CHALLENGE_GRAVE_DANGER,
    GAMEMODE_CHALLENGE_SHOVEL,
    GAMEMODE_CHALLENGE_STORMY_NIGHT,
    GAMEMODE_CHALLENGE_BUNGEE_BLITZ,
    GAMEMODE_CHALLENGE_SQUIRREL,
    GAMEMODE_TREE_OF_WISDOM,
    GAMEMODE_SCARY_POTTER_1,
    GAMEMODE_SCARY_POTTER_2,
    GAMEMODE_SCARY_POTTER_3,
    GAMEMODE_SCARY_POTTER_4,
    GAMEMODE_SCARY_POTTER_5,
    GAMEMODE_SCARY_POTTER_6,
    GAMEMODE_SCARY_POTTER_7,
    GAMEMODE_SCARY_POTTER_8,
    GAMEMODE_SCARY_POTTER_9,
    GAMEMODE_SCARY_POTTER_ENDLESS,
    GAMEMODE_PUZZLE_I_ZOMBIE_1,
    GAMEMODE_PUZZLE_I_ZOMBIE_2,
    GAMEMODE_PUZZLE_I_ZOMBIE_3,
    GAMEMODE_PUZZLE_I_ZOMBIE_4,
    GAMEMODE_PUZZLE_I_ZOMBIE_5,
    GAMEMODE_PUZZLE_I_ZOMBIE_6,
    GAMEMODE_PUZZLE_I_ZOMBIE_7,
    GAMEMODE_PUZZLE_I_ZOMBIE_8,
    GAMEMODE_PUZZLE_I_ZOMBIE_9,
    GAMEMODE_PUZZLE_I_ZOMBIE_ENDLESS,
    GAMEMODE_UPSELL,
    GAMEMODE_INTRO,
    NUM_GAME_MODES
};
enum GameObjectType
{
    OBJECT_TYPE_NONE,
    OBJECT_TYPE_PLANT,
    OBJECT_TYPE_PROJECTILE,
    OBJECT_TYPE_COIN,
    OBJECT_TYPE_SEEDPACKET,
    OBJECT_TYPE_SHOVEL,
    OBJECT_TYPE_WATERING_CAN,
    OBJECT_TYPE_FERTILIZER,
    OBJECT_TYPE_BUG_SPRAY,
    OBJECT_TYPE_PHONOGRAPH,
    OBJECT_TYPE_CHOCOLATE,
    OBJECT_TYPE_GLOVE,
    OBJECT_TYPE_MONEY_SIGN,
    OBJECT_TYPE_WHEELBARROW,
    OBJECT_TYPE_TREE_FOOD,
    OBJECT_TYPE_NEXT_GARDEN,
    OBJECT_TYPE_MENU_BUTTON,
    OBJECT_TYPE_STORE_BUTTON,
    OBJECT_TYPE_SLOT_MACHINE_HANDLE,
    OBJECT_TYPE_SCARY_POT,
    OBJECT_TYPE_STINKY,
    OBJECT_TYPE_TREE_OF_WISDOM
};
enum GameScenes
{
    SCENE_LOADING = 0,
    SCENE_MENU = 1,
    SCENE_LEVEL_INTRO = 2,
    SCENE_PLAYING = 3,
    SCENE_ZOMBIES_WON = 4,
    SCENE_AWARD = 5,
    SCENE_CREDIT = 6,
    SCENE_CHALLENGE = 7
};
enum GardenType
{
    GARDEN_MAIN = 0,
    GARDEN_MUSHROOM = 1,
    GARDEN_WHEELBARROW = 2,
    GARDEN_AQUARIUM = 3
};
enum GridItemType
{
    GRIDITEM_NONE = 0,
    GRIDITEM_GRAVESTONE = 1,
    GRIDITEM_CRATER = 2,
    GRIDITEM_LADDER = 3,
    GRIDITEM_PORTAL_CIRCLE = 4,
    GRIDITEM_PORTAL_SQUARE = 5,
    GRIDITEM_BRAIN = 6,
    GRIDITEM_SCARY_POT = 7,
    GRIDITEM_SQUIRREL = 8,
    GRIDITEM_ZEN_TOOL = 9,
    GRIDITEM_STINKY = 10,
    GRIDITEM_RAKE = 11,
    GRIDITEM_IZOMBIE_BRAIN = 12
};
enum GridItemState
{
    GRIDITEM_STATE_NORMAL = 0,
    GRIDITEM_STATE_GRAVESTONE_SPECIAL = 1,
    GRIDITEM_STATE_PORTAL_CLOSED = 2,
    GRIDITEM_STATE_SCARY_POT_QUESTION = 3,
    GRIDITEM_STATE_SCARY_POT_LEAF = 4,
    GRIDITEM_STATE_SCARY_POT_ZOMBIE = 5,
    GRIDITEM_STATE_SQUIRREL_WAITING = 6,
    GRIDITEM_STATE_SQUIRREL_PEEKING = 7,
    GRIDITEM_STATE_SQUIRREL_RUNNING_UP = 8,
    GRIDITEM_STATE_SQUIRREL_RUNNING_DOWN = 9,
    GRIDITEM_STATE_SQUIRREL_RUNNING_LEFT = 10,
    GRIDITEM_STATE_SQUIRREL_RUNNING_RIGHT = 11,
    GRIDITEM_STATE_SQUIRREL_CAUGHT = 12,
    GRIDITEM_STATE_SQUIRREL_ZOMBIE = 13,
    GRIDITEM_STATE_ZEN_TOOL_WATERING_CAN = 14,
    GRIDITEM_STATE_ZEN_TOOL_FERTILIZER = 15,
    GRIDITEM_STATE_ZEN_TOOL_BUG_SPRAY = 16,
    GRIDITEM_STATE_ZEN_TOOL_PHONOGRAPH = 17,
    GRIDITEM_STATE_ZEN_TOOL_GOLD_WATERING_CAN = 18,
    GRIDITEM_STINKY_WALKING_LEFT = 19,
    GRIDITEM_STINKY_TURNING_LEFT = 20,
    GRIDITEM_STINKY_WALKING_RIGHT = 21,
    GRIDITEM_STINKY_TURNING_RIGHT = 22,
    GRIDITEM_STINKY_SLEEPING = 23,
    GRIDITEM_STINKY_FALLING_ASLEEP = 24,
    GRIDITEM_STINKY_WAKING_UP = 25,
    GRIDITEM_STATE_RAKE_ATTRACTING = 26,
    GRIDITEM_STATE_RAKE_WAITING = 27,
    GRIDITEM_STATE_RAKE_TRIGGERED = 28,
    GRIDITEM_STATE_BRAIN_SQUISHED = 29
};
enum GridSquareType
{
    GRIDSQUARE_NONE = 0,
    GRIDSQUARE_GRASS = 1,
    GRIDSQUARE_DIRT = 2,
    GRIDSQUARE_POOL = 3,
    GRIDSQUARE_HIGH_GROUND = 4
};
enum HelmType
{
    HELMTYPE_NONE = 0,
    HELMTYPE_TRAFFIC_CONE = 1,
    HELMTYPE_PAIL = 2,
    HELMTYPE_FOOTBALL = 3,
    HELMTYPE_DIGGER = 4,
    HELMTYPE_REDEYES = 5,
    HELMTYPE_HEADBAND = 6,
    HELMTYPE_BOBSLED = 7,
    HELMTYPE_WALLNUT = 8,
    HELMTYPE_TALLNUT = 9
};
enum LawnMowerState
{
    MOWER_ROLLING_IN = 0,
    MOWER_READY = 1,
    MOWER_TRIGGERED = 2,
    MOWER_SQUISHED = 3
};
enum LawnMowerType
{
    LAWNMOWER_LAWN,
    LAWNMOWER_POOL,
    LAWNMOWER_ROOF,
    LAWNMOWER_SUPER_MOWER,
    NUM_MOWER_TYPES
};
enum MessageStyle
{
    MESSAGE_STYLE_OFF,
    MESSAGE_STYLE_TUTORIAL_LEVEL1,
    MESSAGE_STYLE_TUTORIAL_LEVEL1_STAY,
    MESSAGE_STYLE_TUTORIAL_LEVEL2,
    MESSAGE_STYLE_TUTORIAL_LATER,
    MESSAGE_STYLE_TUTORIAL_LATER_STAY,
    MESSAGE_STYLE_HINT_LONG,
    MESSAGE_STYLE_HINT_FAST,
    MESSAGE_STYLE_HINT_STAY,
    MESSAGE_STYLE_HINT_TALL_FAST,
    MESSAGE_STYLE_HINT_TALL_UNLOCKMESSAGE,
    //MESSAGE_STYLE_HINT_TALL_8SECONDS,// 仅内测版
    MESSAGE_STYLE_HINT_TALL_LONG,
    MESSAGE_STYLE_BIG_MIDDLE,
    MESSAGE_STYLE_BIG_MIDDLE_FAST,
    MESSAGE_STYLE_HOUSE_NAME,
    MESSAGE_STYLE_HUGE_WAVE,
    MESSAGE_STYLE_SLOT_MACHINE,
    MESSAGE_STYLE_ZEN_GARDEN_LONG
};
enum MowerHeight
{
    MOWER_HEIGHT_LAND = 0,
    MOWER_HEIGHT_DOWN_TO_POOL = 1,
    MOWER_HEIGHT_IN_POOL = 2,
    MOWER_HEIGHT_UP_TO_LAND = 3
};
enum NotRecommend
{
    NOT_RECOMMENDED_NOCTURNAL,
    NOT_RECOMMENDED_NEEDS_POOL,
    NOT_RECOMMENDED_NEEDS_GRAVES,
    NOT_RECOMMENDED_NEEDS_FOG,
    NOT_RECOMMENDED_NEEDS_ROOF,
    NOT_RECOMMENDED_ON_ROOF,
    NOT_RECOMMENDED_FOR_CHALLENGE,
    NOT_RECOMMENDED_AT_NIGHT
};
enum ParticleEffect
{
    PARTICLE_NONE = -1,
    PARTICLE_MELONSPLASH,
    PARTICLE_WINTERMELON,
    PARTICLE_FUMECLOUD,
    PARTICLE_POPCORNSPLASH,
    PARTICLE_POWIE,
    PARTICLE_JACKEXPLODE,
    PARTICLE_ZOMBIE_HEAD,
    PARTICLE_ZOMBIE_ARM,
    PARTICLE_ZOMBIE_TRAFFIC_CONE,
    PARTICLE_ZOMBIE_PAIL,
    PARTICLE_ZOMBIE_HELMET,
    PARTICLE_ZOMBIE_FLAG,
    PARTICLE_ZOMBIE_DOOR,
    PARTICLE_ZOMBIE_NEWSPAPER,
    PARTICLE_ZOMBIE_HEADLIGHT,
    PARTICLE_POW,
    PARTICLE_ZOMBIE_POGO,
    PARTICLE_ZOMBIE_NEWSPAPER_HEAD,
    PARTICLE_ZOMBIE_BALLOON_HEAD,
    PARTICLE_SOD_ROLL,
    PARTICLE_GRAVE_STONE_RISE,
    PARTICLE_PLANTING,
    PARTICLE_PLANTING_POOL,
    PARTICLE_ZOMBIE_RISE,
    PARTICLE_GRAVE_BUSTER,
    PARTICLE_GRAVE_BUSTER_DIE,
    PARTICLE_POOL_SPLASH,
    PARTICLE_ICE_SPARKLE,
    PARTICLE_SEED_PACKET,
    PARTICLE_TALL_NUT_BLOCK,
    PARTICLE_DOOM,
    PARTICLE_DIGGER_RISE,
    PARTICLE_DIGGER_TUNNEL,
    PARTICLE_DANCER_RISE,
    PARTICLE_POOL_SPARKLY,
    PARTICLE_WALLNUT_EAT_SMALL,
    PARTICLE_WALLNUT_EAT_LARGE,
    PARTICLE_PEA_SPLAT,
    PARTICLE_BUTTER_SPLAT,
    PARTICLE_CABBAGE_SPLAT,
    PARTICLE_PUFF_SPLAT,
    PARTICLE_STAR_SPLAT,
    PARTICLE_ICE_TRAP,
    PARTICLE_SNOWPEA_SPLAT,
    PARTICLE_SNOWPEA_PUFF,
    PARTICLE_SNOWPEA_TRAIL,
    PARTICLE_LANTERN_SHINE,
    PARTICLE_SEED_PACKET_PICKUP,
    PARTICLE_POTATO_MINE,
    PARTICLE_POTATO_MINE_RISE,
    PARTICLE_PUFFSHROOM_TRAIL,
    PARTICLE_PUFFSHROOM_MUZZLE,
    PARTICLE_SEED_PACKET_FLASH,
    PARTICLE_WHACK_A_ZOMBIE_RISE,
    PARTICLE_ZOMBIE_LADDER,
    PARTICLE_UMBRELLA_REFLECT,
    PARTICLE_SEED_PACKET_PICK,
    PARTICLE_ICE_TRAP_ZOMBIE,
    PARTICLE_ICE_TRAP_RELEASE,
    PARTICLE_ZAMBONI_SMOKE,
    PARTICLE_GLOOMCLOUD,
    PARTICLE_ZOMBIE_POGO_HEAD,
    PARTICLE_ZAMBONI_TIRE,
    PARTICLE_ZAMBONI_EXPLOSION,
    PARTICLE_ZAMBONI_EXPLOSION2,
    PARTICLE_CATAPULT_EXPLOSION,
    PARTICLE_MOWER_CLOUD,
    PARTICLE_BOSS_ICE_BALL,
    PARTICLE_BLASTMARK,
    PARTICLE_COIN_PICKUP_ARROW,
    PARTICLE_PRESENT_PICKUP,
    PARTICLE_IMITATER_MORPH,
    PARTICLE_MOWERED_ZOMBIE_HEAD,
    PARTICLE_MOWERED_ZOMBIE_ARM,
    PARTICLE_ZOMBIE_HEAD_POOL,
    PARTICLE_ZOMBIE_BOSS_FIREBALL,
    PARTICLE_FIREBALL_DEATH,
    PARTICLE_ICEBALL_DEATH,
    PARTICLE_ICEBALL_TRAIL,
    PARTICLE_FIREBALL_TRAIL,
    PARTICLE_BOSS_EXPLOSION,
    PARTICLE_SCREEN_FLASH,
    PARTICLE_TROPHY_SPARKLE,
    PARTICLE_PORTAL_CIRCLE,
    PARTICLE_PORTAL_SQUARE,
    PARTICLE_POTTED_PLANT_GLOW,
    PARTICLE_POTTED_WATER_PLANT_GLOW,
    PARTICLE_POTTED_ZEN_GLOW,
    PARTICLE_MIND_CONTROL,
    PARTICLE_VASE_SHATTER,
    PARTICLE_VASE_SHATTER_LEAF,
    PARTICLE_VASE_SHATTER_ZOMBIE,
    PARTICLE_AWARD_PICKUP_ARROW,
    PARTICLE_ZOMBIE_SEAWEED,
    PARTICLE_ZOMBIE_MUSTACHE,
    PARTICLE_ZOMBIE_SUNGLASS,
    PARTICLE_ZOMBIE_PINATA,
    PARTICLE_DUST_SQUASH,
    PARTICLE_DUST_FOOT,
    PARTICLE_ZOMBIE_DAISIES,
    PARTICLE_CREDIT_STROBE,
    PARTICLE_CREDITS_RAYSWIPE,
    PARTICLE_CREDITS_ZOMBIEHEADWIPE,
    PARTICLE_STARBURST,
    PARTICLE_CREDITS_FOG,
    PARTICLE_PERSENT_PICK_UP_ARROW,
    NUM_PARTICLES
};
enum PlantPriority
{
    TOPPLANT_EATING_ORDER,
    TOPPLANT_DIGGING_ORDER,
    TOPPLANT_BUNGEE_ORDER,
    TOPPLANT_CATAPULT_ORDER,
    TOPPLANT_ZEN_TOOL_ORDER,
    TOPPLANT_ANY,
    TOPPLANT_ONLY_NORMAL_POSITION,
    TOPPLANT_ONLY_FLYING,
    TOPPLANT_ONLY_PUMPKIN,
    TOPPLANT_ONLY_UNDER_PLANT
};
enum PlantingReason
{
    PLANTING_OK,
    PLANTING_NOT_HERE,
    PLANTING_ONLY_ON_GRAVES,
    PLANTING_ONLY_IN_POOL,
    PLANTING_ONLY_ON_GROUND,
    PLANTING_NEEDS_POT,
    PLANTING_NOT_ON_ART,
    PLANTING_NOT_PASSED_LINE,
    PLANTING_NEEDS_UPGRADE,
    PLANTING_NOT_ON_GRAVE,
    PLANTING_NOT_ON_CRATER,
    PLANTING_NOT_ON_WATER,
    PLANTING_NEEDS_GROUND,
    PLANTING_NEEDS_SLEEPING
};
enum PlantRowType
{
    PLANTROW_DIRT = 0,
    PLANTROW_NORMAL = 1,
    PLANTROW_POOL = 2,
    PLANTROW_HIGH_GROUND = 3
};
enum PottedPlantAge
{
    PLANTAGE_SPROUT = 0,
    PLANTAGE_SMALL = 1,
    PLANTAGE_MEDIUM = 2,
    PLANTAGE_FULL = 3
};
enum PottedPlantNeed
{
    PLANTNEED_NONE = 0,
    PLANTNEED_WATER = 1,
    PLANTNEED_FERTILIZER = 2,
    PLANTNEED_BUGSPRAY = 3,
    PLANTNEED_PHONOGRAPH = 4
};
enum ProjectileMotion
{
    MOTION_STRAIGHT = 0,  // 水平向右
    MOTION_LOBBED = 1,  // 抛物线
    MOTION_THREEPEATER = 2,  // 偏转向右
    MOTION_BEE = 3,  // 
    MOTION_BEE_BACKWARDS = 4,  // 
    MOTION_PUFF = 5,  // 水平向右（一段时间后消失）
    MOTION_BACKWARDS = 6,  // 水平向左
    MOTION_STAR = 7,  // 斜向运动
    MOTION_FLOAT_OVER = 8,  // 缓慢漂浮向右（无碰撞）
    MOTION_HOMING = 9,   // 追踪
    MOTION_TWOPEATER = 10,
    MOTION_PIERCE = 11
};
enum ProjectileType
{
    PROJECTILE_PEA = 0,   // 豌豆
    PROJECTILE_SNOWPEA = 1,   // 冰豌豆
    PROJECTILE_CABBAGE = 2,   // 卷心菜
    PROJECTILE_MELON = 3,   // 西瓜
    PROJECTILE_PUFF = 4,   // 孢子
    PROJECTILE_WINTERMELON = 5,   // 冰瓜
    PROJECTILE_FIREBALL = 6,   // 火豌豆
    PROJECTILE_STAR = 7,   // 星星
    PROJECTILE_SPIKE = 8,   // 尖刺
    PROJECTILE_BASKETBALL = 9,   // 篮球
    PROJECTILE_KERNEL = 10,  // 玉米粒
    PROJECTILE_COBBIG = 11,  // 玉米加农炮
    PROJECTILE_BUTTER = 12,  // 黄油
    PROJECTILE_ZOMBIE_PEA = 13,  // 僵尸豌豆
    PROJECTILE_SLOWPEA = 14,
    PROJECTILE_SOULPEA = 15,
    PROJECTILE_INVISIBLE = 16,
    PROJECTILE_ICECABBAGE = 17,
    PROJECTILE_CACTUSSPIKE = 18,
    NUM_PROJECTILES = 19
};
enum ReanimationType
{
    REANIM_NONE = -1,
    REANIM_LOADBAR_SPROUT,
    REANIM_LOADBAR_ZOMBIEHEAD,
    REANIM_SODROLL,
    REANIM_FINAL_WAVE,
    REANIM_PEASHOOTER,
    REANIM_WALLNUT,
    REANIM_LILYPAD,
    REANIM_SUNFLOWER,
    REANIM_LAWNMOWER,
    REANIM_READYSETPLANT,
    REANIM_CHERRYBOMB,
    REANIM_SQUASH,
    REANIM_DOOMSHROOM,
    REANIM_SNOWPEA,
    REANIM_REPEATER,
    REANIM_SUNSHROOM,
    REANIM_TALLNUT,
    REANIM_FUMESHROOM,
    REANIM_PUFFSHROOM,
    REANIM_HYPNOSHROOM,
    REANIM_CHOMPER,
    REANIM_ZOMBIE,
    REANIM_SUN,
    REANIM_POTATOMINE,
    REANIM_SPIKEWEED,
    REANIM_SPIKEROCK,
    REANIM_THREEPEATER,
    REANIM_MARIGOLD,
    REANIM_ICESHROOM,
    REANIM_ZOMBIE_FOOTBALL,
    REANIM_ZOMBIE_NEWSPAPER,
    REANIM_ZOMBIE_ZAMBONI,
    REANIM_SPLASH,
    REANIM_JALAPENO,
    REANIM_JALAPENO_FIRE,
    REANIM_COIN_SILVER,
    REANIM_ZOMBIE_CHARRED,
    REANIM_ZOMBIE_CHARRED_IMP,
    REANIM_ZOMBIE_CHARRED_DIGGER,
    REANIM_ZOMBIE_CHARRED_ZAMBONI,
    REANIM_ZOMBIE_CHARRED_CATAPULT,
    REANIM_ZOMBIE_CHARRED_GARGANTUAR,
    REANIM_SCRAREYSHROOM,
    REANIM_PUMPKIN,
    REANIM_PLANTERN,
    REANIM_TORCHWOOD,
    REANIM_SPLITPEA,
    REANIM_SEASHROOM,
    REANIM_BLOVER,
    REANIM_FLOWER_POT,
    REANIM_CACTUS,
    REANIM_DANCER,
    REANIM_TANGLEKELP,
    REANIM_STARFRUIT,
    REANIM_POLEVAULTER,
    REANIM_BALLOON,
    REANIM_GARGANTUAR,
    REANIM_IMP,
    REANIM_DIGGER,
    REANIM_DIGGER_DIRT,
    REANIM_ZOMBIE_DOLPHINRIDER,
    REANIM_POGO,
    REANIM_BACKUP_DANCER,
    REANIM_BOBSLED,
    REANIM_JACKINTHEBOX,
    REANIM_SNORKEL,
    REANIM_BUNGEE,
    REANIM_CATAPULT,
    REANIM_LADDER,
    REANIM_PUFF,
    REANIM_SLEEPING,
    REANIM_GRAVE_BUSTER,
    REANIM_ZOMBIES_WON,
    REANIM_MAGNETSHROOM,
    REANIM_BOSS,
    REANIM_CABBAGEPULT,
    REANIM_KERNELPULT,
    REANIM_MELONPULT,
    REANIM_COFFEEBEAN,
    REANIM_UMBRELLALEAF,
    REANIM_GATLINGPEA,
    REANIM_CATTAIL,
    REANIM_GLOOMSHROOM,
    REANIM_BOSS_ICEBALL,
    REANIM_BOSS_FIREBALL,
    REANIM_COBCANNON,
    REANIM_GARLIC,
    REANIM_GOLD_MAGNET,
    REANIM_WINTER_MELON,
    REANIM_TWIN_SUNFLOWER,
    REANIM_POOL_CLEANER,
    REANIM_ROOF_CLEANER,
    REANIM_FIRE_PEA,
    REANIM_IMITATER,
    REANIM_YETI,
    REANIM_BOSS_DRIVER,
    REANIM_LAWN_MOWERED_ZOMBIE,
    REANIM_CRAZY_DAVE,
    REANIM_TEXT_FADE_ON,
    REANIM_HAMMER,
    REANIM_SLOT_MACHINE_HANDLE,
    REANIM_CREDITS_FOOTBALL,
    REANIM_CREDITS_JACKBOX,
    REANIM_SELECTOR_SCREEN,
    REANIM_PORTAL_CIRCLE,
    REANIM_PORTAL_SQUARE,
    REANIM_ZENGARDEN_SPROUT,
    REANIM_ZENGARDEN_WATERINGCAN,
    REANIM_ZENGARDEN_FERTILIZER,
    REANIM_ZENGARDEN_BUGSPRAY,
    REANIM_ZENGARDEN_PHONOGRAPH,
    REANIM_DIAMOND,
    REANIM_ZOMBIE_HAND,
    REANIM_STINKY,
    REANIM_RAKE,
    REANIM_RAIN_CIRCLE,
    REANIM_RAIN_SPLASH,
    REANIM_ZOMBIE_SURPRISE,
    REANIM_COIN_GOLD,
    REANIM_TREEOFWISDOM,
    REANIM_TREEOFWISDOM_CLOUDS,
    REANIM_TREEOFWISDOM_TREEFOOD,
    REANIM_CREDITS_MAIN,
    REANIM_CREDITS_MAIN2,
    REANIM_CREDITS_MAIN3,
    REANIM_ZOMBIE_CREDITS_DANCE,
    REANIM_CREDITS_STAGE,
    REANIM_CREDITS_BIGBRAIN,
    REANIM_CREDITS_FLOWER_PETALS,
    REANIM_CREDITS_INFANTRY,
    REANIM_CREDITS_THROAT,
    REANIM_CREDITS_CRAZYDAVE,
    REANIM_CREDITS_BOSSDANCE,
    REANIM_ZOMBIE_CREDITS_SCREEN_DOOR,
    REANIM_ZOMBIE_CREDITS_CONEHEAD,
    REANIM_CREDITS_ZOMBIEARMY1,
    REANIM_CREDITS_ZOMBIEARMY2,
    REANIM_CREDITS_TOMBSTONES,
    REANIM_CREDITS_SOLARPOWER,
    REANIM_CREDITS_ANYHOUR,
    REANIM_CREDITS_WEARETHEUNDEAD,
    REANIM_CREDITS_DISCOLIGHTS,
    REANIM_FLAG,
    NUM_REANIMS
};
enum ReanimLoopType
{
    REANIM_LOOP = 0,
    REANIM_LOOP_FULL_LAST_FRAME = 1,
    REANIM_PLAY_ONCE = 2,
    REANIM_PLAY_ONCE_AND_HOLD = 3,
    REANIM_PLAY_ONCE_FULL_LAST_FRAME = 4,
    REANIM_PLAY_ONCE_FULL_LAST_FRAME_AND_HOLD = 5
};
enum RenderLayer
{
    RENDER_LAYER_ROW_OFFSET     = 10000,
    RENDER_LAYER_UI_BOTTOM      = 100000,
    RENDER_LAYER_GROUND         = 200000,
    RENDER_LAYER_LAWN           = 300000,
    RENDER_LAYER_GRAVE_STONE    = 301000,
    RENDER_LAYER_PLANT          = 302000,
    RENDER_LAYER_ZOMBIE         = 303000,
    RENDER_LAYER_BOSS           = 304000,
    RENDER_LAYER_PROJECTILE     = 305000,
    RENDER_LAYER_LAWN_MOWER     = 306000,
    RENDER_LAYER_PARTICLE       = 307000,
    RENDER_LAYER_TOP            = 400000,
    RENDER_LAYER_FOG            = 500000,
    RENDER_LAYER_COIN_BANK      = 600000,
    RENDER_LAYER_UI_TOP         = 700000,
    RENDER_LAYER_ABOVE_UI       = 800000,
    RENDER_LAYER_SCREEN_FADE    = 900000
};
enum RenderObjectType
{
    RENDER_ITEM_COIN,
    RENDER_ITEM_PROJECTILE,
    RENDER_ITEM_ZOMBIE,
    RENDER_ITEM_ZOMBIE_SHADOW,
    RENDER_ITEM_ZOMBIE_BUNGEE_TARGET,
    RENDER_ITEM_PLANT,
    RENDER_ITEM_PLANT_OVERLAY,
    RENDER_ITEM_PLANT_MAGNET_ITEMS,
    RENDER_ITEM_CURSOR_PREVIEW,
    RENDER_ITEM_PARTICLE,
    RENDER_ITEM_REANIMATION,
    RENDER_ITEM_ICE,
    RENDER_ITEM_TOP_UI,
    RENDER_ITEM_FOG,
    RENDER_ITEM_STORM,
    RENDER_ITEM_BOTTOM_UI,
    RENDER_ITEM_BACKDROP,
    RENDER_ITEM_DOOR_MASK,
    RENDER_ITEM_COIN_BANK,
    RENDER_ITEM_PROJECTILE_SHADOW,
    RENDER_ITEM_MOWER,
    RENDER_ITEM_SCREEN_FADE,
    RENDER_ITEM_BOSS_PART,
    RENDER_ITEM_GRID_ITEM,
    RENDER_ITEM_GRID_ITEM_OVERLAY
};
enum ScaryPotType
{
    SCARYPOT_NONE = 0,
    SCARYPOT_SEED = 1,
    SCARYPOT_ZOMBIE = 2,
    SCARYPOT_SUN = 3
};
enum SeedChooserState
{
    CHOOSE_NORMAL = 0,
    CHOOSE_VIEW_LAWN = 1
};
enum SeedType
{//DAY ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    SEED_PEASHOOTER = 0,                // 豌豆射手
    SEED_SUNSHROOM = 1,                     // 向日葵
    SEED_ICEBERGLETTUCE = 2,
    SEED_WALLNUT = 3,                       // 坚果
    SEED_POTATOMINE = 4,                    // 土豆地雷
    SEED_SLOWPEA = 5,
    SEED_SCAREDYSHROOM = 6,
    SEED_SOULPEA = 7,
//NIGHT
    SEED_PUFFSHROOM = 8,                    // 小喷菇
    SEED_WILLOW = 9,
    SEED_LEFTPEATER = 10,
    SEED_GRAVEBUSTER = 11,                  // 墓碑吞噬者
    SEED_TWOPEATER = 12,
    SEED_NOMMER = 13,
    SEED_TALLNUT = 14,
    SEED_CHERRYBOMB = 15,
//POOL
    SEED_LILYPAD = 16,                      // 睡莲
    SEED_SUNFLOWER = 17,                   // 窝瓜
    SEED_FUMESHROOM = 18,
    SEED_TANGLEKELP = 19,                   // 缠绕海草
    SEED_BLOVER = 20,
    SEED_SPIKEWEED = 21,                    // Ice rock
    SEED_JALAPENO = 22,
    SEED_REPEATER = 23,            //Primal Wallnut

//FOG
    SEED_SPIKERUSH = 24,        //Spikerush
    SEED_KERNELPULT = 25,
    SEED_CABBAGEPULT = 26,      //Explode o nut
    SEED_PLANTERN = 27,            //Howitzer Hibiscus
    SEED_SPLITPEA = 28,         //[new plant]
    SEED_MELONPULT = 29,
    SEED_PUMPKINSHELL = 30,
    SEED_MAGNETSHROOM = 31,
//ROOF
    SEED_DOOMSHROOM = 32,       //Twin Sunflower
    SEED_FLOWERPOT = 33,
    SEED_CACTUS = 34,
    SEED_ICEBERGCABBAGE = 35,
    SEED_GARLIC = 36,
    SEED_UMBRELLA = 37,         //Wintermelon
    SEED_ICESHROOM = 38,
    SEED_MARIGOLD = 39,     //Poison pult
//SHOP
    SEED_GATLINGPEA = 40,
    SEED_TWINSUNFLOWER = 41,        //Triplet Sunflower
    SEED_GLOOMSHROOM = 42,
    SEED_CATTAIL = 43,
    SEED_WINTERMELON = 44,      //Hypno shroom
    SEED_GOLD_MAGNET = 45,
    SEED_SPIKEROCK = 46,
    SEED_COBCANNON = 47,
    SEED_SNOWPEA = 48,
    SEED_STARFRUIT = 49,
    SEED_SQUASH = 50,
    SEED_HYPNOSHROOM = 51,
    SEED_THREEPEATER = 52,
    SEED_INSTANT_COFFEE = 53,
    SEED_CHOMPER = 54,
    SEED_SEASHROOM = 55,
    SEED_TORCHWOOD = 56,
    SEED_FIREPEASHOOTER = 57,
    SEED_ICEQUEENPEA = 58,
    SEED_FLAMETHROWERPEA = 59,
    SEED_EXPLODE_O_NUT = 60,
    SEED_IMITATER = 61,
//MISC
    
    SEED_GIANT_WALLNUT,
    SEED_SPROUT,
    NUM_SEED_TYPES,
    SEED_BEGHOULED_BUTTON_SHUFFLE,
    SEED_BEGHOULED_BUTTON_CRATER,
    SEED_SLOT_MACHINE_SUN,
    SEED_SLOT_MACHINE_DIAMOND,
    SEED_ZOMBIQUARIUM_SNORKLE,
    SEED_ZOMBIQUARIUM_TROPHY,
    SEED_ZOMBIE_NORMAL,
    SEED_ZOMBIE_TRAFFIC_CONE,
    SEED_ZOMBIE_POLEVAULTER,
    SEED_ZOMBIE_PAIL,
    SEED_ZOMBIE_LADDER,
    SEED_ZOMBIE_DIGGER,
    SEED_ZOMBIE_BUNGEE,
    SEED_ZOMBIE_FOOTBALL,
    SEED_ZOMBIE_BALLOON,
    SEED_ZOMBIE_SCREEN_DOOR,
    SEED_ZOMBONI,
    SEED_ZOMBIE_POGO,
    SEED_ZOMBIE_DANCER,
    SEED_ZOMBIE_GARGANTUAR,
    SEED_ZOMBIE_IMP,
    NUM_SEEDS_IN_CHOOSER = 62, //CHANGE THIS! +1
    SEED_NONE = -1
};
enum ShieldType
{
    SHIELDTYPE_NONE,
    SHIELDTYPE_DOOR,
    SHIELDTYPE_NEWSPAPER,
    SHIELDTYPE_LADDER,
    SHIELDTYPE_SWAT
};
enum StoreItem
{
    STORE_ITEM_PLANT_GATLINGPEA,
    STORE_ITEM_PLANT_EXPLODEONUT,
    STORE_ITEM_PLANT_GLOOMSHROOM,
    STORE_ITEM_PLANT_CATTAIL,
    STORE_ITEM_PLANT_WINTERMELON,
    STORE_ITEM_PLANT_GOLD_MAGNET,
    STORE_ITEM_PLANT_SPIKEROCK,
    STORE_ITEM_PLANT_COBCANNON,
    STORE_ITEM_PLANT_FIREPEASHOOTER,
    STORE_ITEM_PLANT_SNOWPEA,
    STORE_ITEM_PLANT_TORCHWOOD,
    STORE_ITEM_PLANT_STARFRUIT,
    STORE_ITEM_PLANT_SQUASH,
    STORE_ITEM_PLANT_HYPNOSHROOM,
    STORE_ITEM_PLANT_THREEPEATER,
    STORE_ITEM_PLANT_INSTANTCOFFEE,
    STORE_ITEM_PLANT_CHOMPER,
    STORE_ITEM_PLANT_SEASHROOM,
    STORE_ITEM_PLANT_IMITATER,
    STORE_ITEM_PLANT_FLAMETHROWERPEA,
    STORE_ITEM_PLANT_ICEQUEENPEA,
    STORE_ITEM_BONUS_LAWN_MOWER,
    STORE_ITEM_POTTED_MARIGOLD_1,
    STORE_ITEM_POTTED_MARIGOLD_2,
    STORE_ITEM_POTTED_MARIGOLD_3,
    STORE_ITEM_GOLD_WATERINGCAN,
    STORE_ITEM_FERTILIZER,
    STORE_ITEM_BUG_SPRAY,
    STORE_ITEM_PHONOGRAPH,
    STORE_ITEM_GARDENING_GLOVE,
    STORE_ITEM_MUSHROOM_GARDEN,
    STORE_ITEM_WHEEL_BARROW,
    STORE_ITEM_STINKY_THE_SNAIL,
    STORE_ITEM_PACKET_UPGRADE,
    STORE_ITEM_POOL_CLEANER,
    STORE_ITEM_ROOF_CLEANER,
    STORE_ITEM_RAKE,
    STORE_ITEM_AQUARIUM_GARDEN,
    STORE_ITEM_CHOCOLATE,
    STORE_ITEM_TREE_OF_WISDOM,
    STORE_ITEM_TREE_FOOD,
    STORE_ITEM_FIRSTAID,
    STORE_ITEM_PVZ,
    STORE_ITEM_INVALID = -1
};
enum StorePages
{
    STORE_PAGE_SLOT_UPGRADES = 0,
    STORE_PAGE_PLANT_UPGRADES = 1,
    STORE_PAGE_ZEN1 = 4,
    STORE_PAGE_ZEN2 = 5,
    NUM_STORE_PAGES = 6
};
enum TodCurves
{
    CURVE_CONSTANT,             // 常函数曲线
    CURVE_LINEAR,               // 线性曲线
    CURVE_EASE_IN,              // 二次曲线（缓入）
    CURVE_EASE_OUT,             // 二次曲线（缓出）
    CURVE_EASE_IN_OUT,          // 缓入缓出曲线
    CURVE_EASE_IN_OUT_WEAK,     // 缓入缓出曲线（效果减弱）
    CURVE_FAST_IN_OUT,          // 快入快出曲线
    CURVE_FAST_IN_OUT_WEAK,     // 快入快出曲线（效果减弱）
    CURVE_WEAK_FAST_IN_OUT,     // 【废弃】弱快入快出曲线
    CURVE_BOUNCE,               // 弹跳效果曲线
    CURVE_BOUNCE_FAST_MIDDLE,   // 弹跳效果曲线（尖形）
    CURVE_BOUNCE_SLOW_MIDDLE,   // 弹跳效果曲线（罩形）
    CURVE_SIN_WAVE,             // 正弦曲线
    CURVE_EASE_SIN_WAVE         // 缓入缓出的正弦曲线
};
enum TrialType
{
    TRIALTYPE_NONE,
    TRIALTYPE_STAGELOCKED
};
enum TutorialState
{
    TUTORIAL_OFF = 0,
    TUTORIAL_LEVEL_1_PICK_UP_PEASHOOTER = 1,
    TUTORIAL_LEVEL_1_PLANT_PEASHOOTER = 2,
    TUTORIAL_LEVEL_1_REFRESH_PEASHOOTER = 3,
    TUTORIAL_LEVEL_1_COMPLETED = 4,
    TUTORIAL_LEVEL_2_PICK_UP_SUNFLOWER = 5,
    TUTORIAL_LEVEL_2_PLANT_SUNFLOWER = 6,
    TUTORIAL_LEVEL_2_REFRESH_SUNFLOWER = 7,
    TUTORIAL_LEVEL_2_COMPLETED = 8,
    TUTORIAL_MORESUN_PICK_UP_SUNFLOWER = 9,
    TUTORIAL_MORESUN_PLANT_SUNFLOWER = 10,
    TUTORIAL_MORESUN_REFRESH_SUNFLOWER = 11,
    TUTORIAL_MORESUN_COMPLETED = 12,
    TUTORIAL_SLOT_MACHINE_PULL = 13,
    TUTORIAL_SLOT_MACHINE_COMPLETED = 14,
    TUTORIAL_SHOVEL_PICKUP = 15,
    TUTORIAL_SHOVEL_DIG = 16,
    TUTORIAL_SHOVEL_KEEP_DIGGING = 17,
    TUTORIAL_SHOVEL_COMPLETED = 18,
    TUTORIAL_ZOMBIQUARIUM_BUY_SNORKEL = 19,
    TUTORIAL_ZOMBIQUARIUM_BOUGHT_SNORKEL = 20,
    TUTORIAL_ZOMBIQUARIUM_CLICK_TROPHY = 21,
    TUTORIAL_ZEN_GARDEN_PICKUP_WATER = 22,
    TUTORIAL_ZEN_GARDEN_WATER_PLANT = 23,
    TUTORIAL_ZEN_GARDEN_KEEP_WATERING = 24,
    TUTORIAL_ZEN_GARDEN_VISIT_STORE = 25,
    TUTORIAL_ZEN_GARDEN_FERTILIZE_PLANTS = 26,
    TUTORIAL_ZEN_GARDEN_COMPLETED = 27,
    TUTORIAL_WHACK_A_ZOMBIE_BEFORE_PICK_SEED = 28,
    TUTORIAL_WHACK_A_ZOMBIE_PICK_SEED = 29,
    TUTORIAL_WHACK_A_ZOMBIE_COMPLETED = 30
};
enum UnlockingState
{
    UNLOCK_OFF,
    UNLOCK_SHAKING,
    UNLOCK_FADING
};
enum ZombieHeight
{
    HEIGHT_ZOMBIE_NORMAL = 0,
    HEIGHT_IN_TO_POOL = 1,
    HEIGHT_OUT_OF_POOL = 2,
    HEIGHT_DRAGGED_UNDER = 3,
    HEIGHT_UP_TO_HIGH_GROUND = 4,
    HEIGHT_DOWN_OFF_HIGH_GROUND = 5,
    HEIGHT_UP_LADDER = 6,
    HEIGHT_FALLING = 7,
    HEIGHT_IN_TO_CHIMNEY = 8,
    HEIGHT_GETTING_BUNGEE_DROPPED = 9,
    HEIGHT_ZOMBIQUARIUM = 10
};
enum ZombiePhase
{
    PHASE_ZOMBIE_NORMAL,
    PHASE_ZOMBIE_DYING,
    PHASE_ZOMBIE_BURNED,
    PHASE_ZOMBIE_MOWERED,
    PHASE_BUNGEE_DIVING,
    PHASE_BUNGEE_DIVING_SCREAMING,
    PHASE_BUNGEE_AT_BOTTOM,
    PHASE_BUNGEE_GRABBING,
    PHASE_BUNGEE_RISING,
    PHASE_BUNGEE_HIT_OUCHY,
    PHASE_BUNGEE_CUTSCENE,
    PHASE_POLEVAULTER_PRE_VAULT,
    PHASE_POLEVAULTER_IN_VAULT,
    PHASE_POLEVAULTER_POST_VAULT,
    PHASE_RISING_FROM_GRAVE,
    PHASE_JACK_IN_THE_BOX_RUNNING,
    PHASE_JACK_IN_THE_BOX_POPPING,
    PHASE_BOBSLED_SLIDING,
    PHASE_BOBSLED_BOARDING,
    PHASE_BOBSLED_CRASHING,
    PHASE_POGO_BOUNCING,
    PHASE_POGO_HIGH_BOUNCE_1,
    PHASE_POGO_HIGH_BOUNCE_2,
    PHASE_POGO_HIGH_BOUNCE_3,
    PHASE_POGO_HIGH_BOUNCE_4,
    PHASE_POGO_HIGH_BOUNCE_5,
    PHASE_POGO_HIGH_BOUNCE_6,
    PHASE_POGO_FORWARD_BOUNCE_2,
    PHASE_POGO_FORWARD_BOUNCE_7,
    PHASE_NEWSPAPER_READING,
    PHASE_NEWSPAPER_MADDENING,
    PHASE_NEWSPAPER_MAD,
    PHASE_DIGGER_TUNNELING,
    PHASE_DIGGER_RISING,
    PHASE_DIGGER_TUNNELING_PAUSE_WITHOUT_AXE,
    PHASE_DIGGER_RISE_WITHOUT_AXE,
    PHASE_DIGGER_STUNNED,
    PHASE_DIGGER_WALKING,
    PHASE_DIGGER_WALKING_WITHOUT_AXE,
    PHASE_DIGGER_CUTSCENE,
    PHASE_DANCER_DANCING_IN,
    PHASE_DANCER_SNAPPING_FINGERS,
    PHASE_DANCER_SNAPPING_FINGERS_WITH_LIGHT,
    PHASE_DANCER_SNAPPING_FINGERS_HOLD,
    PHASE_DANCER_DANCING_LEFT,
    PHASE_DANCER_WALK_TO_RAISE,
    PHASE_DANCER_RAISE_LEFT_1,
    PHASE_DANCER_RAISE_RIGHT_1,
    PHASE_DANCER_RAISE_LEFT_2,
    PHASE_DANCER_RAISE_RIGHT_2,
    PHASE_DANCER_RISING,
    PHASE_DOLPHIN_WALKING,
    PHASE_DOLPHIN_INTO_POOL,
    PHASE_DOLPHIN_RIDING,
    PHASE_DOLPHIN_IN_JUMP,
    PHASE_DOLPHIN_WALKING_IN_POOL,
    PHASE_DOLPHIN_WALKING_WITHOUT_DOLPHIN,
    PHASE_SNORKEL_WALKING,
    PHASE_SNORKEL_INTO_POOL,
    PHASE_SNORKEL_WALKING_IN_POOL,
    PHASE_SNORKEL_UP_TO_EAT,
    PHASE_SNORKEL_EATING_IN_POOL,
    PHASE_SNORKEL_DOWN_FROM_EAT,
    PHASE_ZOMBIQUARIUM_ACCEL,
    PHASE_ZOMBIQUARIUM_DRIFT,
    PHASE_ZOMBIQUARIUM_BACK_AND_FORTH,
    PHASE_ZOMBIQUARIUM_BITE,
    PHASE_CATAPULT_LAUNCHING,
    PHASE_CATAPULT_RELOADING,
    PHASE_GARGANTUAR_THROWING,
    PHASE_GARGANTUAR_SMASHING,
    PHASE_IMP_GETTING_THROWN,
    PHASE_IMP_LANDING,
    PHASE_BALLOON_FLYING,
    PHASE_BALLOON_POPPING,
    PHASE_BALLOON_WALKING,
    PHASE_LADDER_CARRYING,
    PHASE_LADDER_PLACING,
    PHASE_BOSS_ENTER,
    PHASE_BOSS_IDLE,
    PHASE_BOSS_SPAWNING,
    PHASE_BOSS_STOMPING,
    PHASE_BOSS_BUNGEES_ENTER,
    PHASE_BOSS_BUNGEES_DROP,
    PHASE_BOSS_BUNGEES_LEAVE,
    PHASE_BOSS_DROP_RV,
    PHASE_BOSS_HEAD_ENTER,
    PHASE_BOSS_HEAD_IDLE_BEFORE_SPIT,
    PHASE_BOSS_HEAD_IDLE_AFTER_SPIT,
    PHASE_BOSS_HEAD_SPIT,
    PHASE_BOSS_HEAD_LEAVE,
    PHASE_YETI_RUNNING,
    PHASE_SQUASH_PRE_LAUNCH,
    PHASE_SQUASH_RISING,
    PHASE_SQUASH_FALLING,
    PHASE_SQUASH_DONE_FALLING
};
enum ZombieType
{
    ZOMBIE_INVALID = -1,
    ZOMBIE_NORMAL,
    ZOMBIE_FLAG,
    ZOMBIE_TRAFFIC_CONE,
    ZOMBIE_POLEVAULTER,
    ZOMBIE_PAIL,
    ZOMBIE_NEWSPAPER,
    ZOMBIE_DOOR,
    ZOMBIE_FOOTBALL,
    ZOMBIE_DANCER,
    ZOMBIE_BACKUP_DANCER,
    ZOMBIE_DUCKY_TUBE,
    ZOMBIE_SNORKEL,
    ZOMBIE_ZAMBONI,
    ZOMBIE_BOBSLED,
    ZOMBIE_DOLPHIN_RIDER,
    ZOMBIE_JACK_IN_THE_BOX,
    ZOMBIE_BALLOON,
    ZOMBIE_DIGGER,
    ZOMBIE_POGO,
    ZOMBIE_YETI,
    ZOMBIE_BUNGEE,
    ZOMBIE_LADDER,
    ZOMBIE_CATAPULT,
    ZOMBIE_GARGANTUAR,
    ZOMBIE_IMP,
    ZOMBIE_BOSS,
    ZOMBIE_PEA_HEAD,
    ZOMBIE_WALLNUT_HEAD,
    ZOMBIE_JALAPENO_HEAD,
    ZOMBIE_GATLING_HEAD,
    ZOMBIE_SQUASH_HEAD,
    ZOMBIE_TALLNUT_HEAD,
    ZOMBIE_REDEYE_GARGANTUAR,
    NUM_ZOMBIE_TYPES,
    ZOMBIE_CACHED_POLEVAULTER_WITH_POLE, 
    NUM_CACHED_ZOMBIE_TYPES
};

//////////////////////////////
enum AttachmentID { ATTACHMENTID_NULL };
enum CoinID { COINID_NULL };
enum ParticleID { PARTICLEID_NULL };
enum ParticleEmitterID { PARTICLEEMITTERID_NULL };
enum ParticleSystemID { PARTICLESYSTEMID_NULL };
enum PlantID { PLANTID_NULL };
enum ReanimationID { REANIMATIONID_NULL };
enum ZombieID { ZOMBIEID_NULL };