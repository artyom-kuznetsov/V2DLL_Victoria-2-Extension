// FUN_00610c40 @ 00610c40 body=[[00610c40, 00610d01]]


void FUN_00610c40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar5 = puVar4 + 2, puVar5 != param_2) {
      uVar1 = *puVar5;
      iVar2 = puVar4[3];
      iVar3 = *(int *)(param_1[1] + 0x1dc);
      puVar4 = puVar5;
      if ((*(int *)(iVar2 + 0x1dc) < iVar3) ||
         ((*(int *)(iVar2 + 0x1dc) <= iVar3 &&
          (*(uint *)(iVar2 + 0x1d8) <= *(uint *)(param_1[1] + 0x1d8))))) {
        while( true ) {
          iVar3 = *(int *)(puVar5[-1] + 0x1dc);
          if ((*(int *)(iVar2 + 0x1dc) < iVar3) ||
             ((*(int *)(iVar2 + 0x1dc) <= iVar3 &&
              (*(uint *)(iVar2 + 0x1d8) <= *(uint *)(puVar5[-1] + 0x1d8))))) break;
          *puVar5 = puVar5[-2];
          puVar5[1] = puVar5[-1];
          puVar5 = puVar5 + -2;
        }
        *puVar5 = uVar1;
        puVar5[1] = iVar2;
      }
      else {
        for (; param_1 != puVar5; puVar5 = puVar5 + -2) {
          *puVar5 = puVar5[-2];
          puVar5[1] = puVar5[-1];
        }
        *param_1 = uVar1;
        param_1[1] = iVar2;
      }
    }
  }
  return;
}

