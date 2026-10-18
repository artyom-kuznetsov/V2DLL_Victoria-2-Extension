// FUN_0073ab40 @ 0073ab40 body=[[0073ab40, 0073aca0]]


void FUN_0073ab40(int param_1,int param_2,int param_3)

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
  while( true ) {
    iVar4 = param_2 * 2 + 2;
    if (param_3 <= iVar4) break;
    FUN_00408ed0();
    local_8 = 0;
    FUN_00408ed0(param_1 + iVar4 * 0x28 + 0xc,0,0xffffffff);
    local_8 = 0xffffffff;
    cVar3 = FUN_0072fd90();
    if (cVar3 != '\0') {
      iVar4 = param_2 * 2 + 1;
    }
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x28);
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    FUN_00408ed0();
    param_2 = iVar4;
  }
  if (iVar4 == param_3) {
    iVar4 = param_1 + -0x28 + param_3 * 0x28;
    puVar1 = (undefined4 *)(param_1 + param_2 * 0x28);
    *puVar1 = *(undefined4 *)(param_1 + -0x28 + param_3 * 0x28);
    puVar1[1] = *(undefined4 *)(iVar4 + 4);
    puVar1[2] = *(undefined4 *)(iVar4 + 8);
    FUN_00408ed0();
  }
  FUN_0073ae80();
  ExceptionList = local_10;
  return;
}

