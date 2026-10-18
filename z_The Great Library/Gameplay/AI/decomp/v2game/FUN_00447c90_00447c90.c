// FUN_00447c90 @ 00447c90 body=[[00447c90, 00447d6c]]


void FUN_00447c90(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *unaff_ESI;
  uint unaff_EDI;
  
  uVar3 = unaff_ESI[4];
  if (uVar3 < unaff_EDI) {
    uVar3 = FUN_00aad3fa("invalid string position");
  }
  if (-uVar3 - 1 <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("string too long");
  }
  if (param_1 != 0) {
    uVar1 = uVar3 + param_1;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("string too long");
    }
    if ((uint)unaff_ESI[5] < uVar1) {
      FUN_00409640(uVar1,uVar3);
      if (uVar1 == 0) {
        return;
      }
    }
    else if (uVar1 == 0) {
      unaff_ESI[4] = 0;
      if ((uint)unaff_ESI[5] < 0x10) {
        *(undefined1 *)unaff_ESI = 0;
        return;
      }
      *(undefined1 *)*unaff_ESI = 0;
      return;
    }
    piVar4 = unaff_ESI;
    piVar2 = unaff_ESI;
    if (0xf < (uint)unaff_ESI[5]) {
      piVar4 = (int *)*unaff_ESI;
      piVar2 = (int *)*unaff_ESI;
    }
    FID_conflict__memcpy
              ((void *)((int)piVar4 + param_1 + unaff_EDI),(undefined1 *)((int)piVar2 + unaff_EDI),
               unaff_ESI[4] - unaff_EDI);
    FUN_00448910(unaff_EDI,param_1,param_2);
    unaff_ESI[4] = uVar1;
    if (0xf < (uint)unaff_ESI[5]) {
      *(undefined1 *)(*unaff_ESI + uVar1) = 0;
      return;
    }
    *(undefined1 *)((int)unaff_ESI + uVar1) = 0;
  }
  return;
}

