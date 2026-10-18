// FUN_00737a10 @ 00737a10 body=[[00737a10, 00737aee]]


void FUN_00737a10(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined **local_18 [3];
  char *local_c;
  undefined4 local_8;
  
  piVar2 = (int *)(**(code **)(*param_2 + 0x2c))();
  if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*piVar2;
    do {
      puVar1 = (undefined4 *)puVar3[2];
      local_8 = *puVar3;
      if (((*(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x8c) & 3U) == 0) &&
         (*(uint *)(param_1 + 0x84) <= *(int *)(param_1 + 0x8c) + 4U >> 2)) {
        FUN_00705300(param_1 + 0x7c);
      }
      uVar5 = *(int *)(param_1 + 0x88) + *(int *)(param_1 + 0x8c);
      uVar6 = uVar5 >> 2;
      if (*(uint *)(param_1 + 0x84) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(param_1 + 0x84);
      }
      if (*(int *)(*(int *)(param_1 + 0x80) + uVar6 * 4) == 0) {
        iVar4 = FUN_00aae9af(0x10);
        if (iVar4 == 0) {
          local_c = (char *)0x0;
          std::exception::exception((exception *)local_18,&local_c);
          local_18[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_18,&DAT_00e6fb20);
        }
        *(int *)(*(int *)(param_1 + 0x80) + uVar6 * 4) = iVar4;
      }
      puVar3 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x80) + uVar6 * 4) + (uVar5 & 3) * 4);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = local_8;
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      puVar3 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  (**(code **)(*param_2 + 0x24))();
  return;
}

