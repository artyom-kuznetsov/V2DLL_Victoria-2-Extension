// FUN_005f4330 @ 005f4330 body=[[005f4330, 005f45f4]]


void FUN_005f4330(char param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 auStack_180 [20];
  undefined4 uStack_16c;
  undefined4 uStack_168;
  char *pcStack_164;
  undefined4 *puStack_160;
  char *pcStack_15c;
  code *pcStack_158;
  undefined1 local_40 [28];
  undefined1 *local_24;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba66cb;
  local_10 = ExceptionList;
  local_18 = *(undefined4 *)(in_ECX + 0x10);
  local_14 = *(int *)(in_ECX + 0x14);
  if (*(char *)(in_ECX + 0x10) == 'X') {
    if (*(char *)(in_ECX + 0x11) == 'X') {
      if (*(char *)(in_ECX + 0x12) == 'X') {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  ExceptionList = &local_10;
  if (bVar1) {
    pcStack_158 = (code *)0x5f43d7;
    ExceptionList = &local_10;
    puVar2 = (undefined4 *)FUN_004014a0();
    local_18 = *puVar2;
    local_14 = puVar2[1];
  }
  if (param_1 == '\0') {
    uVar3 = *(undefined4 *)(in_ECX + 0xc);
    pcStack_158 = (code *)0x0;
    pcStack_15c = (char *)0x5f45cd;
    pcStack_15c = (char *)FUN_0043ac40();
    puStack_160 = (undefined4 *)(in_ECX + 0x18);
    uStack_168 = 0x5f45e4;
    pcStack_164 = (char *)uVar3;
    FUN_004b5730();
  }
  else {
    if ((*(int *)(*(int *)(in_ECX + 0xc) + 300) == 0) && (local_14 != 0)) {
      pcStack_158 = (code *)0x5f443b;
      FUN_009885d0();
      local_8 = 0;
      pcStack_158 = FUN_00401280;
      pcStack_15c = " is set as controller. ";
      puStack_160 = (undefined4 *)0x5f4454;
      puStack_160 = (undefined4 *)FUN_004010c0();
      pcStack_164 = "has no owner set when ";
      local_24 = auStack_180;
      FUN_004c4540(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x5c));
      local_8._0_1_ = 1;
      uVar3 = FUN_004015b0(local_40,0x174,0x10004);
      local_8._0_1_ = 3;
      uStack_168 = FUN_004238b0(uVar3);
      uStack_16c = 0x5f44f9;
      pcStack_164 = (char *)FUN_00418e30();
      uStack_168 = 0x5f450e;
      puStack_160 = (undefined4 *)FUN_00418e30();
      pcStack_164 = (char *)0x5f4523;
      FUN_00418e30();
      pcStack_15c = (char *)0x5f4537;
      FUN_00408bd0();
      local_8 = (uint)local_8._1_3_ << 8;
      pcStack_158 = (code *)0x5f4546;
      FUN_00401650();
      local_8 = 0xffffffff;
      pcStack_158 = (code *)0x5f4555;
      FUN_00408ad0();
    }
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x134);
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x130);
    *(undefined4 *)(in_ECX + 0x1c) = uVar3;
    uVar3 = *(undefined4 *)(in_ECX + 0xc);
    pcStack_158 = (code *)0x0;
    pcStack_15c = (char *)0x5f459e;
    pcStack_15c = (char *)FUN_0043ac40();
    puStack_160 = &local_18;
    uStack_168 = 0x5f45af;
    pcStack_164 = (char *)uVar3;
    FUN_004b5730();
  }
  ExceptionList = local_10;
  return;
}

