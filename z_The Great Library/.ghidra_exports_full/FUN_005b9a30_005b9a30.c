// FUN_005b9a30 @ 005b9a30 body=[[005b9a30, 005b9bc0]]


undefined4 FUN_005b9a30(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int local_18;
  
  cVar3 = FUN_005b9810(param_1,param_2,param_3,param_4,param_5);
  if (cVar3 == '\0') {
    return 0;
  }
  if (param_2 != param_4) {
    FUN_00401000(0x3f000000);
    local_18 = FUN_00b31c00();
    cVar3 = (**(code **)(*param_1 + 0x3c))();
    if (cVar3 == '\0') {
      piVar1 = *(int **)(param_4 + 0xec);
      while (piVar1 != (int *)0x0) {
        piVar4 = (int *)*piVar1;
        piVar1 = (int *)piVar1[2];
        cVar3 = (**(code **)(*piVar4 + 0x3c))();
        if (cVar3 == '\0') {
          iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x31] * 4);
          if ((piVar4[0x31] != *(int *)(iVar2 + 0x20)) &&
             (((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + piVar4[0x31] * 4) + 0x34) != 0 ||
               ((((char)piVar4[0x30] == 'R' && (*(char *)((int)piVar4 + 0xc1) == 'E')) &&
                (*(char *)((int)piVar4 + 0xc2) == 'B')))) ||
              (((*(char *)(iVar2 + 0x1c) == 'R' && (*(char *)(iVar2 + 0x1d) == 'E')) &&
               (*(char *)(iVar2 + 0x1e) == 'B')))))) {
            if ((((char)piVar4[0x30] == 'R') && (*(char *)((int)piVar4 + 0xc1) == 'E')) &&
               ((*(char *)((int)piVar4 + 0xc2) == 'B' && (*(int *)(param_4 + 300) != param_1[0x31]))
               )) {
              return 0;
            }
            piVar4 = (int *)FUN_005cd690(piVar4);
            local_18 = local_18 + *piVar4;
          }
        }
      }
    }
    else {
      local_18 = FUN_005dc940(param_1[0x30],param_1[0x31]);
      local_18 = local_18 * 1000;
    }
    if (param_1[0x23] < local_18) {
      return 0;
    }
  }
  return 1;
}

