// FUN_00582a60 @ 00582a60 body=[[00582a60, 00582ba3] [00582ba7, 00582bc3] [00582bc7, 00582beb] [00582bef, 00582c2f]]


void FUN_00582a60(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9eb18;
  local_14 = ExceptionList;
  piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4) + 0xe44);
  if (piVar2 != (int *)0x0) {
    while( true ) {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[2];
      if ((*(int *)(iVar1 + 0xc) == *(int *)(in_ECX + 0x50)) &&
         (*(int *)(iVar1 + 8) == *(int *)(in_ECX + 0x4c))) break;
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    ExceptionList = &local_14;
    FUN_004d03d0(in_ECX + 0x3c,*(undefined1 *)(in_ECX + 0x58),*(undefined1 *)(in_ECX + 0x59),
                 *(undefined4 *)(in_ECX + 0x5c),*(undefined1 *)(in_ECX + 0x60));
    if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_c = 0;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_c._0_1_ = 1;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350("factorysetting",0xe);
      local_c = CONCAT31(local_c._1_3_,2);
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(local_6c,local_50,local_34,0);
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_c = 0xffffffff;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
    }
    if (*(int *)(in_ECX + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(0);
    }
  }
  ExceptionList = local_14;
  return;
}

