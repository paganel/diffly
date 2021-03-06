//
//  AppController.h
//  Diffly
//
//  Created by Matt Mower on 04/01/2007.
//  Copyright 2007 Matt Mower. See MIT-LICENSE for more information.
//

#import <Cocoa/Cocoa.h>

@class PreferenceController;

@interface AppController : NSObject {
	PreferenceController* preferenceController;
}

- (IBAction)openWorkingCopy:(id)sender;
- (IBAction)showPreferencePanel:(id)sender;

- (id)openWorkingCopyDocument:(NSString*)docFolder;
- (NSArray*)openFolderList;

@end
