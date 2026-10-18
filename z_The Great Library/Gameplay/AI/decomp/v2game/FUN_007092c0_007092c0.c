// FUN_007092c0 @ 007092c0 body=[[007092c0, 00709306] [00709310, 00709339] [00709340, 007093bd]]


void FUN_007092c0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar4 * 4);
    iVar6 = *(int *)(iVar1 + 0x68) * 10;
    iVar5 = *(int *)(*param_4 + 0x68) * 10;
    iVar2 = *(int *)(iVar1 + 0x60);
    while (iVar3 = iVar2, iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0x224);
      if ((*(int *)(iVar3 + 0x17c) != 0) && (*(int *)(iVar3 + 0x20) == 0)) {
        iVar6 = iVar6 + -9;
      }
    }
    iVar2 = *(int *)(*param_4 + 0x60);
    while (iVar3 = iVar2, iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0x224);
      if ((*(int *)(iVar3 + 0x17c) != 0) && (*(int *)(iVar3 + 0x20) == 0)) {
        iVar5 = iVar5 + -9;
      }
    }
    if (iVar5 <= iVar6) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar4;
    if (iVar4 <= param_3) {
      *(int *)(param_1 + iVar4 * 4) = *param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

