// FUN_0060dc70 @ 0060dc70 body=[[0060dc70, 0060dcbd] [0060dcc0, 0060dee6]]


uint * FUN_0060dc70(uint *param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *local_c;
  int *local_8;
  
  local_c = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1);
  FUN_0060e7e0(local_c,param_4,param_5);
  piVar5 = local_c + 1;
  if (param_2 < local_c) {
    do {
      if ((*(int *)(*(int *)(*local_c * 0x10 + *(int *)(param_5 + 0xbc)) + param_4 * 4) <
           *(int *)(*(int *)(*(int *)(param_5 + 0xbc) + local_c[-1] * 0x10) + param_4 * 4)) ||
         (*(int *)(*(int *)(*(int *)(param_5 + 0xbc) + local_c[-1] * 0x10) + param_4 * 4) <
          *(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *local_c * 0x10) + param_4 * 4))) break;
      local_c = local_c + -1;
    } while (param_2 < local_c);
  }
  piVar2 = piVar5;
  piVar3 = piVar5;
  local_8 = piVar5;
  piVar4 = local_c;
  if (piVar5 < param_3) {
    do {
      piVar2 = piVar5;
      piVar3 = piVar5;
      local_8 = piVar5;
      if ((*(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *local_c * 0x10) + param_4 * 4) <
           *(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *piVar5 * 0x10) + param_4 * 4)) ||
         (*(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *piVar5 * 0x10) + param_4 * 4) <
          *(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *local_c * 0x10) + param_4 * 4))) break;
      piVar5 = piVar5 + 1;
      piVar2 = piVar5;
      piVar3 = piVar5;
      local_8 = piVar5;
    } while (piVar5 < param_3);
  }
joined_r0x0060dd68:
  do {
    piVar6 = piVar2;
    if (param_3 <= piVar2) {
joined_r0x0060dde0:
      for (; param_2 < local_c; local_c = local_c + -1) {
        if (*(int *)(*(int *)(*(int *)(param_5 + 0xbc) + local_c[-1] * 0x10) + param_4 * 4) <=
            *(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *piVar4 * 0x10) + param_4 * 4)) {
          piVar5 = local_8;
          piVar6 = piVar3;
          if (*(int *)(*(int *)(*(int *)(param_5 + 0xbc) + local_c[-1] * 0x10) + param_4 * 4) <
              *(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *piVar4 * 0x10) + param_4 * 4)) break;
          iVar1 = piVar4[-1];
          piVar4 = piVar4 + -1;
          *piVar4 = local_c[-1];
          local_c[-1] = iVar1;
        }
        piVar5 = local_8;
        piVar6 = piVar3;
      }
      if (local_c == param_2) {
        if (piVar6 == param_3) {
          *param_1 = (uint)piVar4;
          param_1[1] = (uint)piVar5;
          return param_1;
        }
        if (piVar5 != piVar6) {
          iVar1 = *piVar4;
          *piVar4 = *piVar5;
          *piVar5 = iVar1;
        }
        iVar1 = *piVar4;
        *piVar4 = *piVar6;
        piVar5 = piVar5 + 1;
        *piVar6 = iVar1;
        piVar2 = piVar6 + 1;
        piVar3 = piVar6 + 1;
        local_8 = piVar5;
        piVar4 = piVar4 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar6 == param_3) {
          piVar4 = piVar4 + -1;
          if (local_c != piVar4) {
            iVar1 = *local_c;
            *local_c = *piVar4;
            *piVar4 = iVar1;
          }
          iVar1 = *piVar4;
          piVar5 = piVar5 + -1;
          *piVar4 = *piVar5;
          *piVar5 = iVar1;
          piVar2 = piVar6;
          local_8 = piVar5;
        }
        else {
          iVar1 = *piVar6;
          *piVar6 = *local_c;
          *local_c = iVar1;
          piVar2 = piVar6 + 1;
          piVar3 = piVar6 + 1;
        }
      }
      goto joined_r0x0060dd68;
    }
    if (*(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *piVar4 * 0x10) + param_4 * 4) <=
        *(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *piVar2 * 0x10) + param_4 * 4)) {
      piVar5 = local_8;
      piVar6 = piVar3;
      if (*(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *piVar4 * 0x10) + param_4 * 4) <
          *(int *)(*(int *)(*(int *)(param_5 + 0xbc) + *piVar2 * 0x10) + param_4 * 4))
      goto joined_r0x0060dde0;
      iVar1 = *local_8;
      *local_8 = *piVar3;
      local_8 = local_8 + 1;
      *piVar3 = iVar1;
    }
    piVar5 = local_8;
    piVar2 = piVar3 + 1;
    piVar3 = piVar3 + 1;
  } while( true );
}

