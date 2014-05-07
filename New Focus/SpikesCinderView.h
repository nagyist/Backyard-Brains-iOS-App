//
//  SpikesCinderView.h
//  Backyard Brains
//
//  Created by Stanislav Mircic on 4/10/14.
//  Copyright (c) 2014 Datta Lab, Harvard University. All rights reserved.
//

#import "CCGLTouchView.h"
#import "Novocaine.h"
#import "RingBuffer.h"
#import "AudioFileWriter.h"
#import "BBAnalysisManager.h"
#include "cinder/Font.h"
#include "cinder/gl/TextureFont.h"
#include "cinder/Text.h"
#include "cinder/Utilities.h"

@interface SpikesCinderView : CCGLTouchView {
    CameraOrtho mCam;
    gl::Texture mColorScale;
    gl::TextureFontRef mScaleFont;
    
    PolyLine2f displayVector;
    PolyLine2f allSpikes;
    // Display parameters
    float numSecondsMax;
    float numSecondsMin;
    float numSecondsVisible;
    
    float numVoltsMax;
    float numVoltsMin;
    float numVoltsVisible;
}


- (void)saveSettings;
- (void)loadSettings;

@end
