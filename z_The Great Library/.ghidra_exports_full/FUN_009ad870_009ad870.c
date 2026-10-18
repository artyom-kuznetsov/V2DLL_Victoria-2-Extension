// FUN_009ad870 @ 009ad870 body=[[009ad870, 009ad8f8]]


void FUN_009ad870(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e333;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined1 *)FUN_00aae9af(0x30);
  local_8 = 0;
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *puVar1 = 0;
    FUN_00408ed0(param_2,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_009ab4f0(puVar1 + 0x1c,param_3);
  }
  local_8 = 0xffffffff;
  FUN_009adb00(puVar1);
  ExceptionList = local_10;
  return;
}

