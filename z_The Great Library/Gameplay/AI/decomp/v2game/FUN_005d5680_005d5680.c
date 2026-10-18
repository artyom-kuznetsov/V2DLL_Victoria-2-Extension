// FUN_005d5680 @ 005d5680  (requested 005D5680, first bytes: 55 8B EC 83 EC 0C 8B 45)


int * FUN_005d5680(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *local_8;
  
  local_8 = *(int **)(param_1 + 0xe4);
  *param_2 = 0;
  if (local_8 != (int *)0x0) {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + *local_8 * 4) + 0x58);
    iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 0x5c);
    iVar3 = (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24;
    do {
      iVar4 = 0;
      if (0 < iVar3) {
        piVar6 = (int *)(*(int *)(iVar2 + 200) + 4);
        do {
          if (iVar1 == *piVar6) {
            if (-1 < iVar4) {
              iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xdc) + 0x5c) + 200) + 0x10 +
                              iVar4 * 0x24);
              iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0xdc) + 0x9c) + 0x3c8) + 1000;
              FUN_00401000(0x424a0000);
              iVar5 = FUN_00b31c00();
              if (iVar7 < iVar5) {
                iVar7 = iVar5;
              }
              iVar4 = __alldiv((longlong)iVar7 * (longlong)iVar4,1000,0);
              *param_2 = *param_2 + iVar4;
            }
            break;
          }
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 9;
        } while (iVar4 < iVar3);
      }
      local_8 = (int *)local_8[2];
    } while (local_8 != (int *)0x0);
  }
  return param_2;
}

