// FUN_009decb0 @ 009decb0 body=[[009decb0, 009deed8]]


undefined4 *
FUN_009decb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b41a23;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  DAT_013f090c = DAT_013f090c + 1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[2] = &PTR_FUN_00e3bcdc;
  *param_1 = &PTR_FUN_00e3bcfc;
  param_1[2] = &PTR_LAB_00e3bd20;
  param_1[9] = 0x18d;
  param_1[8] = CVersion::vftable;
  param_1[10] = 0;
  param_1[0x12] = 0xf;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  local_8 = 3;
  uStack_7 = 0;
  FUN_00408ed0(param_5,0,0xffffffff);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x15] = 0x18d;
  param_1[0x14] = CVersion::vftable;
  param_1[0x16] = 0;
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  local_8 = 5;
  FUN_00408ed0(param_5,0,0xffffffff);
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  local_8 = 6;
  param_1[0x20] = 0;
  puVar1 = (undefined4 *)FUN_00aae9af(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_00e3bd30;
  }
  param_1[0x21] = puVar1;
  local_8 = 7;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x28] = 0xf;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  FUN_00408ed0(param_4,0,0xffffffff);
  param_1[0x37] = param_2;
  param_1[0x38] = 0;
  local_8 = 9;
  puVar1 = (undefined4 *)FUN_00aae9af(0xc0);
  local_8 = 10;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00a5f0c0(puVar1);
    *puVar1 = &PTR_FUN_00e38988;
    puVar1[6] = &PTR_LAB_00e389e8;
    puVar1[0xc] = &PTR_LAB_00e389f8;
    puVar1[0x12] = &PTR_LAB_00e38a08;
    puVar1[0x18] = &PTR_LAB_00e38a18;
  }
  param_1[0x39] = puVar1;
  _local_8 = CONCAT31(uStack_7,0xb);
  puVar1 = (undefined4 *)FUN_00aae9af(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    DAT_013f0940 = DAT_013f0940 + 1;
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    DAT_013f0948 = DAT_013f0948 + 1;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar1[6] = &PTR_FUN_00e388f0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *puVar1 = &PTR_FUN_00e3894c;
    puVar1[6] = &PTR_LAB_00e3893c;
  }
  param_1[0x3a] = puVar1;
  param_1[0x3b] = param_3;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((int)param_1 + 0xf2) = 1;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  FUN_009dfa30();
  ExceptionList = local_10;
  return param_1;
}

