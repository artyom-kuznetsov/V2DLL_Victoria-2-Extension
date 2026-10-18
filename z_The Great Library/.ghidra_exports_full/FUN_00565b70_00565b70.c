// FUN_00565b70 @ 00565b70 body=[[00565b70, 00565c95] [00565c99, 00565cad]]


int FUN_00565b70(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_64 [12];
  undefined4 uStack_58;
  int local_54;
  uint *local_50;
  char *pcStack_4c;
  uint uStack_48;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined1 *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ad1a;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  if (DAT_0125e874 == 0) {
    uStack_48 = 0x38;
    pcStack_4c = (char *)0x565ba1;
    ExceptionList = &local_10;
    uStack_48 = FUN_00aae9af();
    local_8 = 0;
    local_18 = uStack_48;
    if (uStack_48 == 0) {
      uVar1 = 0;
    }
    else {
      pcStack_4c = (char *)0x565bb4;
      uVar1 = FUN_008750a0();
    }
    local_8 = 0xffffffff;
    pcStack_4c = "9\x1d";
    uStack_48 = uVar1;
    FUN_005660f0();
  }
  if (DAT_01258800 == 0) {
    uStack_48 = 0x38;
    pcStack_4c = (char *)0x565bd8;
    local_18 = FUN_00aae9af();
    local_8 = 1;
    if (local_18 == 0) {
      DAT_01258800 = 0;
    }
    else {
      uStack_48 = 0xffffffff;
      local_1c = local_64;
      local_50 = (uint *)0xf;
      local_54 = 0;
      local_64[0] = 0;
      FUN_00409350("null_focus",10);
      DAT_01258800 = FUN_00565940();
    }
    local_8 = 0xffffffff;
    uStack_48 = 0x114;
    pcStack_4c = (char *)0x565c2c;
    iVar2 = FUN_00aae9af();
    local_8 = 2;
    local_1c = (undefined1 *)iVar2;
    if (iVar2 == 0) {
      DAT_01258804 = 0;
    }
    else {
      uStack_48 = 10;
      pcStack_4c = "null_focus";
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      local_50 = (uint *)0x565c5b;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,3);
      uStack_48 = DAT_01258800;
      pcStack_4c = (char *)0xffffffff;
      local_50 = local_38;
      local_14 = 1;
      uStack_58 = 0x565c78;
      local_54 = iVar2;
      DAT_01258804 = FUN_00562cd0();
    }
    if (((local_14 & 1) != 0) && (0xf < local_24)) {
      uStack_48 = local_38[0];
                    /* WARNING: Subroutine does not return */
      pcStack_4c = &UNK_00565c96;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return DAT_0125e874;
}

