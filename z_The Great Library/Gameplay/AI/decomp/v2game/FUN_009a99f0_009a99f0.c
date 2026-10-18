// FUN_009a99f0 @ 009a99f0 body=[[009a99f0, 009a9a82]]


void FUN_009a99f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_00aae9af(0x28);
  local_8 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00e38ecc;
    puVar2[1] = uVar1;
    puVar2[7] = 0xf;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    param_1 = puVar2;
    FUN_00408ed0(in_ECX,0,0xffffffff);
    *puVar2 = &PTR_FUN_00e38ee0;
    puVar2[9] = param_2;
  }
  local_8 = 0xffffffff;
  param_1 = puVar2;
  FUN_009e6810(in_ECX,&param_1);
  ExceptionList = local_10;
  return;
}

