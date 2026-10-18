// FUN_00561080 @ 00561080 body=[[00561080, 0056112e]]


undefined4 * FUN_00561080(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b81408;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350("noculture",9);
  FUN_00560ad0(param_1,DAT_0125e38c);
  iVar3 = DAT_0125e38c;
  local_8 = 0;
  *param_1 = CNullCulture::vftable;
  iVar1 = *(int *)(iVar3 + 0xc);
  puVar4 = (undefined4 *)FUN_00aae9af();
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = param_1;
    puVar4[1] = iVar1;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar2 = *(int *)(iVar3 + 0x10);
  *(undefined4 **)(iVar3 + 0xc) = puVar4;
  *(int *)(iVar3 + 0x10) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(iVar3 + 8) = puVar4;
  }
  else {
    *(undefined4 **)(iVar1 + 8) = puVar4;
  }
  ExceptionList = local_10;
  return param_1;
}

