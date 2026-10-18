// FUN_005cd3d0 @ 005cd3d0 body=[[005cd3d0, 005cd534]]


undefined1 FUN_005cd3d0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  cVar2 = (**(code **)(*in_ECX + 0x84))(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  cVar2 = (**(code **)(*in_ECX + 0x38))();
  if ((((((cVar2 == '\0') || (*(char *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x2a) != '\0')) ||
        (*(char *)(*(int *)(param_1 + 0x5c) + 0x2a) == '\0')) ||
       (((iVar3 = (**(code **)(*in_ECX + 0x2c))(), *(int *)(iVar3 + 0x1b4) == 0 ||
         (iVar3 = (**(code **)(*in_ECX + 0x2c))(), *(int *)(*(int *)(iVar3 + 0x1b4) + 0x74) == 0))
        && (cVar2 = FUN_004c3e90(*(undefined4 *)(in_ECX[0x37] + 0x58)), cVar2 != '\0')))) &&
      ((in_ECX[0x1d] == 0 || (cVar2 = FUN_005cf2e0(), cVar2 != '\0')))) &&
     ((in_ECX[0x3b] < 1 ||
      ((in_ECX[0x1d] == 0 ||
       (*(int *)(in_ECX[0x1d] + 0x18) !=
        *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)in_ECX[0x39] * 4))))))) {
    cVar2 = (**(code **)(*in_ECX + 0x3c))();
    if (cVar2 == '\0') {
      return 1;
    }
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x2a) != '\0') {
      param_1 = *(int *)(*(int *)(DAT_0125870c + 0x2238) +
                        *(int *)(*(int *)(param_1 + 0x5c) + 0xdc) * 4);
    }
    if ((*(char *)(*(int *)(param_1 + 0x5c) + 0x2a) == '\0') ||
       (cVar2 = FUN_004b8b00(), cVar2 != '\0')) {
      iVar3 = (**(code **)(*in_ECX + 0x30))();
      piVar1 = *(int **)(iVar3 + 0x1a4);
      do {
        if (piVar1 == (int *)0x0) {
          return 1;
        }
        iVar3 = *piVar1;
        piVar1 = (int *)piVar1[2];
      } while (*(int *)(iVar3 + 0xec) < 1);
    }
  }
  return 0;
}

