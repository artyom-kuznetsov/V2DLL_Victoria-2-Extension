// FUN_0095b4e0 @ 0095b4e0 body=[[0095b4e0, 0095b739]]


int * FUN_0095b4e0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba01c1;
  local_10 = ExceptionList;
  iVar1 = param_1[0x1b];
  ExceptionList = &local_10;
  piVar6 = (int *)FUN_0095b0d0(param_1,param_2);
  local_18 = param_1[0x19];
  if (((char)piVar6[0xfb] != '\0') &&
     (*(int *)(*(int *)(local_18 + 0x188) + 0x268) != *(int *)(local_18 + 0x58))) {
    local_18 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                       *(int *)(*(int *)(local_18 + 0x188) + 0x268) * 4);
  }
  if (DAT_01258a10 == (int *)0x0) {
    piVar7 = (int *)FUN_00aae9af(0x278);
    local_8 = 0;
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      FUN_00954a40(piVar7);
      *piVar7 = (int)CNullPop::vftable;
    }
    local_8 = 0xffffffff;
    DAT_01258a10 = piVar7;
  }
  piVar7 = *(int **)(piVar6[10] * 0x10 + *(int *)(local_18 + 0x194));
  piVar4 = DAT_01258a10;
  while (piVar3 = piVar4, piVar2 = piVar7, piVar2 != (int *)0x0) {
    piVar7 = (int *)piVar2[0x9f];
    piVar4 = piVar3;
    if ((piVar2 != param_1) &&
       ((((*(int *)(piVar2[0x1a] + 0x30) == -1 || (piVar2[0x16] < *(int *)(piVar2[0x1a] + 0x30))) &&
         (cVar5 = (**(code **)(*piVar3 + 0x20))(), piVar4 = piVar2, cVar5 != '\0')) &&
        ((piVar2[0x1b] != iVar1 || (piVar3[0x1b] == iVar1)))))) {
      piVar4 = piVar3;
    }
  }
  if ((((char)piVar3[0x13] == '\0') && (*(char *)(*(int *)(param_2 + 0x14) + 0x4c) != '\0')) &&
     (*(char *)((int)piVar6 + 0x3db) != '\0')) {
    if (DAT_01258a10 == (int *)0x0) {
      piVar7 = (int *)FUN_00aae9af(0x278);
      local_8 = 1;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        FUN_00954a40(piVar7);
        *piVar7 = (int)CNullPop::vftable;
      }
      local_8 = 0xffffffff;
      DAT_01258a10 = piVar7;
    }
  }
  else {
    cVar5 = (**(code **)(*piVar3 + 0x20))();
    if (cVar5 != '\0') {
      ExceptionList = local_10;
      return piVar3;
    }
  }
  cVar5 = (**(code **)(*piVar6 + 0x18))();
  if (cVar5 == '\0') {
    piVar6 = DAT_01258a10;
    if (DAT_01258a10 == (int *)0x0) {
      piVar6 = (int *)FUN_00aae9af(0x278);
      local_8 = 2;
      if (piVar6 == (int *)0x0) {
        DAT_01258a10 = (int *)0x0;
        ExceptionList = local_10;
        return (int *)0x0;
      }
      FUN_00954a40(piVar6);
      *piVar6 = (int)CNullPop::vftable;
      DAT_01258a10 = piVar6;
      ExceptionList = local_10;
      return piVar6;
    }
  }
  else {
    piVar6 = (int *)FUN_004b8d30(local_18,piVar6);
    FUN_00955a00();
  }
  ExceptionList = local_10;
  return piVar6;
}

