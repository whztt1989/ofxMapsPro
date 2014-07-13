//
//  ofxMapPro.h
//
//  Created by Patricio Gonzalez Vivo on 9/25/13 based
//  Tom Carden's ( https://github.com/RandomEtc/modestmaps-of ) ModestMap API (http://modestmaps.com/ ) for openFrameworks
//

#pragma once

#include "UIClass.h"
#include "TileMap.h"

class ofxMapPro : public UIClass, public TileMap {
public:
    
    ofxMapPro();
    
    void    setupUI();

    string      getClassName(){ return "TileMap";}
    
protected:
    void    guiEvent(ofxUIEventArgs &e);
   
    ofxUIRadio  *providers;
};