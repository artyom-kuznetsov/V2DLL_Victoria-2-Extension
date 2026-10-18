// FUN_0069c070 @ 0069c070 body=[[0069c070, 0069c0a9] [0069c0b0, 0069c174] [0069c178, 0069c1ce] [0069c1d2, 0069c228] [0069c22c, 0069c282] [0069c286, 0069c2b8]]


void FUN_0069c070(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b95230;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 0x28) != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x50))();
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  iVar5 = *(int *)(in_ECX + 0x60);
  while (iVar5 != 0) {
    FUN_00816010();
    piVar2 = (int *)FUN_00705450();
    if ((int *)*piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)*piVar2;
    }
    uVar3 = (uint)piVar2[2] >> 2;
    if (*(uint *)(iVar5 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar5 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar5 + 4) + uVar3 * 4) + (piVar2[2] & 3U) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    if ((*(int *)(in_ECX + 0x60) != 0) &&
       (iVar5 = *(int *)(in_ECX + 0x60) + -1, *(int *)(in_ECX + 0x60) = iVar5, iVar5 == 0)) {
      *(undefined4 *)(in_ECX + 0x5c) = 0;
    }
    iVar5 = *(int *)(in_ECX + 0x60);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("ledger",6);
  local_8 = 0;
  local_14 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))();
  iVar5 = *local_14;
  uVar4 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  uVar4 = (**(code **)(iVar5 + 0x2c))(local_64,uVar4);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x28) = uVar4;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350(&DAT_00e0b8cc,4);
  local_8 = 1;
  iVar5 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x34))(local_64);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(in_ECX + 0xa4);
  local_8 = 0xffffffff;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350(&DAT_00e0b8d4,4);
  local_8 = 2;
  iVar5 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x34))(local_64);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(in_ECX + 0xd0);
  local_8 = 0xffffffff;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("close",5);
  local_8 = 3;
  iVar5 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x34))(local_48);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(in_ECX + 0xfc);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_0069c520();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x18) + 0x38))();
  ExceptionList = local_10;
  return;
}

