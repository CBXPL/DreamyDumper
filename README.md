# DreamyDumper
Always updated dreamydumper for cs2
PARTIALLY BASED ON A DIFFERENT DUMPER BUT THIS HAS FIXED PATTERNS ETC.

# DreamyDumper | 2.0
Tired of using static offsets that change quite often (0x338, 0x8 etc.)?
Well then use dreamydumper!
Dreamydumper 2.0 not only dumps offsets but also dumps dynamic and static signatures! (unless its static data table)
## How to use DD2?
1. turn on the game with -allow_third_party_software
1.1 We recommend launching also with -insecure since the dll does a lot of scanning shit and might get small detection
2. load with loadlib/standard injection
3. wait for "beep" sound to start and after it unloads you should be able to find offsets at C:/DreamyDumper2/
