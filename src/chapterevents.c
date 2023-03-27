#include "chapterevents.h"

#include "proc.h"
#include "oam.h"
#include "event.h"
#include "eventscript.h"
#include "util.h"
#include "unit.h"
#include "map.h"
#include "battle.h"
#include "unitsprite.h"
#include "bmio.h"
#include "bmfx.h"
#include "faction.h"
#include "ai.h"
#include "mu.h"
#include "helpbox.h"
#include "chapterinfo.h"
#include "eventinfo.h"
#include "chapterunits.h"

#include "constants/pids.h"
#include "constants/jids.h"
#include "constants/iids.h"
#include "constants/msg.h"
#include "constants/flags.h"
#include "constants/songs.h"
#include "constants/chapters.h"

#include "data/chapters/tutorial/eventinfo.h"
#include "data/chapters/chapter1/eventinfo.h"
#include "data/chapters/chapter2/eventinfo.h"
#include "data/chapters/chapter3/eventinfo.h"
#include "data/chapters/chapter4/eventinfo.h"
#include "data/chapters/chapter5/eventinfo.h"
#include "data/chapters/chapter6/eventinfo.h"
#include "data/chapters/chapter7/eventinfo.h"
#include "data/chapters/chapter8/eventinfo.h"
#include "data/chapters/chapter9/eventinfo.h"
#include "data/chapters/chapter10_a/eventinfo.h"
#include "data/chapters/chapter11_a/eventinfo.h"
#include "data/chapters/chapter12/eventinfo.h"
#include "data/chapters/chapter13/eventinfo.h"
#include "data/chapters/chapter14/eventinfo.h"
#include "data/chapters/chapter15/eventinfo.h"
#include "data/chapters/chapter16/eventinfo.h"
#include "data/chapters/chapter17_i/eventinfo.h"
#include "data/chapters/chapter18_i/eventinfo.h"
#include "data/chapters/chapter19_i/eventinfo.h"
#include "data/chapters/chapter20_i/eventinfo.h"
#include "data/chapters/chapter21/eventinfo.h"
#include "data/chapters/chapter22/eventinfo.h"
#include "data/chapters/chapter23/eventinfo.h"
#include "data/chapters/chapter24/eventinfo.h"
#include "data/chapters/final/eventinfo.h"
#include "data/chapters/chapter10_b/eventinfo.h"
#include "data/chapters/chapter11_b/eventinfo.h"
#include "data/chapters/chapter17_s/eventinfo.h"
#include "data/chapters/chapter18_s/eventinfo.h"
#include "data/chapters/chapter19_s/eventinfo.h"
#include "data/chapters/chapter20_s/eventinfo.h"
#include "data/chapters/chapter8x/eventinfo.h"
#include "data/chapters/chapter12x/eventinfo.h"
#include "data/chapters/chapter14x/eventinfo.h"
#include "data/chapters/chapter16x/eventinfo.h"
#include "data/chapters/chapter20x_i/eventinfo.h"
#include "data/chapters/chapter20x_s/eventinfo.h"
#include "data/chapters/chapter21x/eventinfo.h"
#include "data/chapters/trial_a/eventinfo.h"
#include "data/chapters/trial_b/eventinfo.h"
#include "data/chapters/trial_c/eventinfo.h"
#include "data/chapters/trial_d/eventinfo.h"
#include "data/chapters/trial_e/eventinfo.h"

#include "data/chaptershops.h"

#include "data/chapterevents/unk_0866AAF8.h"

#include "data/chapters/tutorial/eventscript.h"
#include "data/chapters/chapter1/eventscript.h"
#include "data/chapters/chapter2/eventscript.h"
#include "data/chapters/chapter3/eventscript.h"
#include "data/chapters/chapter4/eventscript.h"
#include "data/chapters/chapter5/eventscript.h"
#include "data/chapters/chapter6/eventscript.h"
#include "data/chapters/chapter7/eventscript.h"
#include "data/chapters/chapter8/eventscript.h"
#include "data/chapters/chapter9/eventscript.h"
#include "data/chapters/chapter10_a/eventscript.h"
#include "data/chapters/chapter11_a/eventscript.h"
#include "data/chapters/chapter12/eventscript.h"
#include "data/chapters/chapter13/eventscript.h"
#include "data/chapters/chapter14/eventscript.h"
#include "data/chapters/chapter15/eventscript.h"
#include "data/chapters/chapter16/eventscript.h"
#include "data/chapters/chapter17_i/eventscript.h"
#include "data/chapters/chapter18_i/eventscript.h"
#include "data/chapters/chapter19_i/eventscript.h"
#include "data/chapters/chapter20_i/eventscript.h"
#include "data/chapters/chapter21/eventscript.h"
#include "data/chapters/chapter22/eventscript.h"
#include "data/chapters/chapter23/eventscript.h"
#include "data/chapters/chapter24/eventscript.h"
#include "data/chapters/final/eventscript.h"
#include "data/chapters/chapter10_b/eventscript.h"
#include "data/chapters/chapter11_b/eventscript.h"
#include "data/chapters/chapter17_s/eventscript.h"
#include "data/chapters/chapter18_s/eventscript.h"
#include "data/chapters/chapter19_s/eventscript.h"
#include "data/chapters/chapter20_s/eventscript.h"
#include "data/chapters/chapter8x/eventscript.h"
#include "data/chapters/chapter12x/eventscript.h"
#include "data/chapters/chapter14x/eventscript.h"
#include "data/chapters/chapter16x/eventscript.h"
#include "data/chapters/chapter20x_i/eventscript.h"
#include "data/chapters/chapter20x_s/eventscript.h"
#include "data/chapters/chapter21x/eventscript.h"
#include "data/chapters/trial_a/eventscript.h"
#include "data/chapters/trial_b/eventscript.h"
#include "data/chapters/trial_c/eventscript.h"
#include "data/chapters/trial_d/eventscript.h"
#include "data/chapters/trial_e/eventscript.h"
