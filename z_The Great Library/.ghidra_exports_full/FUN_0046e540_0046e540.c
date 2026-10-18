// FUN_0046e540 @ 0046e540 body=[[0046e540, 0046e5c3] [0046e5c7, 0046e618] [0046e61c, 0046e62d] [0046e630, 0046e6a0] [0046e6a4, 0046e6f0] [0046e6f4, 0046e71b]]


void FUN_0046e540(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6b3b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 4) + 0x50))();
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("news_icon",9);
  local_8 = 0;
  uVar2 = (**(code **)(*DAT_01258a80 + 0x2c))(local_4c,*(undefined4 *)(in_ECX + 8));
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 4) = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  if (*(int *)(in_ECX + 4) != 0) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("button",6);
    local_8 = 1;
    uVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x34))(local_4c);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x48) = uVar2;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x48) + 0x58);
    local_14 = (int *)(*(int *)(in_ECX + 0x48) + 0x54);
    while (puVar1 != (undefined4 *)0x0) {
      uVar2 = *puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      (**(code **)(*local_14 + 8))(uVar2);
    }
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x48) + 0x54) + 4))(in_ECX + 0xc);
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("label",5);
    local_8 = 2;
    uVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(local_4c);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x38) = uVar2;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    FUN_0046e720(in_ECX);
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("news_icon",9);
    local_8 = 3;
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x78))(local_30);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x38))();
  }
  ExceptionList = local_10;
  return;
}

