// FUN_004cd880 @ 004cd880 body=[[004cd880, 004cd8bd]]


undefined4 FUN_004cd880(void)

{
  char cVar1;
  undefined4 *in_EAX;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  
  if (((char)unaff_ESI[1] == '\0') && (cVar1 = (**(code **)(*unaff_ESI + 8))(), cVar1 != '\0')) {
    if (in_EAX[2] != 0) {
      iVar2 = (**(code **)(**(int **)*in_EAX + 4))();
      iVar3 = (**(code **)(*unaff_ESI + 4))();
      if (iVar3 != iVar2) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

