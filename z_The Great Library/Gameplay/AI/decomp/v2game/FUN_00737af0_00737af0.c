// FUN_00737af0 @ 00737af0 body=[[00737af0, 00737b19] [00737b20, 00737bd7]]


void FUN_00737af0(int param_1,int *param_2)

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
      if (((*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0xa4) & 3U) == 0) &&
         (*(uint *)(param_1 + 0x9c) <= *(int *)(param_1 + 0xa4) + 4U >> 2)) {
        FUN_00705300(param_1 + 0x94);
      }
      uVar5 = *(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0xa4);
      uVar6 = uVar5 >> 2;
      if (*(uint *)(param_1 + 0x9c) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(param_1 + 0x9c);
      }
      if (*(int *)(*(int *)(param_1 + 0x98) + uVar6 * 4) == 0) {
        iVar4 = FUN_00aae9af(0x10);
        if (iVar4 == 0) {
          local_c = (char *)0x0;
          std::exception::exception((exception *)local_18,&local_c);
          local_18[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_18,&DAT_00e6fb20);
        }
        *(int *)(*(int *)(param_1 + 0x98) + uVar6 * 4) = iVar4;
      }
      puVar3 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x98) + uVar6 * 4) + (uVar5 & 3) * 4);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = local_8;
      }
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
      puVar3 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  (**(code **)(*param_2 + 0x24))();
  return;
}

