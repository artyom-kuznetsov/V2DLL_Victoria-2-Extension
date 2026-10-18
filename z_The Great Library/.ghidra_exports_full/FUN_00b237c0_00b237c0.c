// FUN_00b237c0 @ 00b237c0 body=[[00b237c0, 00b23815]]


void FUN_00b237c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_20 [7];
  
  if (param_2 != param_3) {
    puVar3 = (undefined4 *)(param_1 + param_2 * 0x1c);
    puVar5 = (undefined4 *)(param_1 + param_3 * 0x1c);
    puVar2 = puVar3;
    puVar4 = local_20;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar2 = puVar5;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar3 = local_20;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}

