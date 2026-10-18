// FUN_00a17880 @ 00a17880 body=[[00a17880, 00a178e6] [00a178ea, 00a179e5] [00a179e9, 00a17a02] [00a17a06, 00a17a22] [00a17a26, 00a17a48] [00a17a4c, 00a17acc] [00a17ad0, 00a17ae2]]


void FUN_00a17880(int param_1,char *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  uint in_stack_0000001c;
  undefined1 local_e4 [16];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  char *pcStack_c4;
  uint *puStack_c0;
  uint local_98;
  uint local_7c;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4e6dc;
  local_10 = ExceptionList;
  local_8 = 0;
  puStack_c0 = (uint *)0xb;
  pcStack_c4 = "METASESSION";
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  uStack_c8 = 0xa178c5;
  ExceptionList = &local_10;
  FUN_00409350();
  puStack_c0 = local_3c;
  local_8._0_1_ = 1;
  pcStack_c4 = (char *)0xa178d2;
  local_14 = FUN_009c1bd0();
  local_8._0_1_ = 0;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0;
  if (0xf < local_28) {
    puStack_c0 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    pcStack_c4 = &UNK_00a178e7;
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  pcVar3 = param_2;
  if (in_stack_0000001c < 0x10) {
    pcVar3 = (char *)&param_2;
  }
  if (*pcVar3 == '/') {
    puStack_c0 = (uint *)0x88;
    pcStack_c4 = (char *)0xa1790e;
    iVar4 = FUN_00aae9af();
    local_8._0_1_ = 2;
    if (iVar4 == 0) {
      puStack_c0 = (uint *)0x0;
    }
    else {
      pcStack_c4 = (char *)(uint)*(ushort *)(in_ECX + 0x40);
      uStack_c8 = *(undefined4 *)(in_ECX + 0x3c);
      puStack_c0 = (uint *)0x1;
      local_18 = local_e4;
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4[0] = 0;
      FUN_00409350("Illegal Command!",0x10);
      puStack_c0 = (uint *)FUN_00a03980(iVar4);
    }
    local_8._0_1_ = 0;
    pcStack_c4 = (char *)0xa17964;
    (**(code **)(**(int **)(local_14 + 0x38) + 0x18))();
  }
  else {
    puStack_c0 = (uint *)0x4;
    pcStack_c4 = &DAT_00dfd504;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    uStack_c8 = 0xa17981;
    local_8._0_1_ = uVar2;
    FUN_00409350();
    local_8._0_1_ = 3;
    pcStack_c4 = (char *)0xa17996;
    FUN_00988fa0();
    puStack_c0 = local_58;
    local_8._0_1_ = 4;
    pcStack_c4 = (char *)0xa179ab;
    FUN_00988f20();
    puStack_c0 = (uint *)&param_2;
    local_8._0_1_ = 5;
    pcStack_c4 = (char *)0xa179c0;
    uStack_c8 = FUN_00988f20();
    puStack_c0 = (uint *)0xffffffff;
    pcStack_c4 = (char *)0x0;
    local_8._0_1_ = 6;
    uStack_cc = 0xa179d0;
    FUN_00408ed0();
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      pcStack_c4 = &UNK_00a179e6;
      FUN_00aae91b();
    }
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      pcStack_c4 = &UNK_00a17a03;
      FUN_00aae91b();
    }
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      pcStack_c4 = &UNK_00a17a23;
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (0xf < local_44) {
      puStack_c0 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
      pcStack_c4 = &UNK_00a17a49;
      FUN_00aae91b();
    }
    local_8._0_1_ = uVar2;
    for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      puStack_c0 = (uint *)0x88;
      pcStack_c4 = (char *)0xa17a60;
      iVar4 = FUN_00aae9af();
      local_8._0_1_ = 7;
      if (iVar4 == 0) {
        puStack_c0 = (uint *)0x0;
      }
      else {
        pcStack_c4 = (char *)(uint)*(ushort *)(*piVar1 + 0x40);
        uStack_c8 = *(undefined4 *)(*piVar1 + 0x3c);
        puStack_c0 = (uint *)0x0;
        local_18 = local_e4;
        local_d0 = 0xf;
        local_d4 = 0;
        local_e4[0] = 0;
        FUN_00408ed0(&param_2,0,0xffffffff);
        puStack_c0 = (uint *)FUN_00a03980(iVar4);
      }
      local_8._0_1_ = 0;
      pcStack_c4 = (char *)0xa17ab7;
      (**(code **)(**(int **)(local_14 + 0x38) + 0x18))();
    }
  }
  if (in_stack_0000001c < 0x10) {
    ExceptionList = local_10;
    return;
  }
  puStack_c0 = (uint *)param_2;
                    /* WARNING: Subroutine does not return */
  pcStack_c4 = &UNK_00a17acd;
  FUN_00aae91b();
}

