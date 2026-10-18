// FUN_006a7c10 @ 006a7c10 body=[[006a7c10, 006a7ce9] [006a7cf2, 006a7d00]]


void FUN_006a7c10(void)

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
  puStack_c = &LAB_00b4a0d4;
  local_10 = ExceptionList;
  local_14 = 0;
  if (DAT_012589a0 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00aae9af(0x3c);
    local_8 = 0;
    local_18 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_012589a0 = (undefined4 *)0x0;
    }
    else {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("NULL_MESSAGE",0xc);
      local_8 = CONCAT31(local_8._1_3_,1);
      puVar1[1] = 0x18d;
      *puVar1 = CMessageType::vftable;
      puVar1[2] = 5;
      puVar1[3] = 0x100;
      *(undefined2 *)(puVar1 + 4) = 0;
      *(undefined1 *)((int)puVar1 + 0x12) = 1;
      puVar1[10] = 0xf;
      puVar1[9] = 0;
      local_14 = 1;
      *(undefined1 *)(puVar1 + 5) = 0;
      FUN_00408ed0(local_34,0,0xffffffff);
      puVar1[0xc] = 0;
      *(undefined1 *)(puVar1 + 0xd) = 0;
      puVar1[0xe] = 0;
      *puVar1 = CNullMessageType::vftable;
      DAT_012589a0 = puVar1;
    }
    if (((local_14 & 1) != 0) && (0xf < local_20)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

