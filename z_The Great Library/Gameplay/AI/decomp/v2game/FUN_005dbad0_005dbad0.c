// FUN_005dbad0 @ 005dbad0 body=[[005dbad0, 005dbb42]]


int FUN_005dbad0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 *in_EAX;
  int iVar5;
  int local_8;
  
  piVar1 = (int *)*in_EAX;
  local_8 = 0;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    cVar4 = (**(code **)(*piVar2 + 0x3c))();
    if (cVar4 != '\0') {
      piVar2 = (int *)piVar2[0xe];
      iVar5 = 0;
      while (piVar2 != (int *)0x0) {
        piVar3 = (int *)*piVar2;
        piVar2 = (int *)piVar2[2];
        cVar4 = (**(code **)(*piVar3 + 0x28))();
        if ((cVar4 != '\0') && (*(char *)(piVar3[0xe] + 0x3c) != '\0')) {
          iVar5 = iVar5 + 1;
        }
      }
      local_8 = local_8 + iVar5;
    }
  }
  return local_8;
}

