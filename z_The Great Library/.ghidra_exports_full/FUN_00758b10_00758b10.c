// FUN_00758b10 @ 00758b10 body=[[00758b10, 00758b94]]


void FUN_00758b10(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  
  (**(code **)(**(int **)(in_ECX[0x1d3] + 0xc) + 0x1c))(param_1);
  if (*(char *)(param_1 + 0xa8) != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0xac);
    uVar2 = *(undefined4 *)(param_1 + 0xb0);
    iVar3 = (**(code **)(*in_ECX + 0x6c))();
    if (*(char *)(iVar3 + 0x356) == '\0') {
      *(undefined4 *)(iVar3 + 0x334) = uVar1;
      *(undefined4 *)(iVar3 + 0x338) = uVar2;
      *(undefined4 *)(iVar3 + 0x33c) = *(undefined4 *)(iVar3 + 0x334);
      *(undefined4 *)(iVar3 + 0x340) = *(undefined4 *)(iVar3 + 0x338);
    }
  }
  return;
}

