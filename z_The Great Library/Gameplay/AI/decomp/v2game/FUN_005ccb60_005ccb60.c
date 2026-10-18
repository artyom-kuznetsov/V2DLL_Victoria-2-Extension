// FUN_005ccb60 @ 005ccb60 body=[[005ccb60, 005ccbfb]]


void FUN_005ccb60(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  bool bVar4;
  
  if (*(int *)(in_ECX + 0x108) != 0) {
    if (0 < *(int *)(in_ECX + 0x138)) {
      uVar2 = (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x130) + 0x68))();
      *(uint *)(in_ECX + 0x140) = uVar2 & 0xffff;
    }
    FUN_005d57a0(in_ECX);
    if (*(int **)(in_ECX + 0x110) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x110) + 0x80))();
      piVar1 = *(int **)(in_ECX + 0x108);
      uVar3 = (**(code **)(**(int **)(in_ECX + 0x110) + 0x44))();
      (**(code **)(*piVar1 + 0x40))(uVar3);
      FUN_009962f0(uVar3);
    }
    bVar4 = DAT_012588e4 == '\0';
    *(undefined4 *)(in_ECX + 0x110) = 0;
    if (bVar4) {
      (**(code **)(**(int **)(in_ECX + 0x108) + 0x7c))();
    }
  }
  return;
}

