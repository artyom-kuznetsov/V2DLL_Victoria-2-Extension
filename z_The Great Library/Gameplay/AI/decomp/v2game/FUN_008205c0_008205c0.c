// FUN_008205c0 @ 008205c0 body=[[008205c0, 00820752]]


int FUN_008205c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x34) * 4);
  local_c = -1000000;
  local_8 = 0;
  iVar4 = FUN_0050e450();
  piVar6 = *(int **)(iVar1 + 0x9d8);
LAB_00820602:
  do {
    if ((piVar6 < *(int **)(iVar1 + 0x9d8)) || (*(int **)(iVar1 + 0x9dc) <= piVar6)) {
      return local_8;
    }
    iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar6 * 4);
    piVar6 = piVar6 + 1;
  } while (((*(int *)(iVar2 + 300) == 0) || (*(int *)(iVar2 + 0x158) == 0)) ||
          (*(int *)(iVar2 + 0x134) != *(int *)(param_1 + 0x34)));
  if (param_2 != 0) goto code_r0x0082065d;
  goto LAB_0082066a;
code_r0x0082065d:
  cVar3 = FUN_005141d0(iVar1,iVar2);
  if (cVar3 != '\0') {
LAB_0082066a:
    iVar7 = 1000;
    if (*(int *)(iVar2 + 0xe8) == iVar4) {
      iVar7 = 0xf4628;
    }
    iVar5 = *(int *)(*(int *)(*(int *)(iVar2 + 0x118) + DAT_01258720 * 4) + 0x20);
    if (0 < iVar5) {
      FUN_00401000(((float)(iVar5 / 1000) + 0.0005) * 1000.0);
      iVar5 = FUN_00b31c00();
      uVar8 = __allmul(iVar5,iVar5 >> 0x1f,5000,0);
      iVar5 = __alldiv(uVar8,1000,0);
      iVar7 = iVar7 + iVar5;
    }
    iVar5 = *(int *)(iVar2 + 0xe0);
    iVar7 = __alldiv((longlong)(*(int *)(*(int *)(iVar2 + 0x9c) + 0x2f8) + 1000) * (longlong)iVar7,
                     1000,0);
    iVar7 = iVar7 + iVar5 * -2000;
    if (local_c < iVar7) {
      local_c = iVar7;
      local_8 = iVar2;
    }
  }
  goto LAB_00820602;
}

