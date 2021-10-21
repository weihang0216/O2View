//
//  UITool.h
//  Utility
//
//  Created by chdo on 2017/12/8.
//

#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
@interface AATTool:NSObject
+(void)timeCost:(void(^)(void))block;
@end
// 系统版本号
double CRMDeviceSystemVersion(void);

CGSize CRMScreenSize(void);

/**
 颜色
 */
UIColor *CRMHexColor(int hexColor); // 16位颜色
UIColor *CRMHexColorA(int hexColor, CGFloat alpha);
UIColor *CRMRadomColor(void); //随机色
//UIColor *RGB(CGFloat A, CGFloat B, CGFloat C);


/**
 尺寸
 */
CGFloat AAT_NaviH(void);
CGFloat AAT_FootH(void); // 底部激活区高度 非iPhone X机型为0
CGFloat AAT_StatusH(void);
CGFloat AAT_ScreenW(void);
CGFloat AAT_ScreenH(void);


//
NSInteger CRMFileSizeByFileUrl(NSURL *filePath);
NSInteger CRMFileSizeByFilePath(NSString *filePath);


#define WeakObj(o) __weak typeof(o) o##Weak = o;
#define StrongObj(o) __weak typeof(o) o##Strong = o;
