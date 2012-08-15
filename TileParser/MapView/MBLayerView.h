//
//  MBLayerView.h
//  TileParser
//
//  Created by Moshe Berman on 8/14/12.
//
//

#import <UIKit/UIKit.h>

@interface MBLayerView : UIView

@property (nonatomic, strong) NSString *name;
@property (nonatomic) NSInteger heightInTiles;
@property (nonatomic) NSInteger widthInTiles;

- (id)initWithLayerData:(NSDictionary *)data tilesets:(NSArray *)tilesets imageCache:(NSArray *)cache;

@end
