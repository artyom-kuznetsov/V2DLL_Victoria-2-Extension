// FUN_007a0060 @ 007a0060 body=[[007a0060, 007a01a4]]


void FUN_007a0060(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ef98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    FUN_00408ed0();
    local_8 = 0;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x28);
    FUN_00408ed0(puVar1 + 3,0,0xffffffff);
    local_8 = 0xffffffff;
    cVar3 = FUN_0078b380();
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    FUN_00408ed0();
    param_2 = iVar4;
  }
  puVar1 = (undefined4 *)(param_1 + param_2 * 0x28);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  FUN_00408ed0();
  ExceptionList = local_10;
  return;
}

