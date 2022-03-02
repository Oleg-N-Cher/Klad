/* Ofront+ 1.0 -mxi3f -21 */
#include "SYSTEM.oh"
#include "Rsrc.oh"
#include "GrTiles.oh"
#include "Basic.oh"


static SHORTINT Klad_idx;


static void Klad_DrawField (void);


/*============================================================================*/

static void Klad_DrawField (void)
{
	CHAR b, x, y;
	Klad_idx += 15;
	y = 0;
	while (y <= 21) {
		x = 0;
		while (x <= 30) {
			b = Rsrc_Levels[Klad_idx];
			GrTiles_DrawTile8x8(x, y, (GrTiles_AnyTile)((SYSTEM_ADRINT)Rsrc_Tiles[__MASK(b, -16)]));
			GrTiles_DrawTile8x8(x + 1, y, (GrTiles_AnyTile)((SYSTEM_ADRINT)Rsrc_Tiles[__ASHR(b, 4, SHORTINT)]));
			Klad_idx += 1;
			x += 2;
		}
		y += 1;
	}
}


int main (int argc, char **argv)
{
	__INIT(argc, argv);
	__IMPORT(Rsrc__init);
	__IMPORT(Basic__init);
	__IMPORT(GrTiles__init);
	__REGMAIN("Klad", 0);
/* BEGIN */
	Basic_Init();
	Klad_idx = 0;
	for (;;) {
		Klad_DrawField();
		Basic_PAUSE(0);
	}
	__FINI;
}
