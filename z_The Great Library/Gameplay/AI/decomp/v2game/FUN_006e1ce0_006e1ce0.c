// FUN_006e1ce0 @ 006e1ce0 body=[[006e1ce0, 006e1cfa] [006e1d00, 006e1d91]]


void FUN_006e1ce0(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    iVar4 = iVar2 * 0x30 + param_1;
    cVar1 = FUN_006cf130();
    if (cVar1 == '\0') break;
    iVar3 = param_2 * 0x30 + param_1;
    FUN_00408ed0(iVar4,0,0xffffffff);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
    param_2 = iVar2;
  }
  param_1 = param_2 * 0x30 + param_1;
  FUN_00408ed0(param_4,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_4 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_4 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_4 + 0x2c);
  return;
}

