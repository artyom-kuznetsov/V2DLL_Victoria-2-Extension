// FUN_005990b0 @ 005990b0 body=[[005990b0, 0059913e]]


bool FUN_005990b0(void)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  undefined1 local_8 [4];
  
  if ((((char)in_ECX[0x1a] == '\0') &&
      (piVar3 = (int *)FUN_005dc180(in_ECX + 8,local_8), DAT_0125f594 <= *piVar3)) &&
     ((cVar2 = (**(code **)(*(int *)in_ECX[7] + 0x2c))(), cVar2 == '\0' ||
      (cVar2 = (**(code **)(*in_ECX + 0x50))(), cVar2 == '\0')))) {
    piVar3 = (int *)in_ECX[0x1b];
    iVar4 = in_ECX[0x1c] - (int)piVar3 >> 2;
    bVar1 = false;
    iVar5 = 0;
    if (0 < iVar4) {
      while ((*(int *)(*piVar3 + 0x5c) == 5 || (*(int *)(*piVar3 + 0x5c) == 6))) {
        iVar5 = iVar5 + 1;
        piVar3 = piVar3 + 1;
        if (iVar4 <= iVar5) {
          return true;
        }
      }
      bVar1 = true;
    }
    return !bVar1;
  }
  return true;
}

