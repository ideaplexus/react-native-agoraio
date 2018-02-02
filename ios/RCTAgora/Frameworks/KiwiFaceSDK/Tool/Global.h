//
//  Global.h
//  AGFaceKitDemo
//
//  Created by zhaoyichao on 2017/1/17.
//  Copyright © 2017年 0dayZh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Global : NSObject

typedef enum
{
    AG_PIXELBUFFER_ROTATE_0 = 0,    ///< The image does not need steering
    AG_PIXELBUFFER_ROTATE_90 = 1,    ///< The image needs to be rotated 90 degrees clockwise
    AG_PIXELBUFFER_ROTATE_180 = 2,    ///< The image needs to be rotated 180 degrees clockwise
    AG_PIXELBUFFER_ROTATE_270 = 3    ///< The image needs to be rotated 270 degrees clockwise
} AG_PIXELBUFFER_ROTATE;

/**
 Ordinary filters
 
 - AG_FILTER_TYPE_NONE: NO filter
 - AG_FILTER_TYPE_STICKER: sticker filter
 */
typedef NS_ENUM(NSInteger, AG_FILTER_TYPE)
{
    AG_FILTER_TYPE_NONE = -1,
    AG_FILTER_TYPE_STICKER,
};

//Beauty parameter adjustment type
typedef NS_ENUM(NSInteger, AG_NEWBEAUTY_TYPE)
{
    /* Eye-magnifying */
    AG_NEWBEAUTY_TYPE_EYEMAGNIFYING,
    /* Chin-sliming */
    AG_NEWBEAUTY_TYPE_CHINSLIMING,
    /* Skin-whitening */
    AG_NEWBEAUTY_TYPE_SKINWHITENING,
    /* Skin-blemish removal */
    AG_NEWBEAUTY_TYPE_BLEMISHREMOVAL,
    /* Skin-saturation */
    AG_NEWBEAUTY_TYPE_SKINSATURATION,
    /* Skin-tenderness */
    AG_NEWBEAUTY_TYPE_SKINTENDERNESS
};


/* Distorting mirror enumeration */
typedef NS_ENUM(NSInteger, AG_DISTORTION_TYPE)
{
    AG_DISTORTION_TYPE_NONE = -1,
    /* Square face */
    AG_DISTORTION_TYPE_SQUAREFACE = 0,
    /* ET */
    AG_DISTORTION_TYPE_ET,
    /* fat face */
    AG_DISTORTION_TYPE_FATFACE,
    /* small face */
    AG_DISTORTION_TYPE_SMALLFACE
};

+ (Global *)sharedManager;

/* Whether the project is based on seven cattle (seven cattle video home page default orientation towards the default rotation 0 degrees non-seven cattle home to the right that is rotated 90 degrees) */
@property(nonatomic, assign) AG_PIXELBUFFER_ROTATE PIXCELBUFFER_ROTATE;

//Determine whether the default video frame image portrait
- (BOOL)isPixcelBufferRotateVertical;


@end