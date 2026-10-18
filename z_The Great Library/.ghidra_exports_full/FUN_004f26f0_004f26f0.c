// FUN_004f26f0 @ 004f26f0 body=[[004f26f0, 004f2758]]


void FUN_004f26f0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = param_3 + 0x10;
  if (iVar3 != iVar1) {
    puVar4 = (undefined4 *)(param_3 + 8);
    do {
      puVar4[-1] = *(undefined4 *)(iVar3 + 4);
      *puVar4 = *(undefined4 *)(iVar3 + 8);
      puVar4[1] = *(undefined4 *)(iVar3 + 0xc);
      iVar3 = iVar3 + 0x10;
      puVar4 = puVar4 + 4;
    } while (iVar3 != iVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  for (puVar4 = puVar2 + -4; puVar4 != puVar2; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(0);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -0x10;
  *param_2 = param_3;
  return;
}

