// FUN_007cc010 @ 007cc010 body=[[007cc010, 007cc0bc] [007cc0c0, 007cc1d5] [007cc1e0, 007cc336]]


void FUN_007cc010(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_8;
  
  piVar7 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_007cfe50(piVar7,param_4);
  piVar6 = piVar7;
  while (((param_2 < piVar6 && (cVar3 = FUN_007c6cc0(), cVar3 == '\0')) &&
         (cVar3 = FUN_007c6cc0(), cVar3 == '\0'))) {
    piVar6 = piVar6 + -1;
  }
  do {
    piVar7 = piVar7 + 1;
    piVar2 = piVar7;
    piVar5 = piVar6;
    if ((param_3 <= piVar7) || (cVar3 = FUN_007c6cc0(), cVar3 != '\0')) break;
    cVar3 = FUN_007c6cc0();
  } while (cVar3 == '\0');
joined_r0x007cc0b5:
  do {
    if (param_3 <= piVar7) {
joined_r0x007cc1ce:
      for (; param_2 < piVar5; piVar5 = piVar5 + -1) {
        iVar1 = piVar5[-1];
        iVar4 = *(int *)(iVar1 + 0x158) +
                *(int *)(iVar1 + 0x178) + *(int *)(iVar1 + 0x174) + *(int *)(iVar1 + 0x170) +
                *(int *)(iVar1 + 0x16c) + *(int *)(iVar1 + 0x168) + *(int *)(iVar1 + 0x164) +
                *(int *)(iVar1 + 0x160) + *(int *)(iVar1 + 0x15c);
        iVar1 = *piVar6;
        if (*(int *)(iVar1 + 0x178) + *(int *)(iVar1 + 0x174) + *(int *)(iVar1 + 0x170) +
            *(int *)(iVar1 + 0x16c) + *(int *)(iVar1 + 0x168) + *(int *)(iVar1 + 0x164) +
            *(int *)(iVar1 + 0x160) + *(int *)(iVar1 + 0x15c) + *(int *)(iVar1 + 0x158) <= iVar4) {
          if (*(int *)(iVar1 + 0x178) + *(int *)(iVar1 + 0x174) + *(int *)(iVar1 + 0x170) +
              *(int *)(iVar1 + 0x16c) + *(int *)(iVar1 + 0x168) + *(int *)(iVar1 + 0x164) +
              *(int *)(iVar1 + 0x160) + *(int *)(iVar1 + 0x15c) + *(int *)(iVar1 + 0x158) < iVar4)
          break;
          iVar1 = piVar6[-1];
          piVar6 = piVar6 + -1;
          *piVar6 = piVar5[-1];
          piVar5[-1] = iVar1;
        }
      }
      if (piVar5 == param_2) {
        if (piVar7 == param_3) {
          *param_1 = piVar6;
          param_1[1] = piVar2;
          return;
        }
        if (piVar2 != piVar7) {
          iVar1 = *piVar6;
          *piVar6 = *piVar2;
          *piVar2 = iVar1;
        }
        iVar1 = *piVar6;
        *piVar6 = *piVar7;
        piVar6 = piVar6 + 1;
        *piVar7 = iVar1;
        piVar7 = piVar7 + 1;
        piVar2 = piVar2 + 1;
      }
      else {
        piVar5 = piVar5 + -1;
        if (piVar7 == param_3) {
          piVar6 = piVar6 + -1;
          if (piVar5 != piVar6) {
            iVar1 = *piVar5;
            *piVar5 = *piVar6;
            *piVar6 = iVar1;
          }
          iVar1 = *piVar6;
          *piVar6 = piVar2[-1];
          piVar2[-1] = iVar1;
          piVar2 = piVar2 + -1;
        }
        else {
          iVar1 = *piVar7;
          *piVar7 = *piVar5;
          *piVar5 = iVar1;
          piVar7 = piVar7 + 1;
        }
      }
      goto joined_r0x007cc0b5;
    }
    iVar1 = *piVar6;
    iVar4 = *piVar7;
    local_8 = piVar2;
    if (*(int *)(iVar4 + 0x178) + *(int *)(iVar4 + 0x174) + *(int *)(iVar4 + 0x170) +
        *(int *)(iVar4 + 0x16c) + *(int *)(iVar4 + 0x168) + *(int *)(iVar4 + 0x164) +
        *(int *)(iVar4 + 0x160) + *(int *)(iVar4 + 0x15c) + *(int *)(iVar4 + 0x158) <=
        *(int *)(iVar1 + 0x178) + *(int *)(iVar1 + 0x174) + *(int *)(iVar1 + 0x170) +
        *(int *)(iVar1 + 0x16c) + *(int *)(iVar1 + 0x168) + *(int *)(iVar1 + 0x164) +
        *(int *)(iVar1 + 0x160) + *(int *)(iVar1 + 0x15c) + *(int *)(iVar1 + 0x158)) {
      iVar1 = *piVar6;
      if (*(int *)(iVar4 + 0x178) + *(int *)(iVar4 + 0x174) + *(int *)(iVar4 + 0x170) +
          *(int *)(iVar4 + 0x16c) + *(int *)(iVar4 + 0x168) + *(int *)(iVar4 + 0x164) +
          *(int *)(iVar4 + 0x160) + *(int *)(iVar4 + 0x15c) + *(int *)(iVar4 + 0x158) <
          *(int *)(iVar1 + 0x178) + *(int *)(iVar1 + 0x174) + *(int *)(iVar1 + 0x170) +
          *(int *)(iVar1 + 0x16c) + *(int *)(iVar1 + 0x168) + *(int *)(iVar1 + 0x164) +
          *(int *)(iVar1 + 0x160) + *(int *)(iVar1 + 0x15c) + *(int *)(iVar1 + 0x158))
      goto joined_r0x007cc1ce;
      local_8 = piVar2 + 1;
      iVar1 = *piVar2;
      *piVar2 = *piVar7;
      *piVar7 = iVar1;
    }
    piVar7 = piVar7 + 1;
    piVar2 = local_8;
  } while( true );
}

