// FUN_00690490 @ 00690490 body=[[00690490, 00690635] [00690640, 00690759]]


void FUN_00690490(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_c;
  int *local_8;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00690ec0(piVar5,param_4);
  piVar6 = piVar5 + 1;
  for (; param_2 < piVar5; piVar5 = piVar5 + -1) {
    iVar4 = piVar5[-1];
    iVar1 = *piVar5;
    if ((*(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0) <
         *(int *)(*(int *)(iVar4 + 0xbcc) + 0x28c) + *(int *)(iVar4 + 0xea0)) ||
       (*(int *)(*(int *)(iVar4 + 0xbcc) + 0x28c) + *(int *)(iVar4 + 0xea0) <
        *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0))) break;
  }
  local_8 = piVar6;
  piVar2 = piVar6;
  local_c = piVar5;
  piVar3 = piVar5;
  if (piVar6 < param_3) {
    iVar4 = *piVar5;
    do {
      iVar1 = *piVar6;
      local_8 = piVar6;
      piVar2 = piVar6;
      if ((*(int *)(*(int *)(iVar4 + 0xbcc) + 0x28c) + *(int *)(iVar4 + 0xea0) <
           *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0)) ||
         (iVar4 = *piVar5,
         *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0) <
         *(int *)(*(int *)(iVar4 + 0xbcc) + 0x28c) + *(int *)(iVar4 + 0xea0))) break;
      piVar6 = piVar6 + 1;
      local_8 = piVar6;
      piVar2 = piVar6;
    } while (piVar6 < param_3);
  }
joined_r0x006905ab:
  do {
    if (param_3 <= piVar6) {
joined_r0x0069062e:
      while (piVar7 = local_8, param_2 < piVar5) {
        iVar4 = piVar5[-1];
        iVar1 = *piVar3;
        if (*(int *)(*(int *)(iVar4 + 0xbcc) + 0x28c) + *(int *)(iVar4 + 0xea0) <=
            *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0)) {
          piVar5 = local_c;
          piVar7 = piVar2;
          if (*(int *)(*(int *)(iVar4 + 0xbcc) + 0x28c) + *(int *)(iVar4 + 0xea0) <
              *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0)) break;
          iVar4 = piVar3[-1];
          piVar3 = piVar3 + -1;
          *piVar3 = local_c[-1];
          local_c[-1] = iVar4;
        }
        local_c = local_c + -1;
        local_8 = piVar2;
        piVar5 = local_c;
      }
      if (piVar5 == param_2) {
        if (piVar6 == param_3) {
          param_1[1] = piVar7;
          *param_1 = piVar3;
          return;
        }
        if (piVar7 != piVar6) {
          iVar4 = *piVar3;
          *piVar3 = *piVar7;
          *piVar7 = iVar4;
        }
        iVar4 = *piVar3;
        *piVar3 = *piVar6;
        *piVar6 = iVar4;
        piVar6 = piVar6 + 1;
        local_8 = piVar7 + 1;
        piVar2 = piVar7 + 1;
        piVar3 = piVar3 + 1;
      }
      else {
        piVar5 = piVar5 + -1;
        local_c = piVar5;
        if (piVar6 == param_3) {
          piVar3 = piVar3 + -1;
          if (piVar5 != piVar3) {
            iVar4 = *piVar5;
            *piVar5 = *piVar3;
            *piVar3 = iVar4;
          }
          iVar4 = *piVar3;
          local_8 = piVar7 + -1;
          *piVar3 = piVar7[-1];
          *local_8 = iVar4;
          piVar2 = local_8;
        }
        else {
          iVar4 = *piVar6;
          *piVar6 = *piVar5;
          *piVar5 = iVar4;
          piVar6 = piVar6 + 1;
          local_8 = piVar7;
        }
      }
      goto joined_r0x006905ab;
    }
    iVar4 = *piVar3;
    iVar1 = *piVar6;
    local_8 = piVar2;
    piVar5 = local_c;
    if (*(int *)(*(int *)(iVar4 + 0xbcc) + 0x28c) + *(int *)(iVar4 + 0xea0) <=
        *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0)) {
      if (*(int *)(*(int *)(iVar4 + 0xbcc) + 0x28c) + *(int *)(iVar4 + 0xea0) <
          *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0))
      goto joined_r0x0069062e;
      local_8 = piVar2 + 1;
      iVar4 = *piVar2;
      *piVar2 = iVar1;
      *piVar6 = iVar4;
    }
    piVar6 = piVar6 + 1;
    piVar2 = local_8;
  } while( true );
}

