// FUN_0078e520 @ 0078e520 body=[[0078e520, 0078e5b1]]


void FUN_0078e520(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  
  cVar3 = (**(code **)(**(int **)(in_ECX + 600) + 0x3c))();
  if (cVar3 != '\0') {
    iVar4 = (**(code **)(**(int **)(in_ECX + 600) + 0x30))();
    if (*(int *)(iVar4 + 0x1ac) != 0) {
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x194))();
    }
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x9c))(0);
    iVar4 = (**(code **)(**(int **)(in_ECX + 600) + 0x30))();
    puVar1 = *(undefined4 **)(iVar4 + 0x1a4);
    while (puVar1 != (undefined4 *)0x0) {
      uVar2 = *puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x88))(uVar2);
    }
  }
  return;
}

