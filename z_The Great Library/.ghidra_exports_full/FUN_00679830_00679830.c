// FUN_00679830 @ 00679830 body=[[00679830, 006798c2]]


void FUN_00679830(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  
  puVar4 = (undefined4 *)(param_1 + 0x14);
  if (0xf < *(uint *)(param_1 + 0x28)) {
    puVar4 = (undefined4 *)*puVar4;
  }
  iVar5 = FUN_00aaf0c5(puVar4);
  for (piVar1 = *(int **)(in_ECX + 0x60); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    cVar3 = (**(code **)(*(int *)*piVar1 + 8))();
    if (((cVar3 != '\0') && (iVar2 = *piVar1, *(int *)(*(int *)(iVar2 + 0x34) + 8) == iVar5)) &&
       (*(int **)(iVar2 + 8) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar2 + 8) + 0x34))();
      (**(code **)(**(int **)(iVar2 + 8) + 0x28))();
      FUN_006480e0(*(undefined4 *)(iVar2 + 8));
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined1 *)(iVar2 + 0xf8) = 1;
    }
  }
  return;
}

