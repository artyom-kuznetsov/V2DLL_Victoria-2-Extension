// FUN_0095bc10 @ 0095bc10 body=[[0095bc10, 0095bdef]]


int * FUN_0095bc10(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  int *local_8;
  
  local_8 = (int *)0xffffffff;
  puStack_c = &LAB_00ba0196;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar4 = (int *)FUN_0095b740(param_1,param_2);
  piVar6 = DAT_01258a10;
  param_2 = param_1[0x19];
  if (((char)piVar4[0xfb] != '\0') &&
     (*(int *)(*(int *)(param_2 + 0x188) + 0x268) != *(int *)(param_2 + 0x58))) {
    param_2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                      *(int *)(*(int *)(param_2 + 0x188) + 0x268) * 4);
  }
  if (DAT_01258a10 == (int *)0x0) {
    piVar5 = (int *)FUN_00aae9af(0x278);
    local_8 = piVar6;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_00954a40(piVar5);
      *piVar5 = (int)CNullPop::vftable;
    }
    local_8 = (int *)0xffffffff;
    DAT_01258a10 = piVar5;
  }
  piVar6 = *(int **)(piVar4[10] * 0x10 + *(int *)(param_2 + 0x194));
  piVar5 = DAT_01258a10;
  while (piVar2 = piVar5, piVar1 = piVar6, piVar1 != (int *)0x0) {
    piVar6 = (int *)piVar1[0x9f];
    piVar5 = piVar2;
    if (((piVar1 != param_1) &&
        (((*(int *)(piVar1[0x1a] + 0x30) == -1 || (piVar1[0x16] < *(int *)(piVar1[0x1a] + 0x30))) &&
         (cVar3 = (**(code **)(*piVar2 + 0x20))(), piVar5 = piVar1, cVar3 != '\0')))) &&
       ((piVar1[0x1b] != param_1[0x1b] || (piVar2[0x1b] == param_1[0x1b])))) {
      piVar5 = piVar2;
    }
  }
  cVar3 = (**(code **)(*piVar2 + 0x20))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*piVar4 + 0x18))();
    if (cVar3 == '\0') {
      piVar6 = DAT_01258a10;
      if (DAT_01258a10 == (int *)0x0) {
        piVar6 = (int *)FUN_00aae9af(0x278);
        local_8 = (int *)0x1;
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
      piVar6 = (int *)FUN_004b8d30(param_2,piVar4);
      FUN_00955a00();
    }
    ExceptionList = local_10;
    return piVar6;
  }
  ExceptionList = local_10;
  return piVar2;
}

