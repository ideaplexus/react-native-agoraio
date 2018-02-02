//
//  AGSmiliesStickerRenderer.h
//  AGFaceSDK
//
//  Created by zhaoyichao on 2017/2/21.
//  Copyright © 2017年 PLMediaStreamingSDK. All rights reserved.
//

#import "AGPresentStickerRenderer.h"
#import "GPUImage.h"

@interface AGSmiliesStickerRenderer : GPUImageFilter <AGRenderProtocol, GPUImageInput>
typedef void(^SmiliesStickerRendererPlayOverBlock)(void);

@property(nonatomic, copy) SmiliesStickerRendererPlayOverBlock smiliesStickerRendererPlayOverBlock;

/**
 Need to draw the stickers
 */
@property(nonatomic, strong) AGSticker *sticker;

/**
 Whether the mirror
 */
@property(nonatomic, assign) BOOL isMirrored;

@property(nonatomic, copy) NSArray<NSArray *> *faces;

@property(nonatomic, assign) BOOL needTrackData;

//贴纸是否正在播放
@property(nonatomic, assign) BOOL isPlaying;

//If stickers automatically
@property(nonatomic, assign) BOOL isAutomaticallyPlay;

#pragma mark - AGRenderProtocol

- (BOOL)needTrackData;

- (void)setSmiliesInfos:(NSMutableArray *)isOnEnableInfos;

@end
