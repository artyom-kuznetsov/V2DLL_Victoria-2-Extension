// FUN_006eb700 @ 006eb700 body=[[006eb700, 006eb7b4]]


void FUN_006eb700(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar4 = param_1;
  puVar1 = (uint *)(in_EAX + 0x38);
  iVar5 = *(int *)(in_EAX + 0x3c) - *(int *)(in_EAX + 0x38) >> 2;
  iVar6 = 0;
  if (0 < iVar5) {
    piVar7 = (int *)*puVar1;
    do {
      if (*piVar7 == param_1) {
        FUN_006e7d70(param_1,param_2);
        return;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < iVar5);
  }
  FUN_006e7d70(param_1,param_2);
  puVar2 = *(undefined4 **)(in_EAX + 0x3c);
  if (&param_1 < puVar2) {
    puVar3 = (undefined4 *)*puVar1;
    if (puVar3 <= &param_1) {
      if (puVar2 == *(undefined4 **)(in_EAX + 0x40)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(in_EAX + 0x3c) != (undefined4 *)0x0) {
        **(undefined4 **)(in_EAX + 0x3c) =
             *(undefined4 *)(*puVar1 + ((int)&param_1 - (int)puVar3 >> 2) * 4);
        *(int *)(in_EAX + 0x3c) = *(int *)(in_EAX + 0x3c) + 4;
        return;
      }
      goto LAB_006eb7a9;
    }
  }
  if (puVar2 == *(undefined4 **)(in_EAX + 0x40)) {
    FUN_00a513f0();
  }
  if (*(int **)(in_EAX + 0x3c) != (int *)0x0) {
    **(int **)(in_EAX + 0x3c) = iVar4;
  }
LAB_006eb7a9:
  *(int *)(in_EAX + 0x3c) = *(int *)(in_EAX + 0x3c) + 4;
  return;
}

