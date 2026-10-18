// FUN_00901bd0 @ 00901bd0 body=[[00901bd0, 00901c74]]


undefined4 FUN_00901bd0(int param_1)

{
  char cVar1;
  uint *puVar2;
  int in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0x18) == 0) {
        puVar2 = (uint *)0x0;
        if (*(int *)(param_1 + 0xc) == 0) goto LAB_00901c66;
        puVar2 = (uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                         0x12e8);
      }
      else {
        puVar2 = (uint *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                           *(int *)(param_1 + 0x18) * 4) + 0x188) + 200);
      }
    }
    else {
      puVar2 = (uint *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) +
                       0x1a8);
    }
  }
  else {
    puVar2 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 0x188) + 200);
  }
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
  }
LAB_00901c66:
  return CONCAT31((int3)((uint)puVar2 >> 8),*(uint *)(in_ECX + 0x1c) <= uVar3);
}

