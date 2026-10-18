// FUN_00976450 @ 00976450 body=[[00976450, 00976516] [0097651f, 0097652e]]


void FUN_00976450(void)

{
  undefined4 *puVar1;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b582ac;
  local_10 = ExceptionList;
  local_14 = 0;
  if (DAT_01258a4c == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00aae9af(0x50);
    local_8 = 0;
    local_18 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_01258a4c = (undefined4 *)0x0;
    }
    else {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("NullNationalValue",0x11);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_14 = 1;
      FUN_0044bc60(puVar1);
      local_8 = 2;
      *puVar1 = CNationalValue::vftable;
      puVar1[0x11] = 0xf;
      puVar1[0x10] = 0;
      *(undefined1 *)(puVar1 + 0xc) = 0;
      FUN_00408ed0(local_34,0,0xffffffff);
      puVar1[0x13] = 0xffffffff;
      *puVar1 = CNullNationalValue::vftable;
      DAT_01258a4c = puVar1;
    }
    if (((local_14 & 1) != 0) && (0xf < local_20)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

