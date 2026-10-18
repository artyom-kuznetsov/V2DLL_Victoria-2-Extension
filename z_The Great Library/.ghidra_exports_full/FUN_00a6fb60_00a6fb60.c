// FUN_00a6fb60 @ 00a6fb60 body=[[00a6fb60, 00a6fc11]]


void FUN_00a6fb60(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  int *in_EAX;
  undefined4 *puVar6;
  char *in_ECX;
  char cVar7;
  
  piVar1 = (int *)*in_EAX;
  if (piVar1 != (int *)0x0) {
    cVar5 = *in_ECX;
    if (*(char *)((int)piVar1 + 0x41) != cVar5) {
      if ((*(char *)((int)piVar1 + 0x41) == '\0') || (piVar1[2] == 0)) {
        cVar7 = '\0';
      }
      else {
        cVar7 = '\x01';
      }
      *(char *)((int)piVar1 + 0x41) = cVar5;
      if ((cVar5 == '\0') || (piVar1[2] == 0)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if (cVar5 != cVar7) {
        iVar2 = *piVar1;
        if (cVar5 != '\0') {
          FUN_0068f390();
          return;
        }
        puVar3 = *(undefined4 **)(iVar2 + 0x10);
        for (puVar6 = puVar3;
            (puVar6 != *(undefined4 **)(iVar2 + 0x14) && ((int *)*puVar6 != piVar1));
            puVar6 = puVar6 + 1) {
        }
        puVar3[(int)puVar6 - (int)puVar3 >> 2] =
             puVar3[((int)*(undefined4 **)(iVar2 + 0x14) - (int)puVar3 >> 2) + -1];
        iVar4 = *(int *)(iVar2 + 0x14);
        if (((iVar4 - *(int *)(iVar2 + 0x10) & 0xfffffffcU) != 0) &&
           (*(int *)(iVar2 + 0x10) != iVar4)) {
          *(int *)(iVar2 + 0x14) = iVar4 + -4;
        }
      }
    }
  }
  return;
}

