// FUN_005dcbd0 @ 005dcbd0 body=[[005dcbd0, 005dcd17]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005dcbd0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  if ((_DAT_013f1cb8 & 1) == 0) {
    _DAT_013f1cb8 = _DAT_013f1cb8 | 1;
    FUN_00401000(0x44a65000);
    DAT_013f1cb4 = FUN_00b31c00();
  }
  iVar4 = DAT_013f1cb4;
  piVar6 = (int *)*param_1;
  if (piVar6 != (int *)0x0) {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*piVar6 + 0xc4) * 4) + 0xbcc);
    iVar2 = *(int *)(iVar1 + 0x70);
    if (DAT_013f1cb4 == 0) {
      iVar4 = -1;
    }
    else if (iVar2 + 0x189373U < 0x39580e) {
      iVar4 = (iVar2 * 1000) / DAT_013f1cb4;
    }
    else {
      uVar7 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
      iVar4 = __alldiv(uVar7,iVar4,iVar4 >> 0x1f);
    }
    param_1 = (int *)(iVar4 + 1000);
    if (*(char *)(iVar1 + 0x2a4) != '\0') {
      FUN_00401000(0x43c84000);
      iVar4 = FUN_00b31c00();
      param_1 = (int *)((int)param_1 + iVar4);
    }
    do {
      piVar5 = (int *)*piVar6;
      piVar6 = (int *)piVar6[2];
      cVar3 = (**(code **)(*piVar5 + 0x38))();
      if (cVar3 == '\0') {
        piVar5 = (int *)(**(code **)(*piVar5 + 100))(local_c);
        iVar4 = *piVar5;
        piVar5 = param_3;
      }
      else {
        piVar5 = (int *)(**(code **)(*piVar5 + 100))(local_8);
        iVar4 = __alldiv((longlong)*piVar5 * (longlong)(int)param_1,1000,0);
        piVar5 = param_2;
      }
      *piVar5 = *piVar5 + iVar4;
    } while (piVar6 != (int *)0x0);
  }
  return;
}

