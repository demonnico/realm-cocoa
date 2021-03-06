////////////////////////////////////////////////////////////////////////////
//
// Copyright 2015 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>
#import <XCTest/XCTestCase.h>

FOUNDATION_EXTERN void RLMAssertThrows(XCTestCase *self, __attribute__((noescape)) dispatch_block_t block, NSString *message, NSString *fileName, NSUInteger lineNumber);

// Forcibly deallocate the RLMRealm for the given path on the main thread
// Will cause crashes if it's alive for a reason other than being leaked by RLMAssertThrows
FOUNDATION_EXTERN void RLMDeallocateRealm(NSString *path);
