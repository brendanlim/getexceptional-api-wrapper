/*
 * Author: Jörg Polakowski <jp@mobile-melting.de>
 *
 * Copyright (c) 2011 mobile melting GmbH
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#import <Foundation/Foundation.h>


@interface GTExceptionalMessage : NSObject {
    NSString *message;
    NSString *exceptionClassName;
    NSArray *backtrace;
    NSString *occurredAt;
}

@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *exceptionClassName;
@property (nonatomic, retain) NSArray *backtrace;
@property (nonatomic, retain) NSString *occuredAt;

/**
 *
 * exMessage - The error details string for the error.
 * exClass - This string represents the name of the class within which the error occurred.
 * exBacktrace - Array of strings representing the backtrace where the error occurred.
 *
 */
- (id)initWithMessage:(NSString *)exMessage 
       exceptionClass:(NSString *)exClass 
            backtrace:(NSArray *)exBacktrace;

- (id)initWithException:(NSException *)exception;

@end
