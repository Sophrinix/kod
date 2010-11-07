#import <ChromiumTabs/ChromiumTabs.h>
#import "KFileOutlineView.h"

@class KFileTreeController;

@interface KBrowserWindowController : CTBrowserWindowController {
  IBOutlet NSSplitView *verticalSplitView_;
  IBOutlet NSView *leftmostSubviewOfVerticalSplitView_;
  IBOutlet KFileOutlineView *fileOutlineView_;
  KFileTreeController *fileTreeController_;
}

@property(readonly) NSSplitView *verticalSplitView;
@property(readonly) NSView *leftmostSubviewOfVerticalSplitView;

@end