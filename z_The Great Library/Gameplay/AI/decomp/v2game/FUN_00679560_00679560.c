// FUN_00679560 @ 00679560 body=[[00679560, 0067964d]]


void FUN_00679560(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x174) + 0x9c))
                            (&DAT_00f0bec0 + *(int *)(*(int *)(param_1 + 0x34) + 8) * 7);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xb4))(*(undefined4 *)(param_1 + 4),1);
    FUN_006480e0(param_1);
    *(undefined1 *)(param_1 + 0xfa) = 1;
    iVar3 = (**(code **)(piVar2[0x1d] + 0x2c))();
    if (0x19 < *(int *)(iVar3 + 8)) {
      puVar4 = (undefined4 *)(**(code **)(piVar2[0x1d] + 0x2c))();
      puVar4 = *(undefined4 **)*puVar4;
      (**(code **)(*piVar2 + 0xbc))(puVar4,1);
      for (piVar2 = *(int **)(in_ECX + 100); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        cVar1 = (**(code **)(*(int *)*piVar2 + 8))();
        if ((cVar1 != '\0') && (iVar3 = *piVar2, *(undefined4 **)(iVar3 + 4) == puVar4)) {
          *(undefined4 *)(iVar3 + 4) = 0;
          *(undefined1 *)(iVar3 + 0xf8) = 1;
          break;
        }
      }
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x174) + 0x18) + 0x34))();
  return;
}

