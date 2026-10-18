// FUN_00448740 @ 00448740 body=[[00448740, 0044885a]]


void FUN_00448740(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  if (param_1 != (int *)0x0) {
    uVar1 = in_ECX[5];
    piVar3 = in_ECX;
    if (0xf < uVar1) {
      piVar3 = (int *)*in_ECX;
    }
    if (piVar3 <= param_1) {
      piVar3 = in_ECX;
      if (0xf < uVar1) {
        piVar3 = (int *)*in_ECX;
      }
      if (param_1 < (int *)(in_ECX[4] + (int)piVar3)) {
        if (0xf < uVar1) {
          FUN_00448aa0(in_ECX,(int)param_1 - *in_ECX,param_2);
          return;
        }
        FUN_00448aa0(in_ECX,(int)param_1 - (int)in_ECX,param_2);
        return;
      }
    }
  }
  iVar2 = in_ECX[4];
  if (-iVar2 - 1U <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("string too long");
  }
  if (param_2 != 0) {
    uVar1 = iVar2 + param_2;
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
    piVar3 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      piVar3 = (int *)*in_ECX;
    }
    FID_conflict__memcpy((void *)(in_ECX[4] + (int)piVar3),param_1,param_2);
    in_ECX[4] = uVar1;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + uVar1) = 0;
      return;
    }
    *(undefined1 *)((int)in_ECX + uVar1) = 0;
  }
  return;
}

