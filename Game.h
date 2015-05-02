//
//  Game.h
//  White Tiles
//
//  Created by Kyle Ju on 2014-09-13.
//  Copyright (c) 2014 Kyle Ju. All rights reserved.
//

#import <UIKit/UIKit.h>

int Row1BlackTile;
int Row2BlackTile;
int Row3BlackTile;
int Row4BlackTile;
int Row5BlackTile;

int RowNumber;

int ScoreNumber;
float TimeNumber;

NSInteger HighScoreNumber;

@interface Game : UIViewController
{
    
    IBOutlet UIImageView *Row1Tile1;
    IBOutlet UIImageView *Row1Tile2;
    IBOutlet UIImageView *Row1Tile3;
    IBOutlet UIImageView *Row1Tile4;
    IBOutlet UIImageView *Row2Tile1;
    IBOutlet UIImageView *Row2Tile2;
    IBOutlet UIImageView *Row2Tile3;
    IBOutlet UIImageView *Row2Tile4;
    IBOutlet UIImageView *Row3Tile1;
    IBOutlet UIImageView *Row3Tile2;
    IBOutlet UIImageView *Row3Tile3;
    IBOutlet UIImageView *Row3Tile4;
    IBOutlet UIImageView *Row4Tile1;
    IBOutlet UIImageView *Row4Tile2;
    IBOutlet UIImageView *Row4Tile3;
    IBOutlet UIImageView *Row4Tile4;
    IBOutlet UIImageView *Row5Tile1;
    IBOutlet UIImageView *Row5Tile2;
    IBOutlet UIImageView *Row5Tile3;
    IBOutlet UIImageView *Row5Tile4;
    IBOutlet UIButton *Start;
    
    IBOutlet UIButton *Button1;
    IBOutlet UIButton *Button2;
    IBOutlet UIButton *Button3;
    IBOutlet UIButton *Button4;
    
    IBOutlet UILabel *ScoreLabel;
    IBOutlet UILabel *TimeLabel;
    
    IBOutlet UIButton *Exit;
    
    
    NSTimer *Timer;
    
    
    
    
}
-(IBAction)RowDown1:(id)sender;
-(IBAction)RowDown2:(id)sender;
-(IBAction)RowDown3:(id)sender;
-(IBAction)RowDown4:(id)sender;
-(IBAction)StartGmae:(id)sender;
-(void)PlaceRow1BlackTile;
-(void)PlaceRow2BlackTile;
-(void)PlaceRow3BlackTile;
-(void)PlaceRow4BlackTile;
-(void)PlaceRow5BlackTile;
-(void)TileMoveDown;
-(void)Score;
-(void)TimerCountDown;
-(void)GameOver;

@end
