/*  HBVideoController.h $

 This file is part of the HandBrake source code.
 Homepage: <http://handbrake.fr/>.
 It may be used under the terms of the GNU General Public License. */

#import <Cocoa/Cocoa.h>

@class HBVideo;

/**
 *  HBVideoController
 */
@interface HBVideoController : NSViewController

@property (nonatomic, readwrite, weak) HBVideo *video;

@end
