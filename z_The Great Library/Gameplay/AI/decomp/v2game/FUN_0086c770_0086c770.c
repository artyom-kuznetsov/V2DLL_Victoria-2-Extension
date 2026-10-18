// FUN_0086c770 @ 0086c770 body=[[0086c770, 0086c85e] [0086c862, 0086c873]]


void FUN_0086c770(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  undefined1 *unaff_ESI;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b427a8;
  local_10 = ExceptionList;
  local_14 = 0;
  if (((*(uint *)(in_ECX + 0x40) & 2) == 0) && (**(uint **)(in_ECX + 0x24) != 0)) {
    uVar2 = **(uint **)(in_ECX + 0x24);
    if (uVar2 <= *(uint *)(in_ECX + 0x3c)) {
      uVar2 = *(uint *)(in_ECX + 0x3c);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (uint)local_30[0]._1_3_ << 8;
    ExceptionList = &local_10;
    FUN_00409350(**(int **)(in_ECX + 0x14),uVar2 - **(int **)(in_ECX + 0x14));
    local_8 = 0;
  }
  else {
    if (((*(uint *)(in_ECX + 0x40) & 4) != 0) || (**(int **)(in_ECX + 0x20) == 0)) {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      local_8 = 2;
      ExceptionList = &local_10;
      *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
      *(undefined4 *)(unaff_ESI + 0x10) = 0;
      *unaff_ESI = 0;
      FUN_00447470(local_4c);
      uVar2 = local_4c[0];
      uVar1 = local_38;
      goto joined_r0x0086c854;
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (uint)local_30[0]._1_3_ << 8;
    ExceptionList = &local_10;
    FUN_00409350(**(int **)(in_ECX + 0x10),
                 (**(int **)(in_ECX + 0x30) + **(int **)(in_ECX + 0x20)) - **(int **)(in_ECX + 0x10)
                );
    local_8 = 1;
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00447470(local_30);
  uVar2 = local_30[0];
  uVar1 = local_1c;
joined_r0x0086c854:
  if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar2);
  }
  ExceptionList = local_10;
  return;
}

