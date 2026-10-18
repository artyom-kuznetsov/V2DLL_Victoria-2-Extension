// FUN_00491d50 @ 00491d50 body=[[00491d50, 00491e54] [00491e58, 00491e69]]


undefined4 FUN_00491d50(void)

{
  int in_ECX;
  uint local_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined *puStack_50;
  undefined1 **ppuStack_4c;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_34 [5];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  iStack_5c = *(int *)(in_ECX + 0x88);
  if ((iStack_5c != 0) && (*(int *)(in_ECX + 0x78) < 1)) {
    local_3c = *(undefined4 *)(in_ECX + 0x4c);
    uStack_64 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x50) * 4);
    ppuStack_4c = &local_40;
    local_58 = *(undefined4 *)(in_ECX + 0x48);
    puStack_50 = (undefined *)0x0;
    local_54 = 0;
    puStack_60 = local_34;
    local_40 = (undefined1 *)0x0;
    local_68 = 0x491dc0;
    ExceptionList = &local_14;
    FUN_004fa8b0();
    local_c = 0;
    ppuStack_4c = (undefined1 **)local_40;
    local_40 = (undefined1 *)&local_68;
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    FUN_00408ed0(local_34,0,0xffffffff);
    FUN_00491ac0();
    if (*(char *)(*(int *)(in_ECX + 0x88) + 0x3a) != '\0') {
      local_3c = *(undefined4 *)(in_ECX + 0x4c);
      ppuStack_4c = (undefined1 **)local_34;
      puStack_50 = *(undefined **)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x50) * 4);
      local_54 = 0x491e27;
      FUN_004f9be0();
    }
    local_3c = *(undefined4 *)(in_ECX + 0x4c);
    puStack_50 = *(undefined **)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x50) * 4);
    local_54 = 0x491e44;
    FUN_0053f5c0();
    if (0xf < local_20) {
      ppuStack_4c = (undefined1 **)local_34[0];
                    /* WARNING: Subroutine does not return */
      puStack_50 = &UNK_00491e55;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return 1;
}

