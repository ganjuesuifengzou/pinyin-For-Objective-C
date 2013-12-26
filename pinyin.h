/*
 *  pinyin.h
 *  Chinese Pinyin First Letter
 *
 *  Created by George on 4/21/10.
 *  Copyright 2010 RED/SAFI. All rights reserved.
 *
 */

/*
 * // Example
 *
 * #import "pinyin.h"
 *
 * NSString *hanyu = @"中国共产党万岁！";
 * for (int i = 0; i < [hanyu length]; i++)
 * {
 *     printf("%c", pinyinFirstLetter([hanyu characterAtIndex:i]));
 * }
 *
 */


/*
 *  Extensioned by Neal(崔亚允) on 12/26/13.
 *  Copyright 2013 北京蓝鸥科技有限公司. All rights reserved.
 *  Add two method for NSString class in category format.
 *  -uppercasePinYinFirstLetter
 *  -lowercasePinYinFirstLetter
 *
 *  // Example
 *  #import "pinyin.h"
 *  NSString *hanyu = @"中国共产党万岁！";
 *  NSLog(@"%@",[hanyu uppercasePinYinFirstLetter]);//Z
 *  NSLog(@"%@",[hanyu lowercasePinYinFirstLetter]);//z
 *
 */





#define ALPHA	@"ABCDEFGHIJKLMNOPQRSTUVWXYZ#"
char pinyinFirstLetter(unsigned short hanzi);


@interface NSString(FirstLetter)


- (NSString *) uppercasePinYinFirstLetter;
- (NSString *) lowercasePinYinFirstLetter;


@end