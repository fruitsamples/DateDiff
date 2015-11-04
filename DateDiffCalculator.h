#import <Cocoa/Cocoa.h>

@interface DateDiffCalculator : NSObject {
    NSDate *date1;
    NSDate *date2;
    NSDateComponents *diff;
    BOOL doesEra, doesYear, doesMonth, doesWeek, doesDay;
}

@property (copy) NSDate *date1, *date2;     // The two dates
@property (copy) NSDateComponents *diff;    // And their difference, updated on -computeDateDiff
@property BOOL doesEra, doesYear, doesMonth, doesWeek, doesDay;  // What units to consider in the difference

- (void)computeDateDiff;
- (IBAction)computeDateDiff:(id)sender;

@end
