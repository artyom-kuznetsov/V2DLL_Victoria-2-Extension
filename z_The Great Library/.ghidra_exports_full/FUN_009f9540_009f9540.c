// FUN_009f9540 @ 009f9540 body=[[009f9540, 009f9597]]


void FUN_009f9540(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1114) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x16c) + 0x10))(*(int **)(in_ECX + 0x16c));
    piVar1 = *(int **)(in_ECX + 0x16c);
    iVar2 = *piVar1;
    uVar3 = FUN_009b6df0();
    (**(code **)(iVar2 + 0x14))(piVar1,in_ECX + 0x174,*(undefined4 *)(in_ECX + 0x1114),uVar3);
    (**(code **)(**(int **)(in_ECX + 0x16c) + 0x44))(*(int **)(in_ECX + 0x16c));
  }
  return;
}

