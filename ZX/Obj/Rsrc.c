/* Ofront+ 1.0 -sxi3f -21 */
#include "SYSTEM.oh"
#include "GrTiles.oh"

typedef
	CHAR Rsrc_LevelsData [9175];

typedef
	CHAR Rsrc_TilesData [10] [9];


export __CONSTARR Rsrc_TilesData Rsrc_Tiles =
	{{0,0,0,0,0,0,0,0,0},
	{0,12,18,61,65,127,103,126,70},
	{96,112,96,112,96,112,96,112,67},
	{96,112,96,112,96,112,96,112,67},
	{0,0,0,0,0,0,0,128,69},
	{221,221,255,255,255,255,255,255,65},
	{66,255,66,66,66,255,66,66,69},
	{0,255,170,170,0,0,0,0,68},
	{0,191,191,191,0,253,253,253,66},
	{75,254,207,185,115,254,147,237,71}};
export __CONSTARR Rsrc_LevelsData Rsrc_Levels =
	{28,0,98,0,15,0,0,0,0,2,
	3,1,4,7,1,153,136,136,136,136,
	136,136,8,136,136,136,136,136,136,134,
	153,153,0,0,0,0,0,0,0,0,
	0,16,0,8,3,6,153,153,0,96,
	136,136,136,104,136,136,136,136,8,104,
	136,136,153,153,16,103,0,0,16,96,
	0,0,0,96,0,96,104,24,153,153,
	128,96,8,136,136,136,128,96,136,104,
	120,136,96,136,153,153,128,96,0,0,
	0,0,0,96,0,128,0,0,96,8,
	153,153,128,96,0,112,136,136,135,135,
	136,136,118,119,8,8,153,153,128,96,
	120,6,0,0,128,0,0,0,6,0,
	0,0,153,153,128,0,0,118,136,136,
	128,96,136,136,120,120,136,136,153,153,
	128,119,8,6,16,128,128,96,0,0,
	0,0,0,0,153,153,128,0,8,134,
	136,128,0,144,119,136,120,120,136,6,
	153,153,128,1,8,6,128,128,136,144,
	68,148,16,8,136,6,153,153,128,8,
	8,6,0,0,128,144,153,153,128,8,
	0,6,153,153,128,8,73,137,134,135,
	0,0,0,0,128,120,136,6,153,153,
	128,8,153,137,134,128,136,135,136,8,
	0,0,136,6,153,153,128,24,0,0,
	6,0,0,0,0,120,135,8,136,6,
	153,153,128,136,128,134,136,135,136,136,
	8,0,0,0,136,6,153,153,128,136,
	0,6,0,0,16,0,0,105,135,0,
	0,6,153,153,128,136,136,134,136,119,
	136,136,119,105,128,120,8,6,153,153,
	0,0,0,6,0,0,0,0,0,97,
	128,8,8,6,153,153,0,0,0,150,
	68,68,68,68,68,153,68,68,153,153,
	153,153,153,153,153,153,85,85,85,85,
	85,85,85,85,153,153,153,29,0,98,
	2,9,0,21,0,0,27,21,15,12,
	2,9,153,0,0,0,0,0,0,0,
	0,0,0,0,0,0,105,153,153,0,
	0,0,0,0,0,0,0,0,0,0,
	0,0,105,153,153,16,102,102,22,102,
	102,22,102,102,22,102,102,22,99,153,
	153,96,0,6,96,0,6,96,0,6,
	96,0,6,96,153,153,153,96,0,6,
	96,0,6,96,0,6,96,0,6,96,
	144,153,153,96,102,97,102,102,97,102,
	102,97,102,102,97,102,144,153,153,96,
	0,6,96,0,6,96,0,6,96,0,
	6,96,144,153,153,96,0,6,96,0,
	6,96,0,6,96,0,6,96,144,153,
	153,16,102,102,22,102,102,22,102,102,
	22,102,102,22,144,153,153,96,0,6,
	96,0,6,96,0,6,96,0,6,96,
	144,153,153,96,0,6,96,0,6,96,
	0,6,96,0,6,96,144,153,153,96,
	102,97,102,102,97,102,102,97,102,102,
	97,102,144,153,153,96,0,6,96,0,
	6,96,0,6,96,0,6,96,144,153,
	153,96,0,6,96,0,6,96,0,6,
	96,0,6,96,144,153,153,16,102,102,
	22,102,102,22,102,102,22,102,102,22,
	144,153,153,96,0,6,96,0,6,96,
	0,6,96,0,6,96,144,153,153,96,
	0,6,96,0,6,96,0,6,96,0,
	6,96,144,153,153,96,102,97,102,102,
	97,102,102,97,102,102,97,102,144,153,
	153,96,0,6,96,0,6,96,0,6,
	96,0,6,96,144,153,153,96,0,6,
	96,0,6,96,0,6,96,0,6,96,
	144,153,153,153,68,68,68,68,68,68,
	68,68,68,68,68,68,148,153,153,153,
	85,85,85,85,85,85,85,85,85,85,
	85,85,149,153,28,0,228,1,15,2,
	17,2,0,1,2,5,6,9,3,153,
	9,0,0,0,0,0,0,0,0,0,
	0,0,0,150,153,153,105,119,119,119,
	119,119,119,8,0,0,0,0,0,150,
	153,153,105,0,0,0,0,0,0,8,
	0,0,0,0,0,150,153,153,105,0,
	0,0,0,0,136,136,8,0,0,0,
	0,150,153,153,105,0,0,0,0,128,
	136,128,136,0,0,0,0,150,153,153,
	105,0,0,0,0,0,128,129,0,0,
	0,0,0,150,153,153,105,0,0,0,
	0,128,136,134,136,0,0,0,0,150,
	153,153,105,0,0,0,0,136,8,6,
	136,8,0,0,0,150,153,153,105,0,
	0,0,0,0,24,22,8,0,0,0,
	0,150,153,153,105,0,0,0,0,128,
	136,134,136,0,0,0,0,150,153,153,
	105,0,0,0,0,136,8,6,136,8,
	0,0,0,150,153,153,105,0,0,0,
	0,0,24,22,8,0,0,0,0,150,
	153,153,105,0,0,0,0,136,136,134,
	136,8,0,0,0,150,153,153,105,0,
	0,0,128,136,8,6,136,136,0,0,
	0,150,153,153,105,0,0,0,0,0,
	24,22,8,0,0,0,0,150,153,153,
	105,0,0,0,128,136,136,134,136,136,
	0,0,0,150,153,153,105,0,0,0,
	136,136,8,6,136,136,8,0,0,150,
	153,153,105,0,0,0,0,128,0,6,
	128,0,0,0,144,150,153,153,105,144,
	0,0,0,128,16,22,128,0,0,0,
	48,150,153,153,153,153,119,119,136,136,
	136,136,136,136,120,119,151,153,153,153,
	73,68,68,68,136,136,136,136,136,136,
	72,68,68,148,153,153,89,85,85,85,
	136,136,136,136,136,136,88,85,85,149,
	153,4,0,130,2,70,0,0,0,0,
	4,14,15,5,2,10,153,0,6,0,
	0,0,0,0,0,0,0,0,0,0,
	0,153,153,0,6,0,0,0,0,1,
	0,119,119,119,119,119,6,153,153,0,
	6,0,0,0,0,119,6,0,0,0,
	0,0,6,153,153,48,6,6,0,0,
	0,0,6,113,119,119,6,0,6,153,
	153,118,0,96,0,0,0,96,0,0,
	0,0,96,0,6,153,153,6,9,0,
	6,0,0,6,0,96,119,119,7,0,
	6,153,153,134,120,119,96,0,0,6,
	0,96,0,0,0,0,6,153,153,96,
	0,0,0,6,0,96,0,0,119,119,
	6,1,6,153,153,96,1,0,0,96,
	0,0,6,0,0,0,6,0,6,153,
	153,96,8,0,0,0,6,0,6,96,
	119,119,0,1,6,153,153,96,16,17,
	17,1,96,6,96,96,0,0,0,0,
	6,153,153,96,128,119,119,7,97,96,
	96,0,119,119,6,1,6,153,153,96,
	1,17,17,1,119,0,96,0,0,0,
	6,0,6,153,153,0,8,120,119,119,
	119,6,6,119,119,119,0,120,6,153,
	153,0,0,0,0,0,0,96,0,0,
	0,0,0,0,6,153,153,0,96,119,
	119,119,103,0,96,119,119,119,119,119,
	0,153,153,0,96,0,0,0,0,119,
	7,0,0,0,0,0,0,153,153,0,
	0,119,119,119,6,0,0,118,119,119,
	119,119,6,153,153,0,0,0,0,0,
	112,119,119,0,0,0,0,0,6,153,
	153,0,96,119,119,103,0,0,0,96,
	119,119,119,119,0,153,153,0,96,0,
	0,0,119,119,119,7,0,0,0,0,
	0,153,153,153,153,68,68,68,68,68,
	68,68,68,68,68,68,68,153,30,0,
	130,2,72,0,87,0,0,5,13,25,
	23,15,3,153,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,150,153,
	0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,150,153,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,
	150,153,0,136,136,136,136,103,119,119,
	118,136,136,136,136,0,150,153,0,8,
	16,1,144,96,0,0,6,9,16,1,
	128,0,150,153,0,128,136,136,151,96,
	0,0,6,121,136,136,8,0,150,153,
	0,8,16,1,144,96,0,0,6,9,
	16,1,128,0,150,153,0,128,136,136,
	151,96,0,0,6,121,136,136,8,0,
	150,153,0,8,16,1,144,96,0,0,
	6,9,16,1,128,0,150,153,0,128,
	136,136,151,96,0,0,6,121,136,136,
	8,0,150,153,0,8,16,1,144,96,
	0,0,6,9,16,1,128,0,150,153,
	0,128,136,136,151,96,0,0,6,121,
	136,136,8,0,150,153,0,8,16,1,
	144,96,0,0,6,9,16,1,128,0,
	150,153,0,128,136,136,151,96,0,0,
	6,121,136,136,8,0,150,153,0,8,
	16,1,144,96,0,0,6,9,16,1,
	128,0,150,153,0,128,136,136,151,96,
	0,0,6,121,136,136,8,0,150,153,
	0,8,16,1,144,96,0,0,6,9,
	16,1,128,0,150,153,0,128,136,136,
	151,96,0,0,6,121,136,136,8,0,
	150,153,0,8,16,1,128,96,0,0,
	6,8,16,1,128,0,150,153,0,136,
	136,136,151,96,0,0,6,121,136,136,
	136,144,150,153,0,2,0,0,32,96,
	0,0,6,2,0,0,32,48,150,153,
	153,153,153,153,153,153,68,68,153,153,
	153,153,153,153,153,25,0,1,0,11,
	0,24,0,1,5,1,2,3,6,2,
	9,0,0,0,0,0,0,0,0,0,
	0,0,96,0,0,144,9,0,118,135,
	153,153,153,9,0,0,0,0,96,0,
	0,144,9,96,0,0,25,16,16,9,
	0,0,0,0,96,0,0,144,9,6,
	0,0,105,96,96,105,0,128,136,1,
	96,0,105,144,9,96,0,0,105,96,
	96,9,0,144,153,153,153,153,105,144,
	9,0,6,0,105,96,96,9,0,8,
	0,0,0,0,105,144,9,0,96,0,
	105,96,96,9,64,0,0,0,0,0,
	105,144,9,0,96,16,105,96,96,9,
	9,0,0,0,0,0,105,144,9,96,
	105,0,105,96,96,9,9,96,9,0,
	150,0,105,144,9,96,9,6,105,96,
	96,9,24,98,9,0,150,0,105,144,
	9,96,9,6,105,96,96,9,144,103,
	9,104,144,0,105,144,9,96,105,0,
	105,96,96,9,0,96,9,6,144,0,
	105,144,9,96,105,0,105,96,96,9,
	128,104,9,96,144,0,105,144,9,96,
	9,6,105,96,96,9,118,7,9,0,
	150,0,105,144,9,96,9,6,105,96,
	96,9,134,8,9,104,144,0,105,144,
	9,96,105,0,105,96,96,9,112,103,
	9,6,144,0,105,144,9,96,105,0,
	105,96,96,9,128,104,9,96,144,0,
	99,144,9,96,9,6,105,96,96,9,
	118,7,9,0,150,96,153,144,9,96,
	9,6,105,105,105,9,134,8,9,96,
	144,96,137,144,9,96,105,0,96,96,
	96,0,112,103,9,6,144,96,9,153,
	9,96,105,0,96,96,96,0,0,96,
	104,0,144,96,73,153,153,153,153,153,
	153,153,153,153,153,153,153,153,153,153,
	153,153,28,0,133,2,13,0,20,0,
	0,7,5,3,2,3,3,68,68,68,
	68,68,68,9,73,68,148,144,68,68,
	148,150,68,85,153,153,153,89,85,9,
	89,85,149,144,153,89,149,150,85,85,
	25,0,16,89,153,9,153,89,149,1,
	0,89,149,150,85,85,153,150,153,89,
	9,96,0,89,149,153,105,153,153,150,
	89,85,149,150,85,85,105,153,105,89,
	85,85,105,0,48,6,89,85,149,150,
	85,85,105,89,105,89,85,85,153,150,
	153,153,89,85,149,150,85,85,105,89,
	105,89,85,85,149,150,85,85,85,85,
	149,150,153,153,105,89,105,153,153,153,
	149,150,153,153,89,85,149,6,0,0,
	96,89,105,0,0,145,149,6,0,1,
	89,85,149,150,153,153,105,89,105,153,
	153,153,149,105,153,73,89,85,149,150,
	85,85,105,89,105,89,85,85,85,105,
	89,153,89,149,153,150,85,85,105,89,
	105,153,153,89,85,105,89,85,85,149,
	0,150,85,85,105,89,105,0,16,89,
	85,105,89,153,153,149,150,153,153,153,
	105,153,153,153,150,89,153,105,89,9,
	145,149,6,0,0,0,96,0,89,149,
	150,85,9,96,89,105,153,149,150,153,
	153,153,153,153,89,149,150,85,105,153,
	89,105,89,149,150,85,85,85,85,85,
	85,149,150,85,105,89,85,105,89,149,
	150,85,149,153,149,153,153,153,150,153,
	105,153,85,105,89,149,150,85,149,145,
	149,16,0,0,6,0,96,144,153,105,
	89,149,150,153,153,150,149,148,153,153,
	153,153,153,6,0,96,89,149,6,0,
	0,150,149,153,85,85,85,85,149,153,
	153,153,89,149,153,153,153,153,85,85,
	85,85,85,85,85,85,85,85,85,29,
	0,130,2,10,0,22,0,0,6,5,
	4,3,2,4,153,153,153,153,153,144,
	153,153,153,153,153,144,153,153,105,153,
	153,0,0,0,0,0,0,0,0,0,
	0,0,0,0,105,153,153,0,0,0,
	0,0,0,0,0,0,0,0,0,0,
	105,153,153,0,96,119,118,103,119,118,
	120,118,103,119,118,103,105,153,153,0,
	96,0,6,96,0,6,8,6,96,0,
	6,96,105,153,153,0,96,119,118,103,
	119,134,128,118,103,119,118,103,105,153,
	153,0,96,0,6,96,0,134,129,6,
	96,0,6,96,105,153,153,0,96,119,
	118,103,119,120,119,120,103,119,118,103,
	105,153,153,0,96,0,6,96,0,8,
	1,8,96,0,6,96,105,153,153,0,
	96,119,118,96,128,119,119,135,96,112,
	118,103,105,153,153,0,96,0,6,96,
	0,0,1,0,96,0,6,96,105,153,
	153,0,96,119,118,96,8,6,119,6,
	104,112,118,103,105,153,153,0,96,0,
	6,96,8,6,1,6,104,0,6,96,
	105,153,153,0,96,119,118,128,0,118,
	7,6,128,112,118,103,105,153,153,0,
	96,0,6,32,112,6,1,118,32,0,
	6,96,105,153,153,0,96,119,118,136,
	8,6,119,6,136,120,118,103,105,153,
	153,0,96,0,6,0,0,6,1,6,
	0,0,6,96,99,153,153,105,105,119,
	6,8,112,118,7,118,0,8,118,103,
	153,153,153,105,73,68,68,136,72,68,
	68,68,136,72,68,68,153,153,153,96,
	89,85,85,85,85,85,85,85,85,85,
	85,85,85,153,153,96,89,85,85,85,
	85,85,85,85,85,85,85,85,85,153,
	153,153,89,85,85,85,85,85,85,85,
	85,85,85,85,85,153,16,0,130,2,
	35,1,60,1,0,10,11,10,31,11,
	28,153,0,0,0,0,0,0,144,150,
	0,0,0,0,0,0,153,153,118,0,
	0,0,0,0,48,150,0,0,0,0,
	0,103,153,153,118,119,119,119,119,119,
	151,153,119,119,119,119,119,103,153,153,
	22,0,1,16,0,1,16,0,1,16,
	0,1,16,96,153,153,118,119,119,119,
	119,119,119,119,119,119,119,119,119,103,
	153,153,6,1,0,0,0,0,0,0,
	0,0,0,0,16,96,153,153,6,153,
	68,148,153,68,148,153,68,148,73,153,
	148,96,153,153,22,89,85,85,89,85,
	85,89,85,85,89,153,149,97,153,153,
	6,89,153,89,89,153,89,89,153,89,
	89,153,149,96,153,153,6,89,153,89,
	89,153,153,89,153,153,89,153,149,96,
	153,153,22,89,153,89,89,85,85,89,
	153,153,89,153,149,97,153,153,6,89,
	85,85,153,153,89,89,153,153,89,153,
	149,96,153,153,6,89,85,85,89,153,
	89,89,153,89,89,153,149,96,153,153,
	22,89,153,89,89,85,85,89,85,85,
	89,153,149,97,153,153,6,89,153,89,
	153,85,149,153,85,149,89,153,149,96,
	153,153,6,153,153,153,153,153,153,153,
	153,153,153,153,153,96,153,153,22,16,
	16,16,16,16,16,16,16,16,16,16,
	16,96,153,153,6,6,6,6,6,6,
	6,6,6,6,6,6,6,6,153,153,
	96,96,96,96,96,96,96,97,96,96,
	96,96,96,96,153,153,6,6,6,6,
	22,6,6,6,6,22,6,6,6,6,
	153,153,96,96,97,96,96,96,96,97,
	96,96,96,96,97,96,153,153,136,136,
	136,136,136,136,136,136,136,136,136,136,
	136,136,153,30,0,129,2,69,0,0,
	0,1,4,4,28,5,4,4,153,153,
	153,153,153,153,153,153,153,153,153,153,
	153,153,153,150,9,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,150,
	9,0,0,0,17,0,0,0,0,8,
	0,0,0,0,49,150,105,136,136,136,
	136,136,136,136,128,134,136,136,136,136,
	136,152,105,0,0,0,0,0,0,0,
	96,8,0,0,0,0,0,144,105,0,
	0,0,0,0,0,0,96,6,0,0,
	0,16,0,144,105,0,0,144,153,153,
	153,153,0,6,0,0,0,0,0,144,
	105,0,0,144,22,22,22,150,0,6,
	0,16,1,0,0,144,105,0,0,144,
	97,97,97,145,0,134,136,136,136,136,
	136,150,105,0,0,144,22,22,22,150,
	0,0,0,0,0,0,0,150,105,0,
	0,144,97,97,97,145,16,0,0,0,
	0,0,0,150,105,119,119,151,22,22,
	22,150,0,0,0,0,0,0,0,150,
	105,0,0,144,153,105,153,153,0,118,
	119,119,119,119,119,144,105,0,0,0,
	0,96,0,0,0,6,0,0,0,0,
	0,150,105,0,0,134,136,104,0,0,
	0,112,119,119,119,119,119,150,105,0,
	0,6,0,96,0,0,16,0,0,0,
	0,0,0,150,105,0,0,6,0,96,
	16,0,0,0,0,1,0,0,0,150,
	9,6,0,6,0,128,135,135,135,135,
	136,136,136,136,136,152,9,96,0,112,
	119,119,119,6,16,0,0,0,0,0,
	0,144,9,0,6,0,0,0,0,136,
	136,8,0,0,0,0,0,144,9,128,
	150,68,68,68,68,68,68,68,68,68,
	68,68,68,148,153,153,153,153,153,153,
	153,153,153,153,153,153,153,153,153,153,
	62,0,66,2,36,0,28,0,1,2,
	3,20,7,2,3,153,153,153,153,153,
	153,153,153,153,153,153,153,153,9,144,
	153,105,102,0,0,0,0,0,32,56,
	0,0,0,0,0,8,150,105,0,119,
	119,119,119,119,119,120,119,119,119,119,
	135,0,150,105,0,0,0,0,0,0,
	0,8,0,0,0,0,0,0,150,105,
	0,0,0,0,0,0,0,8,0,0,
	0,0,0,0,150,105,0,0,0,0,
	0,0,0,8,0,0,0,0,0,0,
	150,105,0,0,0,0,0,0,0,8,
	0,0,0,0,0,0,150,105,16,0,
	0,0,0,0,16,24,0,0,0,0,
	0,1,150,105,0,0,0,0,0,0,
	128,136,0,0,0,0,0,0,150,105,
	0,0,0,0,0,0,128,134,0,0,
	0,0,0,0,150,105,0,0,0,0,
	0,0,136,134,8,0,0,0,0,0,
	150,105,16,0,0,0,0,132,128,134,
	128,4,0,0,0,1,150,105,0,0,
	0,0,0,136,129,134,129,8,0,0,
	0,0,150,105,0,0,0,0,64,24,
	8,6,24,72,0,0,0,0,150,105,
	128,0,0,0,132,120,119,118,119,136,
	4,0,0,8,150,105,0,0,0,0,
	8,24,0,6,16,8,8,0,0,0,
	150,105,0,0,0,132,118,120,119,118,
	119,120,134,4,0,0,150,105,0,0,
	64,8,6,24,0,6,16,8,6,72,
	0,16,150,105,0,0,128,16,6,120,
	119,118,119,8,22,128,68,148,150,105,
	153,0,128,0,6,24,0,6,16,9,
	6,128,153,149,150,105,32,0,128,0,
	150,153,153,153,153,153,6,128,145,149,
	150,153,153,153,153,153,153,153,153,153,
	153,153,153,153,153,153,153,29,0,132,
	2,5,0,26,0,0,18,6,8,11,
	18,5,153,153,9,153,153,153,153,153,
	153,153,153,153,153,144,105,153,153,150,
	105,17,150,105,153,6,96,153,22,97,
	153,150,105,153,153,150,105,153,150,105,
	153,150,105,153,150,105,153,150,105,153,
	153,6,96,153,150,105,153,150,105,153,
	150,105,153,150,105,153,153,153,105,153,
	6,96,0,150,105,0,150,105,17,150,
	105,153,153,150,105,153,153,153,153,150,
	153,153,150,153,153,153,105,153,153,150,
	105,153,150,105,153,150,105,153,150,105,
	153,150,105,153,153,150,105,153,150,105,
	153,150,105,153,150,105,153,150,105,153,
	153,150,105,0,6,96,153,22,97,153,
	6,96,0,150,105,153,153,150,153,153,
	150,105,153,153,153,153,150,153,153,150,
	105,153,153,150,105,153,150,105,153,150,
	105,153,150,105,153,150,105,153,153,150,
	105,153,150,105,153,150,105,153,150,105,
	153,150,105,153,153,22,97,153,150,105,
	0,150,105,17,150,105,0,150,105,153,
	153,150,153,153,153,105,153,150,153,153,
	153,105,153,153,105,153,153,150,105,153,
	150,105,153,150,105,153,150,105,153,150,
	105,153,153,150,105,153,150,105,153,150,
	105,153,150,105,153,150,105,153,153,6,
	96,153,6,96,9,6,96,0,150,105,
	17,150,105,153,153,150,153,153,150,105,
	153,150,153,153,150,153,153,150,105,153,
	153,150,105,153,150,105,153,150,105,153,
	150,105,153,150,105,153,153,150,105,153,
	150,105,153,150,105,153,150,105,153,150,
	105,153,153,6,96,0,150,105,17,6,
	96,153,22,97,153,6,99,153,153,153,
	153,153,153,153,153,153,153,153,153,153,
	153,153,153,153,62,0,130,2,200,0,
	187,0,1,1,13,10,11,26,26,153,
	153,153,153,153,153,153,153,153,153,153,
	153,153,153,153,153,9,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,
	150,9,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,150,9,0,0,
	0,0,0,0,0,0,0,0,0,0,
	0,0,150,9,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,150,105,
	119,119,136,120,119,119,136,119,119,119,
	136,136,7,0,150,105,0,128,1,128,
	0,128,0,8,0,0,8,0,8,0,
	150,105,0,128,1,128,0,128,0,8,
	0,0,8,0,8,0,150,105,0,128,
	1,128,0,128,17,8,0,0,8,0,
	8,0,150,105,0,128,17,129,0,16,
	136,0,0,0,8,0,8,0,150,105,
	0,128,136,136,0,129,128,1,0,0,
	8,0,8,0,150,105,0,128,1,129,
	0,8,0,8,0,0,8,0,8,0,
	150,105,0,128,1,129,0,8,0,8,
	0,0,8,0,8,0,150,105,0,128,
	1,129,0,8,0,128,129,0,8,0,
	8,0,150,105,0,128,0,128,0,24,
	0,128,8,0,8,0,8,0,150,105,
	0,128,0,128,0,128,17,129,0,0,
	24,17,8,144,150,105,0,128,0,128,
	0,0,136,24,8,0,136,136,0,48,
	150,105,128,136,136,136,136,136,136,136,
	136,136,136,136,136,136,152,105,0,0,
	0,0,0,0,0,0,0,0,0,0,
	0,0,144,105,0,73,68,68,68,68,
	68,68,68,68,68,68,68,68,148,105,
	0,89,85,85,85,85,85,85,85,85,
	85,85,85,85,149,153,153,153,153,153,
	153,153,153,153,153,153,153,153,153,153,
	153,30,0,34,0,15,0,17,0,1,
	5,4,3,1,4,4,153,153,153,153,
	153,153,153,9,9,153,153,153,153,153,
	153,150,9,0,0,0,0,0,0,0,
	0,0,0,0,0,0,144,150,105,119,
	119,119,119,119,119,119,119,119,119,119,
	119,119,150,150,105,0,0,0,0,0,
	0,0,8,0,0,0,0,0,150,150,
	105,0,0,0,0,0,0,0,8,0,
	0,0,0,0,150,150,105,0,0,0,
	0,0,0,128,136,0,0,0,0,0,
	150,150,105,96,119,119,119,119,119,135,
	136,119,119,119,119,119,150,150,105,96,
	0,0,0,0,0,136,128,8,0,0,
	0,0,150,150,105,0,119,119,6,0,
	0,136,129,8,0,0,118,119,144,150,
	105,96,119,119,7,0,128,120,119,136,
	0,0,119,119,150,150,105,96,0,0,
	0,0,128,8,1,136,0,0,0,0,
	150,150,105,112,119,119,119,119,136,119,
	119,135,120,119,119,119,151,150,105,0,
	0,0,0,0,136,0,1,128,8,0,
	0,0,144,150,105,0,0,0,0,128,
	120,118,7,118,136,0,0,0,144,150,
	105,0,0,0,0,128,8,6,1,6,
	136,0,0,0,144,150,105,0,0,0,
	0,136,112,6,119,118,128,8,0,0,
	144,150,105,0,0,0,0,8,0,6,
	1,6,0,8,0,0,48,150,153,119,
	119,119,119,8,120,118,7,118,8,120,
	119,119,151,153,153,68,68,68,68,136,
	72,68,68,68,136,72,68,68,148,153,
	153,85,85,85,85,85,85,85,85,85,
	85,85,85,85,149,153,153,85,85,85,
	85,85,85,85,85,85,85,85,85,85,
	149,153,153,85,85,85,85,85,85,85,
	85,85,85,85,85,85,149,153,62,0,
	129,2,45,0,47,0,0,13,14,2,
	4,2,8,153,153,153,153,153,153,153,
	153,153,153,153,153,153,153,153,153,9,
	0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,150,105,119,0,0,0,
	0,0,0,0,0,0,0,0,0,0,
	150,105,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,150,105,0,0,
	0,134,8,8,8,8,136,6,0,0,
	0,0,150,105,0,0,0,134,120,119,
	135,119,136,6,0,0,0,0,150,9,
	6,0,0,134,24,0,0,16,136,6,
	0,0,0,0,150,25,22,0,0,128,
	136,150,153,128,136,0,0,0,0,0,
	150,9,6,0,0,0,144,6,0,144,
	0,0,0,0,0,0,150,25,22,0,
	0,0,144,6,0,144,0,0,0,0,
	0,0,150,9,6,144,0,0,144,134,
	136,150,0,0,0,0,0,0,150,105,
	0,144,0,0,144,144,144,150,0,0,
	0,0,0,0,150,9,6,144,0,0,
	144,144,144,150,0,0,0,0,0,0,
	150,105,0,144,0,0,144,145,145,150,
	0,1,0,0,0,0,150,9,6,144,
	0,0,32,8,8,150,0,119,119,119,
	119,119,150,105,0,144,118,119,151,0,
	0,150,0,0,0,0,0,0,150,9,
	6,8,6,0,144,96,119,151,0,0,
	0,0,0,0,150,105,0,121,9,0,
	144,96,1,144,0,0,0,0,0,0,
	150,105,0,25,9,0,144,119,119,150,
	0,0,0,0,0,0,150,121,103,105,
	25,0,144,0,0,150,150,68,9,0,
	96,0,150,9,96,104,104,16,144,96,
	105,145,118,119,3,0,134,6,150,153,
	153,153,153,153,153,153,153,153,153,153,
	153,153,153,153,153,28,0,134,2,16,
	0,15,0,0,8,7,5,2,1,1,
	153,153,153,153,153,153,153,9,144,153,
	153,153,153,153,150,153,153,0,0,128,
	152,16,9,0,0,0,136,136,8,0,
	6,153,153,134,136,0,144,150,25,128,
	136,6,0,0,104,136,136,153,153,134,
	129,119,144,150,112,135,136,134,136,128,
	104,0,0,153,153,134,136,0,144,6,
	0,0,0,134,8,48,96,0,96,153,
	153,6,16,0,144,6,119,151,6,6,
	136,135,136,136,96,153,153,6,128,0,
	144,6,0,144,6,6,0,0,0,0,
	96,153,153,6,0,0,144,6,144,150,
	6,118,119,119,119,119,103,153,153,6,
	118,7,144,136,7,150,6,0,0,0,
	0,0,96,153,153,6,6,0,0,0,
	0,150,6,136,136,134,152,148,103,153,
	153,6,6,136,135,136,135,152,6,16,
	152,134,144,153,96,153,153,6,6,0,
	0,0,0,0,6,135,136,134,128,136,
	96,153,153,6,6,153,151,153,151,153,
	9,128,136,134,128,129,96,153,153,6,
	6,0,0,0,0,0,0,0,152,134,
	135,136,96,153,153,6,120,119,136,8,
	136,136,120,9,0,6,128,136,96,153,
	153,6,0,0,0,0,0,0,0,9,
	1,6,8,136,96,153,153,150,153,68,
	68,68,68,68,68,9,9,6,136,16,
	96,153,153,150,153,153,153,153,153,153,
	153,9,9,6,136,136,96,153,153,6,
	0,0,0,0,0,0,0,0,8,6,
	0,0,96,153,153,6,136,136,136,104,
	136,136,136,136,136,118,119,119,103,153,
	153,6,0,0,0,9,0,0,0,0,
	0,6,0,0,96,153,153,136,136,136,
	136,136,136,136,136,136,136,136,68,68,
	132,153,30,0,76,2,179,0,181,0,
	0,3,7,9,19,23,14,153,9,0,
	0,0,0,0,0,0,0,0,0,0,
	0,0,150,153,9,0,0,0,0,0,
	128,136,119,119,119,119,119,6,150,153,
	9,0,0,0,0,0,128,129,0,0,
	0,0,0,6,150,153,9,0,0,0,
	0,0,128,129,0,0,0,0,0,6,
	150,153,9,0,0,0,0,0,128,129,
	0,0,0,0,0,6,150,153,9,0,
	0,0,0,0,128,129,0,0,0,0,
	0,6,150,153,9,0,0,0,0,0,
	128,129,0,0,0,0,0,6,150,153,
	9,0,0,0,136,136,136,135,136,136,
	8,0,0,6,150,153,9,0,0,0,
	24,17,17,17,17,17,8,0,0,6,
	150,153,9,0,0,0,136,136,136,135,
	136,136,120,119,0,6,150,153,9,0,
	0,0,0,0,128,129,0,0,0,0,
	0,6,150,153,9,0,0,0,0,0,
	128,129,0,0,0,118,119,7,150,153,
	9,0,0,0,0,0,128,129,0,0,
	0,6,0,0,150,153,9,0,0,0,
	0,0,128,129,0,0,0,6,151,9,
	150,153,9,0,0,0,0,0,128,129,
	0,0,0,6,128,3,150,153,9,0,
	0,0,0,0,128,129,0,0,0,6,
	153,121,150,153,9,0,0,0,0,0,
	128,129,0,0,0,6,0,0,153,153,
	9,0,0,0,0,0,128,129,0,0,
	0,6,0,0,153,153,9,0,0,0,
	0,0,128,129,0,0,0,6,0,0,
	153,153,1,0,0,0,0,0,128,129,
	0,0,0,6,0,0,153,153,121,119,
	119,119,6,0,128,129,0,0,118,7,
	0,0,153,153,73,68,68,68,153,153,
	153,153,153,153,73,68,68,68,153,29,
	0,130,2,219,0,11,1,1,2,17,
	15,21,8,1,153,136,136,136,136,136,
	136,136,136,136,136,136,136,136,105,153,
	153,136,136,136,136,136,134,136,136,136,
	134,136,136,104,105,153,153,0,144,119,
	135,119,150,0,128,119,150,119,135,103,
	105,153,153,0,144,0,144,0,150,0,
	144,1,150,0,144,96,105,153,153,0,
	144,17,129,1,134,17,145,8,134,17,
	145,97,105,153,153,0,153,153,153,119,
	151,153,153,119,151,153,153,105,105,153,
	153,0,2,0,0,0,0,0,0,0,
	0,0,0,96,105,153,153,144,153,153,
	153,119,151,153,153,7,151,153,153,105,
	105,153,153,16,33,0,0,0,32,0,
	0,0,32,0,0,96,99,153,73,148,
	153,105,153,153,105,153,153,121,153,153,
	153,153,153,153,89,149,144,96,144,0,
	96,0,144,68,148,0,145,0,144,153,
	153,153,144,96,144,0,153,0,144,153,
	153,0,150,0,144,153,153,0,32,96,
	32,0,137,0,128,16,0,0,150,16,
	144,153,153,105,153,153,153,153,136,136,
	136,136,136,136,150,153,150,153,153,96,
	128,0,144,0,144,119,151,119,151,153,
	153,0,150,153,153,103,135,96,144,0,
	144,68,148,68,148,25,136,0,150,153,
	153,96,128,96,145,0,145,85,149,85,
	149,134,134,144,150,153,153,105,153,105,
	153,150,153,153,153,153,153,150,150,153,
	150,153,153,96,128,96,144,6,0,0,
	145,0,144,150,150,0,150,153,153,103,
	135,96,144,112,119,119,144,0,144,150,
	150,0,150,153,153,96,32,96,32,128,
	136,136,136,0,128,150,38,0,150,153,
	153,153,153,153,153,153,153,153,153,153,
	153,153,153,153,153,153,29,0,69,2,
	18,0,14,0,0,15,16,6,5,3,
	4,153,0,0,0,0,0,0,0,0,
	0,0,0,0,0,96,153,153,0,0,
	0,0,0,0,0,8,0,0,0,0,
	0,96,153,153,0,0,0,0,0,0,
	0,0,0,0,0,0,0,96,153,153,
	96,119,119,119,119,119,135,135,0,0,
	0,0,0,96,153,153,96,0,0,0,
	0,0,16,16,0,0,0,0,0,96,
	153,153,96,0,0,0,0,0,136,135,
	8,0,0,0,0,96,153,153,96,0,
	0,0,0,0,16,16,0,0,0,0,
	0,96,153,153,96,0,0,0,0,128,
	128,128,128,0,0,0,0,96,153,153,
	96,0,0,0,0,0,16,16,0,0,
	0,0,0,96,153,153,96,0,0,0,
	0,136,128,128,128,8,0,0,0,96,
	153,153,96,0,0,0,0,0,16,16,
	0,0,0,0,0,96,153,153,96,0,
	0,0,128,8,136,128,8,136,0,0,
	0,96,153,153,96,0,0,0,0,0,
	16,16,0,0,0,0,0,96,153,153,
	96,0,0,0,136,128,136,128,136,128,
	8,0,0,96,153,153,96,0,0,0,
	0,0,16,16,0,0,0,0,0,96,
	153,153,96,0,0,128,8,136,136,128,
	136,8,136,0,0,96,153,153,96,0,
	0,0,0,0,16,16,0,0,0,0,
	0,96,153,153,96,0,0,136,128,136,
	136,128,136,136,128,8,0,96,153,153,
	96,0,0,0,0,0,16,16,0,0,
	0,0,0,96,153,153,96,0,128,136,
	136,136,136,128,136,136,136,136,0,105,
	153,153,96,0,0,0,0,0,0,0,
	0,0,0,0,0,99,153,153,153,153,
	73,68,68,68,68,68,68,68,68,68,
	153,153,153,29,0,132,2,178,0,79,
	2,1,6,12,16,15,5,16,153,0,
	0,0,0,0,0,0,0,0,0,0,
	0,0,105,153,153,0,0,0,0,0,
	0,0,0,0,6,16,22,0,105,153,
	153,0,96,136,136,136,152,153,153,136,
	6,96,102,0,105,153,153,16,0,0,
	1,1,145,0,144,0,6,102,96,6,
	105,153,153,96,0,0,120,136,152,150,
	150,9,6,6,0,6,105,153,153,96,
	0,0,0,0,0,150,22,0,150,9,
	0,153,105,153,153,96,119,119,119,119,
	7,150,153,121,0,0,0,96,105,153,
	153,96,0,0,0,0,0,6,0,0,
	0,119,119,103,105,153,153,102,128,136,
	136,136,136,8,16,129,151,144,144,96,
	105,153,153,6,0,153,153,153,153,121,
	151,153,144,144,148,96,105,153,153,6,
	0,153,153,153,153,73,148,68,148,144,
	153,96,105,153,153,6,0,0,0,0,
	144,153,85,85,153,0,0,96,105,153,
	153,6,144,121,0,0,0,153,153,153,
	8,8,16,96,105,153,153,150,68,68,
	121,0,0,0,136,8,144,102,120,96,
	105,153,153,150,85,85,9,17,17,150,
	150,134,144,134,25,96,105,153,153,150,
	153,89,9,119,119,119,6,6,0,0,
	112,96,105,153,153,6,0,89,9,144,
	0,0,120,120,120,120,8,96,105,153,
	153,6,0,89,9,144,153,153,134,134,
	134,134,134,96,105,153,153,102,0,89,
	9,48,144,1,104,104,104,104,104,96,
	105,153,153,96,0,89,73,153,144,153,
	153,153,153,153,153,153,105,153,153,96,
	0,89,89,9,0,0,0,0,0,0,
	0,0,96,153,153,153,153,153,153,153,
	153,153,153,153,153,153,153,153,153,153,
	29,0,3,2,18,0,14,0,1,9,
	10,9,10,10,11,153,0,0,0,0,
	0,0,0,0,0,0,0,0,0,96,
	153,153,0,0,0,0,0,0,0,8,
	0,0,0,0,0,96,153,153,0,0,
	0,0,0,0,0,0,0,0,0,0,
	0,96,153,153,0,96,119,119,119,119,
	135,136,0,0,0,0,0,96,153,153,
	0,96,0,0,0,0,0,1,0,0,
	0,0,0,96,153,153,0,96,0,0,
	0,0,120,120,8,0,0,0,0,96,
	153,153,0,96,0,0,0,0,0,0,
	0,0,0,0,0,96,153,153,0,96,
	0,0,0,128,128,136,128,0,0,0,
	0,96,153,153,0,96,0,0,0,0,
	1,0,1,0,0,0,0,96,153,153,
	0,96,0,0,0,8,136,128,8,8,
	0,0,0,96,153,153,0,96,0,0,
	0,16,0,0,16,0,0,0,0,96,
	153,153,0,96,0,0,128,112,9,0,
	137,135,0,0,0,96,153,153,0,96,
	0,0,0,0,73,68,9,0,0,0,
	0,96,153,153,0,96,0,0,8,6,
	153,153,9,6,8,0,0,96,153,153,
	0,96,0,0,16,32,0,0,0,16,
	0,0,0,96,153,153,0,96,0,128,
	128,119,136,128,136,136,128,0,0,96,
	153,153,0,96,0,0,1,0,16,0,
	0,0,1,0,0,96,153,153,0,96,
	0,120,136,128,136,7,136,128,120,8,
	0,96,153,153,0,6,0,2,0,0,
	0,16,0,0,0,0,0,96,153,153,
	0,6,128,136,128,8,136,128,136,8,
	136,128,0,105,153,153,0,6,0,0,
	0,0,0,0,0,0,0,0,0,99,
	153,153,153,153,153,153,153,153,153,153,
	153,153,153,153,153,153,153,7,0,229,
	1,8,0,26,0,0,25,28,20,8,
	25,28,153,0,0,96,16,0,0,0,
	0,0,0,0,144,144,153,153,153,0,
	16,96,113,119,119,119,119,119,118,105,
	48,1,0,153,153,118,119,112,119,119,
	119,119,119,119,7,96,136,134,6,153,
	153,150,0,0,0,119,119,119,119,119,
	103,0,0,1,6,153,153,150,118,119,
	119,119,119,119,119,7,96,0,134,134,
	0,153,153,150,6,145,0,0,1,16,
	0,16,96,0,6,1,0,153,153,150,
	112,151,118,119,7,96,119,103,96,0,
	128,134,6,153,153,150,6,145,6,0,
	0,1,1,0,96,0,0,1,6,153,
	153,150,118,151,6,144,118,103,7,0,
	96,0,134,134,0,153,153,150,0,0,
	119,150,6,1,96,119,119,0,6,1,
	0,153,153,150,0,16,0,150,6,8,
	96,0,0,0,128,134,6,153,153,150,
	16,153,0,150,6,1,96,96,23,0,
	0,1,6,153,153,150,96,0,0,150,
	6,8,96,96,128,0,134,134,0,153,
	153,150,148,150,119,119,6,0,96,96,
	16,0,6,1,0,153,153,150,153,150,
	121,153,9,118,136,144,135,119,136,134,
	0,153,153,150,0,150,0,0,96,121,
	119,0,16,0,0,0,0,153,153,150,
	150,153,32,0,96,153,153,151,135,119,
	134,128,6,153,153,150,150,0,112,119,
	55,33,1,0,16,0,32,0,6,153,
	153,150,150,112,151,119,151,150,153,151,
	135,0,96,135,8,153,153,150,6,144,
	1,0,0,6,0,0,0,0,96,0,
	0,153,153,6,119,151,119,119,119,119,
	119,119,119,119,119,119,119,153,153,153,
	153,153,68,68,68,68,68,68,68,68,
	68,68,68,153,110,0,144,2,173,0,
	179,0,1,8,27,28,11,36,31,153,
	153,153,153,153,153,153,153,153,153,153,
	153,153,153,153,153,153,9,0,0,0,
	0,0,96,102,0,0,0,0,0,0,
	153,153,9,0,0,0,0,0,6,0,
	6,0,0,0,0,0,153,153,105,136,
	136,6,0,0,6,0,6,0,0,134,
	136,104,153,153,105,25,17,9,0,0,
	0,48,6,0,0,25,17,105,153,153,
	105,25,17,9,0,0,0,102,0,0,
	0,25,17,105,153,153,105,25,17,8,
	0,0,0,6,0,0,0,24,17,105,
	153,153,105,136,136,120,119,119,0,6,
	112,119,119,136,136,104,153,153,105,121,
	119,9,8,0,0,6,0,0,8,121,
	119,105,153,153,105,25,17,9,105,0,
	0,6,0,96,9,25,17,105,153,153,
	105,25,17,9,105,0,0,6,0,96,
	9,25,17,105,153,153,105,25,17,9,
	105,0,0,6,0,96,9,25,17,105,
	153,153,105,0,0,0,105,153,0,6,
	144,105,9,0,0,96,153,153,105,96,
	153,153,153,153,121,118,153,153,153,153,
	105,96,153,153,121,103,73,68,68,68,
	68,73,68,68,68,68,105,119,153,153,
	9,96,89,85,85,85,85,85,85,85,
	85,85,105,0,153,153,9,96,89,85,
	85,85,85,85,85,85,85,85,105,0,
	153,153,9,96,89,85,85,85,85,85,
	85,85,85,85,105,0,153,153,9,96,
	89,85,85,85,85,85,85,85,85,85,
	105,0,153,153,9,96,153,153,153,153,
	153,153,153,153,153,153,105,0,153,153,
	9,96,0,0,0,0,0,0,0,0,
	0,0,96,0,153,153,73,148,153,153,
	153,153,153,153,153,153,153,153,153,68,
	153,1,0,156,2,208,0,132,0,1,
	14,15,18,19,10,14,9,9,0,1,
	0,0,0,0,1,0,0,0,1,0,
	0,153,105,9,0,119,119,119,119,119,
	119,119,119,119,119,119,103,153,105,9,
	0,0,0,0,0,0,0,0,0,0,
	0,0,96,153,105,153,0,0,0,0,
	0,0,119,119,119,119,119,119,103,153,
	105,3,128,0,0,0,0,0,0,0,
	0,0,0,0,96,153,153,136,136,135,
	136,136,136,136,136,136,136,136,8,0,
	96,153,153,0,0,128,0,0,0,0,
	0,0,0,0,8,0,96,153,153,0,
	0,128,16,0,0,16,0,0,0,1,
	8,0,96,153,153,0,0,128,128,136,
	136,105,134,136,136,8,8,0,96,153,
	153,0,0,128,128,0,0,137,134,0,
	0,8,8,0,96,153,153,0,16,128,
	129,0,0,25,134,0,0,24,8,112,
	103,153,153,0,0,135,136,103,0,105,
	136,0,119,136,120,1,96,153,153,0,
	16,0,0,96,0,105,134,16,0,0,
	0,8,96,153,153,0,135,0,0,0,
	103,9,134,0,0,1,0,0,96,153,
	153,0,16,0,0,0,96,25,134,0,
	0,112,6,1,96,153,153,0,0,0,
	0,0,96,9,134,0,1,119,6,8,
	96,153,153,0,16,0,0,0,96,105,
	129,0,103,7,6,0,96,153,153,118,
	119,119,1,0,96,9,134,0,0,118,
	0,1,96,153,153,6,96,0,121,103,
	96,105,128,0,0,112,6,152,96,153,
	153,6,96,0,96,0,103,104,129,6,
	0,0,6,0,96,153,153,119,7,119,
	119,7,96,9,151,6,0,0,112,54,
	96,153,153,68,68,68,68,68,132,72,
	132,136,68,68,68,153,153,153,65,0,
	136,0,68,0,76,2,0,46,41,20,
	14,44,56,9,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,144,9,
	0,0,0,0,96,121,103,0,0,0,
	0,0,0,0,150,9,48,0,8,96,
	9,0,0,121,119,119,119,135,119,119,
	150,9,119,118,119,7,0,0,0,0,
	0,0,0,0,0,119,150,9,0,1,
	0,128,136,6,128,152,105,0,0,16,
	16,16,150,9,16,16,0,9,129,6,
	128,16,104,0,0,0,128,0,150,9,
	0,6,16,9,134,6,128,1,104,0,
	0,16,0,16,150,25,96,96,0,9,
	150,22,128,16,105,0,16,128,0,0,
	150,121,6,0,6,9,150,112,144,1,
	104,0,1,9,0,16,150,9,150,1,
	0,9,150,68,148,16,105,16,144,16,
	16,0,150,25,6,9,16,9,150,153,
	105,1,104,0,9,0,129,16,150,121,
	6,0,1,8,6,0,96,119,105,96,
	0,128,8,0,150,9,6,16,0,152,
	153,153,150,1,104,96,0,0,16,16,
	150,25,6,0,105,0,0,0,134,16,
	105,96,0,0,128,0,150,121,6,144,
	97,0,0,0,150,1,104,96,0,0,
	0,118,144,9,96,16,105,0,0,0,
	134,16,105,96,0,0,0,6,144,25,
	96,151,97,0,0,0,150,1,104,0,
	23,0,118,16,144,121,7,0,105,16,
	0,0,134,16,105,0,0,0,6,0,
	144,9,0,0,0,119,0,0,150,1,
	104,0,0,118,16,16,144,25,0,1,
	16,0,1,0,134,16,105,0,0,54,
	55,55,145,121,119,118,119,119,103,0,
	150,1,96,0,98,49,55,48,152,73,
	68,73,68,68,148,153,153,153,153,153,
	153,153,153,153,153};



#define Rsrc_TileByN(n)	TileByN(n)

/*============================================================================*/

