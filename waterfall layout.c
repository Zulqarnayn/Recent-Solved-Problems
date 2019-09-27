

    //
    // WaterFallFlowLayout.m
    // WaterFall
    //
    // Created by CarolWang on 14/11/29.
    // Copyright (c) 2014 Carol. All rights reserved.
    //
     
    #import "WaterFallFlowLayout.h"
     
    @interface WaterFallFlowLayout()
     
    @property (nonatomic, weak) id<UICollectionViewDelegateFlowLayout> delegate;
    @property (nonatomic, assign) NSInteger cellCount;//cell number
    @property (nonatomic, strong) NSMutableArray<NSNumber *> *colArr;//Store column height
    @property (nonatomic, strong) NSMutableDictionary<NSString *, NSIndexPath *> *attributeDict;//Store cell location information
    @property (nonatomic, assign) int colCount;//cell has several columns
     
    @end
     
    @implementation WaterFallFlowLayout
     
    //1. Prepare the layout:
    // 1.1 Get the total number of cells,
    // 1.2 Determine the position of your frame for each cell
    - (void)prepareLayout{
        [super prepareLayout];
     
        _colCount = 3;
        _colArr = [NSMutableArray<NSNumber *> array];
        _attributeDict = [NSMutableDictionary<NSString *, NSIndexPath *> dictionary];
        Self.delegate = (id<UICollectionViewDelegateFlowLayout>)self.collectionView.delegate;
     
       // Get the total number of cells
        _cellCount = [self.collectionView numberOfItemsInSection:0];
        If (_cellCount == 0) {
            Return;
        }
     
        // Assume that the height of the column of the cell at the beginning is equal to 0
        For (int i = 0; i < _colCount; i++) {
            [_colArr addObject:[NSNumber numberWithFloat:0]];
        }
     
        // Loop call layoutItemAtIndexPath method, for each cell layout, the indexPath is passed in as the key of the layout dictionary
        // layoutAttributesForItemAtIndexPath method implementation, here uses a layout dictionary, in fact, the location information of each cell corresponds to the indexPath, put them in the dictionary, to facilitate the retrieval of the back view
        For (int i = 0; i < _cellCount; i++) {
            [self layoutItemAtIndexPath:[NSIndexPath indexPathForItem:i inSection:0]];
        }
    }
     
    // This method will be called multiple times, for each cell layout
    - (void)layoutItemAtIndexPath:(NSIndexPath *)indexPath{
         // Get the gap of the cell through the protocol
        UIEdgeInsets edgeInsets = [self.delegate collectionView:self.collectionView layout:self insetForSectionAtIndex:indexPath.row];
     
        // Get the size of each cell
        CGSize itemSize = [self.delegate collectionView:self.collectionView layout:self sizeForItemAtIndexPath:indexPath];
     
        Float col = 0;
        Float shortHeight = [[_colArr objectAtIndex:col] floatValue];
     
        // Find the column with the lowest height, add the cell to the smallest column
        For (int i = 0; i < _colArr.count; i++) {
            Float height = [[_colArr objectAtIndex:i] floatValue];
            If (height < shortHeight) {
                shortHeight = height;
                Col = i;
            }
        }
     
        Float top = [[_colArr objectAtIndex:col] floatValue];
        // Determine the final frame of the cell
        CGRect frame = CGRectMake(edgeInsets.left + col * (edgeInsets.left + itemSize.width), top + edgeInsets.top, itemSize.width, itemSize.height);
     
        // Add the column height to the array
        [_colArr replaceObjectAtIndex:col withObject:[NSNumber numberWithFloat:top + edgeInsets.top + itemSize.height]];
     
        // Each cell's frame corresponds to an indexPath, added to the dictionary
        [_attributeDict setObject:indexPath forKey:NSStringFromCGRect(frame)];
    }
     
    // Returns the layout information of the cell, if you ignore the incoming rect, all the cell layout information will be returned at one time, the performance will be poor when there are too many pictures
    - (NSArray *)layoutAttributesForElementsInRect:(CGRect)rect{
        NSMutableArray *muArr = [NSMutableArray array];
        // indexPathsOfItem method, according to the incoming frame value to calculate the current cell should be displayed
        NSArray *indexPaths = [self indexPathsOfItem:rect];
        For (NSIndexPath *indexPath in indexPaths) {
            UICollectionViewLayoutAttributes *attribute = [self layoutAttributesForItemAtIndexPath:indexPath];
            [muArr addObject:attribute];
        }
        Return muArr;
    }
     
    // After the layout of each cell is completed, you need to implement this method, pass in the frame, and return the information of the cell.
    //Incoming the rect of the currently visible cell, called when the view is swiped
    - (NSArray *)indexPathsOfItem:(CGRect)rect{
        // Traverse the layout dictionary through the CGRectIntersectsRect method to determine whether each cell's rect and the incoming rect have an intersection, if the result is true, then this cell should be displayed, the corresponding indexPath in the layout dictionary is added to the array
        NSMutableArray *array = [NSMutableArray array];
        For (NSString *rectStr in _attributeDict) {
            CGRect cellRect = CGRectFromString(rectStr);
            If (CGRectIntersectsRect(cellRect, rect)) {
                NSIndexPath *indexPath = _attributeDict[rectStr];
                [array addObject:indexPath];
            }
        }
        Return array;
    }
     
    // Assign the recalculated frame to the cell
    - (UICollectionViewLayoutAttributes*) layoutAttributesForItemAtIndexPath:(NSIndexPath *)indexPath{
        UICollectionViewLayoutAttributes *attributes = [UICollectionViewLayoutAttributes layoutAttributesForCellWithIndexPath:indexPath];
        For (NSString *rectStr in _attributeDict) {
            If ([indexPath compare:_attributeDict[rectStr]] == NSOrderedSame) {
                Attributes.frame = CGRectFromString(rectStr);
            }
        }
        Return attributes;
    }
     
    // Finally, we must implement this method, return the size of the collectionView content
    // Only need to traverse the array created in the previous column height to get the highest column to return as a height
    - (CGSize)collectionViewContentSize{
        CGSize size = self.collectionView.frame.size;
        Float maxHeight = [[_colArr objectAtIndex:0] floatValue];
        // Find the height of the highest column
        For (int i = 0; i < _colArr.count; i++) {
            Float colHeight = [[_colArr objectAtIndex:i] floatValue];
            If (colHeight > maxHeight) {
                maxHeight = colHeight;
            }
        }
        Size.height = maxHeight;
        Return size;
    }
     
    @end

