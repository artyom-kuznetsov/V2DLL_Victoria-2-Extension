// FUN_004b7e30 @ 004b7e30 body=[[004b7e30, 004b7ecf]]


undefined4 FUN_004b7e30(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(in_EAX + 0x5c);
  iVar2 = (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24;
  iVar4 = 0;
  if (0 < iVar2) {
    piVar5 = *(int **)(iVar1 + 200);
    do {
      if ((*piVar5 != 4) &&
         (*(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + piVar5[1] * 4) + 300) != 0)) {
        cVar3 = FUN_0051af10(1);
        if (cVar3 != '\0') {
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 9;
    } while (iVar4 < iVar2);
  }
  return 0;
}

