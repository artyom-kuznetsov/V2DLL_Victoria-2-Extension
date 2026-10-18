// FUN_00804320 @ 00804320 body=[[00804320, 008043e8]]


void FUN_00804320(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_8;
  
  iVar6 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  local_8 = 0;
  if (0 < iVar6) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x1c) + local_8 * 4) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + local_8 * 4);
        iVar2 = *(int *)(param_1 + 0x157c);
        if ((*(int *)(iVar1 + 0x9c) - *(int *)(iVar1 + 0x98) & 0xfffffff8U) != 0) {
          (**(code **)(**(int **)(*(int *)(iVar1 + 0x98) + 4) + 0x38))();
          FUN_009962f0(iVar2 + 0x14d4);
          puVar5 = *(undefined4 **)(iVar1 + 0x98);
          puVar3 = *(undefined4 **)(iVar1 + 0x9c);
          puVar4 = puVar5;
          while (puVar4 = puVar4 + 2, puVar4 != puVar3) {
            *puVar5 = *puVar4;
            puVar5[1] = puVar4[1];
            puVar5 = puVar5 + 2;
          }
          *(int *)(iVar1 + 0x9c) = *(int *)(iVar1 + 0x9c) + -8;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar6);
  }
  return;
}

