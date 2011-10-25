/*
 * cocoshop
 *
 * Copyright (c) 2011 Andrew
 * Copyright (c) 2011 Stepan Generalov
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#import "cocos2d.h"

@class CSMacGLView;
@class CSPreferencesController;
@class CSViewController;
@class CSBrowserWindowController;

@interface cocoshopAppDelegate : NSObject <NSApplicationDelegate>
{
    NSView *_view;
	CSMacGLView	*_glView;
    CSViewController *_viewController;
    CSBrowserWindowController *_windowController;
}

@property (assign) IBOutlet NSView *view;
@property (assign) IBOutlet CSMacGLView	*glView;
@property (assign) IBOutlet CSViewController *viewController;

- (void)createNewWindow;
- (IBAction)toggleFullScreen:(id)sender;
- (IBAction)newProject:(id)sender;
- (IBAction)closeProject:(id)sender;
- (IBAction)openProject:(id)sender;
- (IBAction)saveProject:(id)sender;
- (IBAction)undo:(id)sender;
- (IBAction)redo:(id)sender;
- (IBAction)showPreferences:(id)sender;

@end
