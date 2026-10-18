// FUN_00567560 @ 00567560 body=[[00567560, 00567618]]


undefined4 * FUN_00567560(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b81218;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350("noreligion",10);
  FUN_00567280(param_1,DAT_0125e99c);
  puVar3 = DAT_0125e99c;
  local_8 = 0;
  *param_1 = CNullReligion::vftable;
  iVar1 = puVar3[1];
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
  iVar2 = puVar3[2];
  puVar3[1] = puVar4;
  puVar3[2] = iVar2 + 1;
  if (iVar2 == 0) {
    *puVar3 = puVar4;
  }
  else {
    *(undefined4 **)(iVar1 + 8) = puVar4;
  }
  ExceptionList = local_10;
  return param_1;
}

