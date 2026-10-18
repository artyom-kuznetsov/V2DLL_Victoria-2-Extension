// FUN_00448aa0 @ 00448aa0 body=[[00448aa0, 00448b8a]]


void FUN_00448aa0(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *in_ECX;
  uint extraout_ECX;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  uVar2 = param_1[4];
  uVar4 = param_2;
  puVar5 = param_1;
  if (uVar2 < param_2) {
    uVar6 = FUN_00aad3fa("invalid string position");
    puVar5 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    uVar4 = extraout_ECX;
  }
  if (uVar2 - uVar4 < param_3) {
    param_3 = uVar2 - uVar4;
  }
  iVar1 = in_ECX[4];
  if (-iVar1 - 1U <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("string too long");
  }
  if (param_3 != 0) {
    uVar2 = iVar1 + param_3;
    if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("string too long");
    }
    if ((uint)in_ECX[5] < uVar2) {
      FUN_00409640(uVar2,iVar1);
      puVar5 = param_1;
      if (uVar2 == 0) {
        return;
      }
    }
    else if (uVar2 == 0) {
      in_ECX[4] = 0;
      if (0xf < (uint)in_ECX[5]) {
        *(undefined1 *)*in_ECX = 0;
        return;
      }
      *(undefined1 *)in_ECX = 0;
      return;
    }
    if (0xf < (uint)puVar5[5]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    piVar3 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      piVar3 = (int *)*in_ECX;
    }
    FID_conflict__memcpy((void *)(in_ECX[4] + (int)piVar3),(void *)((int)puVar5 + param_2),param_3);
    in_ECX[4] = uVar2;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + uVar2) = 0;
      return;
    }
    *(undefined1 *)((int)in_ECX + uVar2) = 0;
  }
  return;
}

