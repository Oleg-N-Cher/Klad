MODULE Klad; (*$MAIN*)
IMPORT Rsrc, t := GrTiles, SYSTEM, b := Basic;

TYPE BYTE = SYSTEM.BYTE;

VAR idx: INT16;

PROCEDURE DrawField;
  VAR b, x, y: BYTE;
BEGIN
  INC(idx, 15);
  FOR y := 0 TO 21 DO
    FOR x := 0 TO 30 BY 2 DO
      b := Rsrc.Levels[idx];
      t.DrawTile8x8(x, y,
        SYSTEM.VAL(t.AnyTile, SYSTEM.ADR(Rsrc.Tiles[b MOD 10H])));
      t.DrawTile8x8(x + 1, y,
        SYSTEM.VAL(t.AnyTile, SYSTEM.ADR(Rsrc.Tiles[b DIV 10H])));
      INC(idx);
    END;
  END;
END DrawField;

BEGIN
  b.Init;
  idx := 0; LOOP DrawField; b.PAUSE(0) END
END Klad.
