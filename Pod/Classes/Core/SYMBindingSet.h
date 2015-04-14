//
// SYMBindingSet.h
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


#import "SYMBinding.h"

/** A SYMBindingSet subclass is used to collect all the different bindings for a specific type of data object (e.g. if there is an "Employee" object, the "EmployeeBindingSet" would consist of all the bindings for properties like full name, salary, department, etc.)  A binding set also provides IBOulets for all possible bindings, allowing the developer to simply link the labels, buttons, etc. on the storyboard to the binding they want in a single location.  See example project for sample implementation
*/

@interface SYMBindingSet : SYMBinding

/** A convenience method that allows for easily adding a binding to the set.
*
* @param binding An allocated, initialized instance of a SYMBinding subclass.
* @param view The view that should be updated by the binding.  Usually, this would be a reference to an IBOutlet, such as "self.fullNameLabel".
*/
-(void)addBinding:(SYMBinding *)binding toView:(UIView *)view;

@end
