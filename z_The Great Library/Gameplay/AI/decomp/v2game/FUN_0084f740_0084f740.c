// FUN_0084f740 @ 0084f740 body=[[0084f740, 0084f7bd]]


void FUN_0084f740(float param_1)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0xe8);
  in_ECX[0x72] = (int)(param_1 + (float)in_ECX[0x72]);
  iVar4 = (*pcVar1)();
  piVar2 = *(int **)(iVar4 + 0x140);
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    piVar2 = (int *)piVar2[1];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x15c))();
    }
  }
  if ((((char)in_ECX[0xf] != '\0') && (in_ECX[0x31] != 0)) && ((char)in_ECX[0x8d] == '\0')) {
    *(undefined1 *)(in_ECX + 0x8d) = 1;
  }
  return;
}

