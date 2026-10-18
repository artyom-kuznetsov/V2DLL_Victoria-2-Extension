// FUN_0062fc70 @ 0062fc70 body=[[0062fc70, 0062fc9b] [0062fca0, 0062fd6c]]


void FUN_0062fc70(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined **local_18 [3];
  char *local_c;
  int *local_8;
  
  piVar2 = (int *)(**(code **)(param_2[0x1d] + 0x2c))();
  if ((int *)*piVar2 != (int *)0x0) {
    local_8 = (int *)*piVar2;
    do {
      piVar2 = (int *)local_8[2];
      iVar1 = *local_8;
      local_8 = piVar2;
      if (((*(int *)(param_1 + 0xe8) + *(int *)(param_1 + 0xec) & 3U) == 0) &&
         (*(uint *)(param_1 + 0xe4) <= *(int *)(param_1 + 0xec) + 4U >> 2)) {
        FUN_00705300(param_1 + 0xdc);
      }
      uVar4 = *(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xe8);
      uVar5 = uVar4 >> 2;
      if (*(uint *)(param_1 + 0xe4) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(param_1 + 0xe4);
      }
      if (*(int *)(*(int *)(param_1 + 0xe0) + uVar5 * 4) == 0) {
        iVar3 = FUN_00aae9af(0x10);
        if (iVar3 == 0) {
          local_c = (char *)0x0;
          std::exception::exception((exception *)local_18,&local_c);
          local_18[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_18,&DAT_00e6fb20);
        }
        *(int *)(*(int *)(param_1 + 0xe0) + uVar5 * 4) = iVar3;
      }
      piVar2 = (int *)(*(int *)(*(int *)(param_1 + 0xe0) + uVar5 * 4) + (uVar4 & 3) * 4);
      if (piVar2 != (int *)0x0) {
        *piVar2 = iVar1;
      }
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
      (**(code **)(*(int *)(iVar1 + 0x1c) + 0x30))();
    } while (local_8 != (int *)0x0);
  }
  (**(code **)(*param_2 + 0xc4))();
  return;
}

