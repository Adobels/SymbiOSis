//
// SYMForwardDataThroughSegueResponder.h
//
// Copyright (c) 2015 Dan Hall
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.


#import <Foundation/Foundation.h>
#import "SYMDataProviderProtocol.h"
#import "SYMResponder.h"
#import "SYMSegueHandlerProtocol.h"

/** A responder that handles calls to "prepareForSegue" on the current view controller, and passes the value of the selected cell through to the data source in the next view controller */
@interface SYMForwardDataThroughSegueResponder : SYMResponder <SYMSegueHandlerProtocol>

/** In order to handle a specific segue, that segue must be given a Segue Identifier on the storyboard, and the same string should be entered for this property as well. */
@property (nonatomic, strong) IBInspectable NSString *segueIdentifier;

/** The data provider that will provide the value to the data source in the next view controller.  Usually an instance of SYMTableViewBinding or SYMCollectionViewBinding */
@property (nonatomic, weak) IBOutlet id<SYMDataProviderProtocol> sourceDataProvider;

@end
