// FUN_00b24b70 @ 00b24b70 body=[[00b24b70, 00b24bb7]]


void FUN_00b24b70(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_44 [16];
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)(param_2 * 0x40 + param_1);
    puVar3 = (undefined4 *)(param_1 + param_3 * 0x40);
    puVar4 = puVar1;
    puVar5 = local_44;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = puVar3;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    puVar4 = local_44;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

