// FUN_00825380 @ 00825380 body=[[00825380, 0082545d]]


undefined4 FUN_00825380(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EAX;
  int iVar5;
  int *piVar6;
  undefined1 local_10 [4];
  float local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar5 = FUN_0050e450();
  if (iVar5 != 0) {
    iVar5 = FUN_0050e450();
    uVar4 = DAT_0125870c;
    if (*(int *)(iVar5 + 0x30) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(**(int **)(iVar5 + 0x28) + 0x58);
    }
    puVar2 = *(undefined4 **)(*(int *)(iVar1 + *(int *)(in_EAX + 0x38) * 4) + 0x9e8);
    local_c = 1e+09;
    while (puVar2 != (undefined4 *)0x0) {
      uVar3 = *puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      piVar6 = (int *)FUN_004a0e80(uVar4,local_10);
      if ((float)*piVar6 / 1000.0 < local_c) {
        local_c = (float)*piVar6 / 1000.0;
        local_8 = uVar3;
      }
    }
    return local_8;
  }
  return 0;
}

