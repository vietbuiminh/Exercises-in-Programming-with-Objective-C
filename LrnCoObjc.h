//This is example when creating Strings
//All examples in this code is in Learning Cocoa with Objective-C
#import <Foundation/Foundation.h>

@interface LrnCoObjc :NSObject
//empty string with this code:
NSString *aString = [[NSString alloc] init];
//The following code creates an NSString object, contains the text "Hello, world!":
NSString *aString = @"Hello, world!";
//Ask how many letters it has:
NSInteger sizeOfString = [@"Hello, world!" length];

//Example to change the case of a String:
NSString *originalString = @"This is An EXAMPLE";
// "THIS IS AN EXAMPLE"
NSString *uppercaseString = [originalString uppercaseString];
// "this is an example"
NSString *lowerCaseString = [originalString lowerCaseString];
// "This Is An Example"
NSString *capitalizedString = [originalString capitalizedString];

//Example to get the first five characters in the string, you do this:
NSString *startSubstring = [originalString substringToIndex:5];
NSString *endSubstring = [originalString substringFromIndex:5];

@end
