#include "FilamentChange.h"
#include "includes.h"


void menuFilamentChange(void)
{
    //1 title, ITEM_PER_PAGE items(icon + label)
  MENUITEMS FilamentChangeItems = {
  // title
  LABEL_FILAMENT,
  // icon                       label
   {{ICON_EXTRUDE,              LABEL_FILAMENT_CHANGE},
    {ICON_LOAD,                 LABEL_FILAMENT_LOAD},
    {ICON_UNLOAD,               LABEL_FILAMENT_UNLOAD},
    {ICON_BACKGROUND,           LABEL_BACKGROUND},
    {ICON_BACKGROUND,           LABEL_BACKGROUND},
    {ICON_BACKGROUND,           LABEL_BACKGROUND},
    {ICON_BACKGROUND,           LABEL_BACKGROUND},
    {ICON_BACK,                 LABEL_BACK}}
  };

  KEY_VALUES key_num = KEY_IDLE;
  menuDrawPage(&FilamentChangeItems);
  while(infoMenu.menu[infoMenu.cur] == menuFilamentChange)
  {
    key_num = menuKeyGetValue();
    switch(key_num)
    {
      case KEY_ICON_0: storeCmd("M600\n"); break; // Start filament change process
      case KEY_ICON_1: storeCmd("M701\n"); break; // Start load filament process
      case KEY_ICON_2: storeCmd("M702\n"); break; // Start unload filament process
      case KEY_ICON_7: infoMenu.cur--; break;
      default: break;
    }
    loopProcess();
  }
}