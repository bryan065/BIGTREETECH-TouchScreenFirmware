#include "FilamentMenu.h"
#include "includes.h"


void menuFilament(void)
{
    //1 title, ITEM_PER_PAGE items(icon + label)
  MENUITEMS FilamentItems = {
  // title
  LABEL_FILAMENT,
  // icon                       label
   {{ICON_EXTRUDE,              LABEL_EXTRUDE},
    {ICON_EXTRUDE,              LABEL_FILAMENT_CHANGE},
    {ICON_BACKGROUND,           LABEL_BACKGROUND},
    {ICON_BACKGROUND,           LABEL_BACKGROUND},
    {ICON_BACKGROUND,           LABEL_BACKGROUND},
    {ICON_BACKGROUND,           LABEL_BACKGROUND},
    {ICON_BACKGROUND,           LABEL_BACKGROUND},
    {ICON_BACK,                 LABEL_BACK}}
  };

//   if(infoMachineSettings.autoLevel == 1){
//     FilamentItems.items[2].icon = ICON_LEVELING;
//     FilamentItems.items[2].label.index = LABEL_ABL;
//     FilamentItems.items[3].icon = ICON_MANUAL_LEVEL;
//     FilamentItems.items[3].label.index = LABEL_LEVELING;
//   }
//   else{
//     FilamentItems.items[2].icon = ICON_MANUAL_LEVEL;
//     FilamentItems.items[2].label.index = LABEL_LEVELING;
//     FilamentItems.items[3].icon = ICON_BACKGROUND;
//     FilamentItems.items[3].label.index = LABEL_BACKGROUND;
//   }

  KEY_VALUES key_num = KEY_IDLE;
  menuDrawPage(&FilamentItems);
  while(infoMenu.menu[infoMenu.cur] == menuFilament)
  {
    key_num = menuKeyGetValue();
    switch(key_num)
    {
      case KEY_ICON_0: infoMenu.menu[++infoMenu.cur] = menuExtrude; break;
      case KEY_ICON_1: infoMenu.menu[++infoMenu.cur] = menuFilamentChange; break;
      case KEY_ICON_2:
                      if(infoMachineSettings.autoLevel == 1){
                        infoMenu.menu[++infoMenu.cur] = menuAutoLeveling;
                      }
                      else{
                        infoMenu.menu[++infoMenu.cur] = menuManualLeveling;
                      }
                      break;
      case KEY_ICON_3:
                      if(infoMachineSettings.autoLevel == 1){
                        infoMenu.menu[++infoMenu.cur] = menuManualLeveling;
                      }
                      break;
      case KEY_ICON_7: infoMenu.cur--; break;
      default: break;
    }
    loopProcess();
  }
}
