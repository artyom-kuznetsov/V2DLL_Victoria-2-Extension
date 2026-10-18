// FUN_009fa790 @ 009fa790 body=[[009fa790, 009fa7f5] [009fa7f9, 009fa831] [009fa835, 009fa879] [009fa87d, 009fa8c5] [009fa8c9, 009fa917] [009fa926, 009fa954] [009fa958, 009fa962]]


undefined4 * FUN_009fa790(undefined4 *param_1)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_28;
  uint local_14;
  
  uVar1 = FUN_005484e0(in_EAX,&DAT_00dfe280,1);
  uVar2 = FUN_005484e0(in_EAX,&DAT_00dfe280,1);
  puVar3 = (undefined4 *)FUN_009895f0(uVar1);
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  uVar1 = FUN_00aaf0c5(puVar3);
  *param_1 = uVar1;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28);
  }
  puVar3 = (undefined4 *)FUN_009895f0(uVar2);
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  uVar1 = FUN_00aaf0c5(puVar3);
  param_1[1] = uVar1;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28);
  }
  uVar1 = FUN_005484e0(in_EAX,&DAT_00ded950,1);
  puVar3 = (undefined4 *)FUN_009895f0(uVar1);
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  uVar1 = FUN_00aaf0c5(puVar3);
  param_1[2] = uVar1;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28);
  }
  uVar1 = FUN_005484e0(in_EAX,&DAT_00e004e4,1);
  puVar3 = (undefined4 *)FUN_009895f0(uVar1);
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  uVar1 = FUN_00aaf0c5(puVar3);
  param_1[3] = uVar1;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28);
  }
  iVar4 = FUN_005484e0(in_EAX,&DAT_00e004e4,1);
  if (iVar4 == -1) {
    puVar3 = (undefined4 *)FUN_009895f0(*(undefined4 *)(in_EAX + 0x10));
    if (0xf < (uint)puVar3[5]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    uVar1 = FUN_00aaf0c5(puVar3);
    param_1[4] = uVar1;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28);
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_009895f0(iVar4);
    if (0xf < (uint)puVar3[5]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    uVar1 = FUN_00aaf0c5(puVar3);
    param_1[4] = uVar1;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28);
    }
  }
  return param_1;
}

