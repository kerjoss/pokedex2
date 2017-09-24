//
//  PokeCell.h
//  pokedEx
//
//  Created by kerjoss on 2017/9/24.
//  Copyright © 2017年 kerjoss. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Pokemon.h"
@interface PokeCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UILabel *pokeNameLabel;
@property (weak, nonatomic) IBOutlet UIImageView *pokeImage;
-(void)configCell:(Pokemon *)pokemon;
@end
