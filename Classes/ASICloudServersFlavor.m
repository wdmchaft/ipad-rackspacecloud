//
//  ASICloudServersFlavor.m
//  RackspaceCloud
//
//  Created by Michael Mayo on 2/7/10.
//  Copyright 2010 Apple Inc. All rights reserved.
//

#import "ASICloudServersFlavor.h"


@implementation ASICloudServersFlavor

@synthesize disk, ram, name, flavorId;

+ (id)flavor {
	ASICloudServersFlavor *flavor = [[[self alloc] init] autorelease];
	return flavor;
}

-(void) dealloc {
	[name release];
	[super dealloc];
}

@end
