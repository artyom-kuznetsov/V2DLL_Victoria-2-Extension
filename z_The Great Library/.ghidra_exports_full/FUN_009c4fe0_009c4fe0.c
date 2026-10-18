// FUN_009c4fe0 @ 009c4fe0 body=[[009c4fe0, 009c505d]]


void FUN_009c4fe0(void)

{
  undefined2 uVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int in_ECX;
  
  piVar2 = *(int **)(in_ECX + 0x154);
  if ((float)piVar2[0x28] != *(float *)(in_ECX + 0x150)) {
    pcVar3 = *(code **)(*piVar2 + 0x6c);
    piVar2[0x28] = (int)*(float *)(in_ECX + 0x150);
    (*pcVar3)();
  }
  uVar1 = *(undefined2 *)(in_ECX + 0x17e);
  iVar4 = *(int *)(in_ECX + 0x154);
  *(undefined2 *)(iVar4 + 0xac) = *(undefined2 *)(in_ECX + 0x17c);
  *(undefined2 *)(iVar4 + 0xae) = uVar1;
  uVar1 = *(undefined2 *)(in_ECX + 0x182);
  iVar4 = *(int *)(in_ECX + 0x154);
  *(undefined2 *)(iVar4 + 0xb2) = *(undefined2 *)(in_ECX + 0x180);
  *(undefined2 *)(iVar4 + 0xb0) = uVar1;
  return;
}

