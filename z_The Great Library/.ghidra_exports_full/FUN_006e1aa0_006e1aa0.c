// FUN_006e1aa0 @ 006e1aa0 body=[[006e1aa0, 006e1b75]]


void FUN_006e1aa0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2;
  while( true ) {
    iVar4 = iVar2 * 2 + 2;
    if (param_3 <= iVar4) break;
    cVar1 = FUN_006cf130();
    if (cVar1 != '\0') {
      iVar4 = iVar2 * 2 + 1;
    }
    iVar3 = iVar4 * 0x30 + param_1;
    iVar2 = iVar2 * 0x30 + param_1;
    FUN_00408ed0(iVar3,0,0xffffffff);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar3 + 0x24);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar3 + 0x28);
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
    iVar2 = iVar4;
  }
  if (iVar4 == param_3) {
    iVar4 = param_1 + -0x30 + param_3 * 0x30;
    iVar2 = iVar2 * 0x30 + param_1;
    FUN_00408ed0(iVar4,0,0xffffffff);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
    iVar2 = param_3 + -1;
  }
  FUN_006e1ce0(param_1,iVar2,param_2,param_4,param_5,param_6);
  return;
}

