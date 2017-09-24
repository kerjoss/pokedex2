//
//  Pokemon.m
//  pokedEx
//
//  Created by kerjoss on 2017/9/24.
//  Copyright © 2017年 kerjoss. All rights reserved.
//

#import "Pokemon.h"

@implementation Pokemon

- (instancetype)initWithName:(NSString *)name pokedexID:(NSInteger) pokedexID{
    self = [super init];
    if (self)
    {
        self.name = name;
        self.pokedexID = pokedexID;
    }
    return self;
}

@end
