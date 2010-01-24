//
//  baseDroplet.h
//  ShinyDroplets
//
//  Created by Matteo Rattotti on 6/27/08.
//  Copyright 2008 www.shinyfrog.net. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface baseDroplet : NSObject {
        NSDictionary* errorDict;
        NSAppleEventDescriptor* returnDescriptor;
        NSAppleScript* scriptObject;
        
        NSString* scriptDrop;
        NSMutableString* scriptActivate;
}
- (void) executeScript: (NSString *) theScript;
- (void) setDropScript;
- (void) setActivateScript;
- (NSString *) appName;


@end
