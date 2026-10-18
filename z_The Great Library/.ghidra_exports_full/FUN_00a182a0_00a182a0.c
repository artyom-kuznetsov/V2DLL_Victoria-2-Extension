// FUN_00a182a0 @ 00a182a0 body=[[00a182a0, 00a18315] [00a18319, 00a1836c] [00a18370, 00a183e7] [00a183eb, 00a183ff]]


undefined4 FUN_00a182a0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  uint in_stack_00000018;
  undefined4 *local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined *local_54;
  char *local_50;
  uint *puStack_4c;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b5d2eb;
  local_10 = ExceptionList;
  local_14 = local_64;
  uStack_68 = 0xffffffff;
  local_8 = 0;
  uStack_6c = 0;
  local_70 = &param_1;
  local_50 = (char *)0xf;
  local_54 = (undefined *)0x0;
  local_64[0] = 0;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_70 = (undefined4 *)0xa182ee;
  cVar1 = FUN_00a17030();
  if (cVar1 != '\0') {
    local_50 = *(char **)(in_EDX + 0x78);
    if ((local_50 != (char *)0x0) && ((char *)in_ECX != local_50)) {
      local_54 = (undefined *)0xa18304;
      FUN_00a174f0();
    }
    *(int *)(in_EDX + 0x78) = in_ECX;
    if (0xf < in_stack_00000018) {
      puStack_4c = (uint *)param_1;
                    /* WARNING: Subroutine does not return */
      local_50 = &UNK_00a18316;
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return 1;
  }
  puStack_4c = (uint *)0xb;
  local_50 = "METASESSION";
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_54 = (undefined *)0xa1834b;
  FUN_00409350();
  puStack_4c = local_3c;
  local_8._0_1_ = 1;
  local_50 = (char *)0xa18358;
  local_14 = (undefined1 *)FUN_009c1bd0();
  local_8._0_1_ = 0;
  if (0xf < local_28) {
    puStack_4c = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    local_50 = &UNK_00a1836d;
    FUN_00aae91b();
  }
  puStack_4c = (uint *)0x88;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_50 = (char *)0xa18383;
  iVar2 = FUN_00aae9af();
  local_8._0_1_ = 2;
  local_18 = iVar2;
  if (iVar2 == 0) {
    puStack_4c = (uint *)0x0;
  }
  else {
    local_50 = (char *)(uint)*(ushort *)(in_EDX + 0x40);
    local_54 = *(undefined **)(in_EDX + 0x3c);
    puStack_4c = (uint *)0x1;
    local_1c = (undefined1 *)&local_70;
    local_5c = 0xf;
    local_60 = 0;
    local_70 = (undefined4 *)((uint)local_70 & 0xffffff00);
    FUN_00409350("Bad password, very bad.",0x17);
    puStack_4c = (uint *)FUN_00a03980(iVar2);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_50 = (char *)0xa183d9;
  (**(code **)(**(int **)((int)local_14 + 0x38) + 0x18))();
  if (0xf < in_stack_00000018) {
    local_50 = (char *)param_1;
                    /* WARNING: Subroutine does not return */
    local_54 = &UNK_00a183e8;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return 0;
}

