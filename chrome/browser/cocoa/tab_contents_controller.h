// Copyright (c) 2009 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_COCOA_TAB_COTNENTS_CONTROLLER_H_
#define CHROME_BROWSER_COCOA_TAB_COTNENTS_CONTROLLER_H_

#include <Cocoa/Cocoa.h>

// A class that controls the contents of a tab, including the toolbar and
// web area.

// TODO(pinkerton): Cole and I went back and forth about whether or not each
// tab should have its own copy of the toolbar. Right now, we decided to leave
// it like this as he expects it will make it easier for him to implement
// tab dragging and tear-off into new windows. It's also not very expensive.
// As we hook things up, we'll see if this imposes other restrictions (such
// as command-handling or dispatch) that will require us to change the view
// layout.

@interface TabContentsController : NSViewController {
 @private
  IBOutlet NSTextField* locationBar_;
}

// take this view (toolbar and web contents) full screen
- (IBAction)fullScreen:(id)sender;

@end

#endif  // CHROME_BROWSER_COCOA_TAB_COTNENTS_CONTROLLER_H_
