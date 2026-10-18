// FUN_004f9be0 @ 004f9be0 body=[[004f9be0, 004f9c5b] [004f9c5f, 004f9c94]]


void FUN_004f9be0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ffb3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined1 *)FUN_00aae9af(0x1c);
  local_8 = 0;
  local_14 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00408ed0(param_2,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,1);
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *puVar1 = 0;
    FUN_00408ed0(local_30,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  FUN_009adb00(puVar1);
  ExceptionList = local_10;
  return;
}

