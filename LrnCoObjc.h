//This is example when creating Strings
#import <Foundation/Foundation.h>

@interface LrnCoObjc :NSObject
//empty string with this code:
NSString *aString = [[NSString alloc] init];
//The following code creates an NSString object, contains the text "Hello, world!":
NSString *aString = @"Hello, world!";
//Ask how many letters it has:
NSInteger sizeOfString = [@"Hello, world!" length];

@end
