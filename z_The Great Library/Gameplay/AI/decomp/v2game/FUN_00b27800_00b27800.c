// FUN_00b27800 @ 00b27800 body=[[00b27800, 00b2784d]]


void FUN_00b27800(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_34 [12];
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)(param_2 * 0x30 + param_1);
    puVar3 = (undefined4 *)(param_3 * 0x30 + param_1);
    puVar4 = puVar1;
    puVar5 = local_34;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = puVar3;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    puVar4 = local_34;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

