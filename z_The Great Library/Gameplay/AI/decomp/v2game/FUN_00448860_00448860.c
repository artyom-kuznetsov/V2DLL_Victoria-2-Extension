// FUN_00448860 @ 00448860 body=[[00448860, 00448907]]


void FUN_00448860(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = in_ECX[4];
  if (-iVar2 - 1U <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("string too long");
  }
  if (param_1 != 0) {
    uVar1 = iVar2 + param_1;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("string too long");
    }
    if ((uint)in_ECX[5] < uVar1) {
      FUN_00409640(uVar1,iVar2);
      if (uVar1 == 0) {
        return;
      }
    }
    else if (uVar1 == 0) {
      in_ECX[4] = 0;
      if (0xf < (uint)in_ECX[5]) {
        *(undefined1 *)*in_ECX = 0;
        return;
      }
      *(undefined1 *)in_ECX = 0;
      return;
    }
    FUN_00448910(in_ECX[4],param_1,param_2);
    in_ECX[4] = uVar1;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + uVar1) = 0;
      return;
    }
    *(undefined1 *)((int)in_ECX + uVar1) = 0;
  }
  return;
}

