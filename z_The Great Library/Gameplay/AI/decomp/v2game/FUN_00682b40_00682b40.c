// FUN_00682b40 @ 00682b40 body=[[00682b40, 00682b67] [00682b70, 00682bc0]]


void FUN_00682b40(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 unaff_EDI;
  
  iVar5 = param_1;
  *(undefined4 *)(param_1 + 0xb24) = unaff_EDI;
  piVar1 = (int *)(param_1 + 0xae0);
  piVar2 = (int *)(param_1 + 0xadc);
  param_1 = 0;
  if (0 < (int)(*piVar1 - *piVar2 & 0xfffffffcU)) {
    do {
      iVar3 = *(int *)(*(int *)(iVar5 + 0xadc) + param_1 * 4);
      puVar4 = *(undefined4 **)(iVar3 + 0x7b4);
      *(undefined4 *)(iVar3 + 0xcdc) = unaff_EDI;
      while (puVar4 != (undefined4 *)0x0) {
        piVar1 = (int *)*puVar4;
        puVar4 = (undefined4 *)puVar4[2];
        (**(code **)(*piVar1 + 0x6c))();
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar5 + 0xae0) - *(int *)(iVar5 + 0xadc) >> 2);
  }
  return;
}

