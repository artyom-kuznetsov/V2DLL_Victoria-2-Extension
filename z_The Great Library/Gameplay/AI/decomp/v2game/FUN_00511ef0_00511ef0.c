// FUN_00511ef0 @ 00511ef0 body=[[00511ef0, 0051205c] [00512060, 00512107] [00512110, 0051214b]]


undefined4
FUN_00511ef0(int param_1,int param_2,char param_3,char param_4,char param_5,char param_6,
            char param_7)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  
  if (*(char *)(in_EAX + 0x131) == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_2 + 0x118) + *(int *)(in_EAX + 0x134) * 4);
  }
  iVar4 = *(int *)(iVar4 + 0x20) / 1000;
  if (param_4 == '\0') {
    if ((*(char *)(*(int *)(in_EAX + 0x58) + *(int *)(*(int *)(param_1 + 0xbcc) + 0x2fc)) == '\0')
       && (*(char *)(in_EAX + 0x130) == '\0')) {
      return 0;
    }
    if (((*(char *)(in_EAX + 0x130) == '\0') || (iVar4 + 1 != 1)) &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0xbcc) + 8) + *(int *)(in_EAX + 0x58) * 4) < iVar4 + 1)
       ) {
      return 0;
    }
  }
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x134)) {
      if (((param_7 == '\0') && (*(char *)(param_1 + 0xae8) == '\0')) &&
         (*(char *)(in_EAX + 0x138) != '\0')) {
        return 0;
      }
    }
    else {
      if (((*(char *)(param_2 + 0x130) == 'R') && (*(char *)(param_2 + 0x131) == 'E')) &&
         (*(char *)(param_2 + 0x132) == 'B')) {
        return 0;
      }
      if ((*(char *)(in_EAX + 0x138) != '\0') &&
         (((cVar3 = FUN_0052fba0(), cVar3 == '\0' || (*(char *)(param_1 + 0xb38) == '\0')) ||
          (*(int *)(param_2 + 0x110) != 0)))) {
        return 0;
      }
    }
  }
  else if (*(char *)(param_1 + 0xb00) == '\0') {
    return 0;
  }
  iVar5 = *(int *)(in_EAX + 0xc4);
  if (iVar4 < iVar5) {
    if (param_6 == '\0') {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0xbcc) + 8) + *(int *)(in_EAX + 0x58) * 4);
    }
    if (iVar4 < (int)(iVar5 - (uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_2 + 0x5c) + 0x14) +
                                                      0x34) + *(int *)(in_EAX + 0x58)))) {
      if (param_5 == '\0') {
        piVar1 = *(int **)(param_2 + 0xd8);
        do {
          if (piVar1 == (int *)0x0) goto LAB_00512082;
          piVar2 = (int *)*piVar1;
          piVar1 = (int *)piVar1[2];
          cVar3 = (**(code **)(*piVar2 + 0x30))();
        } while ((cVar3 == '\0') || (piVar2[0x16] != in_EAX));
      }
      else {
LAB_00512082:
        if (((*(int *)(param_2 + 0x158) != 0) || (*(char *)(in_EAX + 0xbd) == '\0')) &&
           ((*(char *)(in_EAX + 0xbe) == '\0' ||
            (cVar3 = FUN_00512150(param_2,in_EAX), cVar3 != '\0')))) {
          for (piVar1 = *(int **)(in_EAX + 0x108); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2])
          {
            for (piVar2 = *(int **)(in_EAX + 0x108); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]
                ) {
              if (*piVar2 == *piVar1) {
                cVar3 = FUN_004b6090();
                if (cVar3 != '\0') {
                  return 0;
                }
                break;
              }
            }
          }
          piVar1 = *(int **)(in_EAX + 0xe8);
          while( true ) {
            if (piVar1 == (int *)0x0) {
              return 1;
            }
            if ((*(char *)(*piVar1 + 0x131) == '\0') ||
               (*(int *)(*(int *)(*(int *)(param_2 + 0x118) + *(int *)(*piVar1 + 0x134) * 4) + 0x20)
                <= DAT_0125ceac)) break;
            piVar1 = (int *)piVar1[2];
          }
        }
      }
    }
  }
  return 0;
}

