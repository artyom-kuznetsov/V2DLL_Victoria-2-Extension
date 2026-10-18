// FUN_005cfd40 @ 005cfd40 body=[[005cfd40, 005cfe8d]]


void FUN_005cfd40(void)

{
  int *piVar1;
  char cVar2;
  int *in_EAX;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  if (in_EAX[0x1d] == 0) {
    cVar2 = (**(code **)(*in_EAX + 0x38))();
    if (((cVar2 != '\0') && (iVar3 = (**(code **)(*in_EAX + 0x2c))(), *(int *)(iVar3 + 0x1b4) != 0))
       && (iVar3 = (**(code **)(*in_EAX + 0x2c))(),
          *(char *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x1b4) + 0xdc) + 0x5c) + 0x2a) == '\0')) {
      return;
    }
    iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_EAX[0x31] * 4);
    iVar5 = in_EAX[0x2c];
    if ((((char)in_EAX[0x30] == 'R') && (*(char *)((int)in_EAX + 0xc1) == 'E')) &&
       (*(char *)((int)in_EAX + 0xc2) == 'B')) {
      iVar5 = 1000;
    }
    iVar3 = __alldiv((longlong)
                     (*(int *)(*(int *)(in_EAX[0x36] + 0x48) + 0x18) +
                     *(int *)(*(int *)(iVar3 + 0xbcc) + 0x3c) +
                     *(int *)(*(int *)(iVar3 + 0xa60) + 0x58) + 1000) * (longlong)iVar5,1000,0);
    piVar6 = (int *)in_EAX[0xe];
    if (piVar6 != (int *)0x0) {
      FUN_00401000(0x43488000);
      iVar5 = FUN_00b31c00();
      iVar3 = __alldiv((longlong)iVar5 * (longlong)iVar3,1000,0);
      do {
        piVar1 = (int *)*piVar6;
        piVar6 = (int *)piVar6[2];
        piVar1[0x10] = piVar1[0x10] + iVar3;
        piVar4 = (int *)(**(code **)(*piVar1 + 0x34))(local_8,0);
        if (*piVar4 < piVar1[0x10]) {
          piVar4 = (int *)(**(code **)(*piVar1 + 0x34))(local_c,0);
          piVar1[0x10] = *piVar4;
        }
        if (piVar1[0x10] < 0) {
          piVar1[0x10] = 0;
        }
      } while (piVar6 != (int *)0x0);
    }
  }
  return;
}

