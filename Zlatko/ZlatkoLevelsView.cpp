// author: chris-scientist
// created at: 19/01/2019

#include "ZlatkoLevelsView.h"

ZlatkoLevelsView::ZlatkoLevelsView(ZlatkoLevelManager * aLevelManager) :
  levelManager(aLevelManager)
{
  if(!levelManager->getLevels()->isEmpty()) {
    currentLevel = levelManager->getLevels()->getFirstItem();
  }
}

void ZlatkoLevelsView::paint() const {
  gb.display.setColor(WHITE);
  if(levelManager->getLevels()->isEmpty()) {
    gb.display.print("Aucun niveau");
  } else {
    if(currentLevel->havePrevious()) {
      gb.display.print("< ");
    } else {
      gb.display.print("  ");
    }
    if(currentLevel->haveNext()) {
      gb.display.print(" >");
    }
    gb.display.println("");

    char * labelCurrentLevel = currentLevel->getValue()->getLabel();
    /*gb.display.print("[");
    gb.display.printf("%s", "?");
    gb.display.print("]");*/
    //gb.display.printf("%s", labelCurrentLevel);
    gb.display.print(labelCurrentLevel);
    //gb.display.print(currentLevel->getValue()->getlabel());
    ZlatkoMatrix<char> * mapModel = currentLevel->getValue()->getMap();
    gb.display.println("");
    //gb.display.print(mapModel->getWidth());
    //gb.display.printf("%d x %d", mapModel->getWidth(), mapModel->getHeight());

    /*char * test = "Hello";
    gb.display.println("");
    gb.display.print(test);*/

    gb.display.println("");
    gb.display.print(levelManager->getLevels()->getSize());
  }
}

void ZlatkoLevelsView::manageCommands() {
  if(!levelManager->getLevels()->isEmpty()) {
    if(currentLevel->havePrevious() && gb.buttons.pressed(BUTTON_LEFT)) {
      currentLevel = currentLevel->getPrevious();
    }
    if(currentLevel->haveNext() && gb.buttons.pressed(BUTTON_RIGHT)) {
      currentLevel = currentLevel->getNext();
    }
  }
}
