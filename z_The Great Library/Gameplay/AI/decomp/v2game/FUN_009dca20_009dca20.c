// FUN_009dca20 @ 009dca20 body=[[009dca20, 009dcab2]]


void FUN_009dca20(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int *unaff_EDI;
  
  uVar4 = 0xffffffff;
  if (param_1[4] != 0xffffffff) {
    uVar4 = param_1[4];
  }
  if (-unaff_EDI[4] - 1U <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("string too long");
  }
  if (uVar4 != 0) {
    iVar1 = unaff_EDI[4] + uVar4;
    cVar2 = FUN_0098a540();
    if (cVar2 != '\0') {
      if (7 < (uint)param_1[5]) {
        param_1 = (undefined4 *)*param_1;
      }
      piVar3 = unaff_EDI;
      if (7 < (uint)unaff_EDI[5]) {
        piVar3 = (int *)*unaff_EDI;
      }
      FID_conflict__memcpy((void *)((int)piVar3 + unaff_EDI[4] * 2),param_1,uVar4 * 2);
      unaff_EDI[4] = iVar1;
      if (7 < (uint)unaff_EDI[5]) {
        *(undefined2 *)(*unaff_EDI + iVar1 * 2) = 0;
        return;
      }
      *(undefined2 *)((int)unaff_EDI + iVar1 * 2) = 0;
    }
  }
  return;
}

