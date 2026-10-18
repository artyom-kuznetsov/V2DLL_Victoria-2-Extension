// FUN_0054be80 @ 0054be80 body=[[0054be80, 0054bfdc] [0054bfe0, 0054c309] [0054c310, 0054c515]]


void FUN_0054be80(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int local_18;
  int *local_14;
  int *local_c;
  int *local_8;
  
  local_8 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1);
  FUN_00555d40(local_8,param_4);
  local_c = local_8 + 1;
  for (; param_2 < local_8; local_8 = local_8 + -1) {
    piVar8 = (int *)local_8[-1];
    piVar9 = (int *)*local_8;
    cVar6 = (**(code **)(*piVar8 + 0x38))();
    if (cVar6 == '\0') {
      piVar8 = (int *)piVar8[0xe];
      local_14 = (int *)0x0;
      while (piVar8 != (int *)0x0) {
        piVar1 = (int *)*piVar8;
        piVar8 = (int *)piVar8[2];
        cVar6 = (**(code **)(*piVar1 + 0x28))();
        if ((cVar6 != '\0') && (*(char *)(piVar1[0xe] + 0x3c) == '\0')) {
          local_14 = (int *)((int)local_14 + 1);
        }
      }
    }
    else {
      local_14 = (int *)piVar8[0x10];
    }
    cVar6 = (**(code **)(*piVar9 + 0x38))();
    if (cVar6 == '\0') {
      piVar8 = (int *)piVar9[0xe];
      iVar7 = 0;
      while (piVar8 != (int *)0x0) {
        piVar9 = (int *)*piVar8;
        piVar8 = (int *)piVar8[2];
        cVar6 = (**(code **)(*piVar9 + 0x28))();
        if ((cVar6 != '\0') && (*(char *)(piVar9[0xe] + 0x3c) == '\0')) {
          iVar7 = iVar7 + 1;
        }
      }
    }
    else {
      iVar7 = piVar9[0x10];
    }
    if (iVar7 < (int)local_14) break;
    piVar8 = (int *)*local_8;
    piVar9 = (int *)local_8[-1];
    cVar6 = (**(code **)(*piVar8 + 0x38))();
    if (cVar6 == '\0') {
      piVar8 = (int *)piVar8[0xe];
      local_14 = (int *)0x0;
      while (piVar8 != (int *)0x0) {
        piVar1 = (int *)*piVar8;
        piVar8 = (int *)piVar8[2];
        cVar6 = (**(code **)(*piVar1 + 0x28))();
        if ((cVar6 != '\0') && (*(char *)(piVar1[0xe] + 0x3c) == '\0')) {
          local_14 = (int *)((int)local_14 + 1);
        }
      }
    }
    else {
      local_14 = (int *)piVar8[0x10];
    }
    cVar6 = (**(code **)(*piVar9 + 0x38))();
    if (cVar6 == '\0') {
      piVar8 = (int *)piVar9[0xe];
      iVar7 = 0;
      while (piVar8 != (int *)0x0) {
        piVar9 = (int *)*piVar8;
        piVar8 = (int *)piVar8[2];
        cVar6 = (**(code **)(*piVar9 + 0x28))();
        if ((cVar6 != '\0') && (*(char *)(piVar9[0xe] + 0x3c) == '\0')) {
          iVar7 = iVar7 + 1;
        }
      }
    }
    else {
      iVar7 = piVar9[0x10];
    }
    if (iVar7 < (int)local_14) break;
  }
  piVar8 = local_c;
  piVar9 = local_c;
  piVar1 = local_c;
  local_14 = local_8;
  if (local_c < param_3) {
    while( true ) {
      piVar8 = (int *)*local_c;
      piVar9 = (int *)*local_8;
      cVar6 = (**(code **)(*piVar8 + 0x38))();
      if (cVar6 == '\0') {
        piVar8 = (int *)piVar8[0xe];
        local_14 = (int *)0x0;
        while (piVar8 != (int *)0x0) {
          piVar1 = (int *)*piVar8;
          piVar8 = (int *)piVar8[2];
          cVar6 = (**(code **)(*piVar1 + 0x28))();
          if ((cVar6 != '\0') && (*(char *)(piVar1[0xe] + 0x3c) == '\0')) {
            local_14 = (int *)((int)local_14 + 1);
          }
        }
      }
      else {
        local_14 = (int *)piVar8[0x10];
      }
      cVar6 = (**(code **)(*piVar9 + 0x38))();
      if (cVar6 == '\0') {
        piVar8 = (int *)piVar9[0xe];
        iVar7 = 0;
        while (piVar8 != (int *)0x0) {
          piVar9 = (int *)*piVar8;
          piVar8 = (int *)piVar8[2];
          cVar6 = (**(code **)(*piVar9 + 0x28))();
          if ((cVar6 != '\0') && (*(char *)(piVar9[0xe] + 0x3c) == '\0')) {
            iVar7 = iVar7 + 1;
          }
        }
      }
      else {
        iVar7 = piVar9[0x10];
      }
      bVar5 = iVar7 < (int)local_14;
      piVar8 = local_c;
      piVar9 = local_c;
      piVar1 = local_c;
      local_14 = local_8;
      if (bVar5) break;
      piVar2 = (int *)*local_8;
      piVar3 = (int *)*local_c;
      cVar6 = (**(code **)(*piVar2 + 0x38))();
      if (cVar6 == '\0') {
        piVar2 = (int *)piVar2[0xe];
        local_14 = (int *)0x0;
        while (piVar2 != (int *)0x0) {
          piVar4 = (int *)*piVar2;
          piVar2 = (int *)piVar2[2];
          cVar6 = (**(code **)(*piVar4 + 0x28))();
          if ((cVar6 != '\0') && (*(char *)(piVar4[0xe] + 0x3c) == '\0')) {
            local_14 = (int *)((int)local_14 + 1);
          }
        }
      }
      else {
        local_14 = (int *)piVar2[0x10];
      }
      cVar6 = (**(code **)(*piVar3 + 0x38))();
      if (cVar6 == '\0') {
        piVar2 = (int *)piVar3[0xe];
        iVar7 = 0;
        while (piVar2 != (int *)0x0) {
          piVar3 = (int *)*piVar2;
          piVar2 = (int *)piVar2[2];
          cVar6 = (**(code **)(*piVar3 + 0x28))();
          if ((cVar6 != '\0') && (*(char *)(piVar3[0xe] + 0x3c) == '\0')) {
            iVar7 = iVar7 + 1;
          }
        }
      }
      else {
        iVar7 = piVar3[0x10];
      }
      bVar5 = iVar7 < (int)local_14;
      local_14 = local_8;
      if ((bVar5) ||
         (local_c = local_c + 1, piVar8 = local_c, piVar9 = local_c, piVar1 = local_c,
         param_3 <= local_c)) break;
    }
  }
joined_r0x0054c183:
  do {
    if (param_3 <= piVar8) {
joined_r0x0054c302:
      for (; param_2 < local_14; local_14 = local_14 + -1) {
        piVar2 = (int *)local_14[-1];
        piVar3 = (int *)*local_8;
        cVar6 = (**(code **)(*piVar2 + 0x38))();
        if (cVar6 == '\0') {
          piVar2 = (int *)piVar2[0xe];
          local_18 = 0;
          while (piVar8 = piVar9, piVar2 != (int *)0x0) {
            piVar8 = (int *)*piVar2;
            piVar2 = (int *)piVar2[2];
            cVar6 = (**(code **)(*piVar8 + 0x28))();
            if ((cVar6 != '\0') && (*(char *)(piVar8[0xe] + 0x3c) == '\0')) {
              local_18 = local_18 + 1;
            }
          }
        }
        else {
          local_18 = piVar2[0x10];
        }
        cVar6 = (**(code **)(*piVar3 + 0x38))();
        if (cVar6 == '\0') {
          piVar2 = (int *)piVar3[0xe];
          iVar7 = 0;
          while (piVar8 = piVar9, piVar2 != (int *)0x0) {
            piVar8 = (int *)*piVar2;
            piVar2 = (int *)piVar2[2];
            cVar6 = (**(code **)(*piVar8 + 0x28))();
            if ((cVar6 != '\0') && (*(char *)(piVar8[0xe] + 0x3c) == '\0')) {
              iVar7 = iVar7 + 1;
            }
          }
        }
        else {
          iVar7 = piVar3[0x10];
        }
        if (local_18 <= iVar7) {
          piVar2 = (int *)*local_8;
          piVar3 = (int *)local_14[-1];
          cVar6 = (**(code **)(*piVar2 + 0x38))();
          if (cVar6 == '\0') {
            piVar2 = (int *)piVar2[0xe];
            local_18 = 0;
            while (piVar8 = piVar9, piVar2 != (int *)0x0) {
              piVar8 = (int *)*piVar2;
              piVar2 = (int *)piVar2[2];
              cVar6 = (**(code **)(*piVar8 + 0x28))();
              if ((cVar6 != '\0') && (*(char *)(piVar8[0xe] + 0x3c) == '\0')) {
                local_18 = local_18 + 1;
              }
            }
          }
          else {
            local_18 = piVar2[0x10];
          }
          cVar6 = (**(code **)(*piVar3 + 0x38))();
          if (cVar6 == '\0') {
            piVar2 = (int *)piVar3[0xe];
            iVar7 = 0;
            while (piVar8 = piVar9, piVar2 != (int *)0x0) {
              piVar8 = (int *)*piVar2;
              piVar2 = (int *)piVar2[2];
              cVar6 = (**(code **)(*piVar8 + 0x28))();
              if ((cVar6 != '\0') && (*(char *)(piVar8[0xe] + 0x3c) == '\0')) {
                iVar7 = iVar7 + 1;
              }
            }
          }
          else {
            iVar7 = piVar3[0x10];
          }
          if (iVar7 < local_18) break;
          iVar7 = local_8[-1];
          local_8 = local_8 + -1;
          *local_8 = local_14[-1];
          local_14[-1] = iVar7;
        }
      }
      if (local_14 == param_2) {
        if (piVar8 == param_3) {
          *param_1 = local_8;
          param_1[1] = piVar1;
          return;
        }
        if (piVar1 != piVar8) {
          iVar7 = *local_8;
          *local_8 = *piVar1;
          *piVar1 = iVar7;
        }
        iVar7 = *local_8;
        *local_8 = *piVar8;
        piVar9 = piVar8 + 1;
        *piVar8 = iVar7;
        piVar8 = piVar9;
        piVar1 = piVar1 + 1;
        local_8 = local_8 + 1;
      }
      else {
        local_14 = local_14 + -1;
        if (piVar8 == param_3) {
          local_8 = local_8 + -1;
          if (local_14 != local_8) {
            iVar7 = *local_14;
            *local_14 = *local_8;
            *local_8 = iVar7;
          }
          iVar7 = *local_8;
          *local_8 = piVar1[-1];
          piVar1[-1] = iVar7;
          piVar1 = piVar1 + -1;
        }
        else {
          iVar7 = *piVar8;
          *piVar8 = *local_14;
          *local_14 = iVar7;
          piVar8 = piVar8 + 1;
          piVar9 = piVar8;
        }
      }
      goto joined_r0x0054c183;
    }
    piVar2 = (int *)*local_8;
    piVar3 = (int *)*piVar8;
    cVar6 = (**(code **)(*piVar2 + 0x38))();
    if (cVar6 == '\0') {
      piVar2 = (int *)piVar2[0xe];
      local_18 = 0;
      while (piVar2 != (int *)0x0) {
        piVar4 = (int *)*piVar2;
        piVar2 = (int *)piVar2[2];
        cVar6 = (**(code **)(*piVar4 + 0x28))();
        if ((cVar6 != '\0') && (*(char *)(piVar4[0xe] + 0x3c) == '\0')) {
          local_18 = local_18 + 1;
        }
      }
    }
    else {
      local_18 = piVar2[0x10];
    }
    cVar6 = (**(code **)(*piVar3 + 0x38))();
    if (cVar6 == '\0') {
      piVar2 = (int *)piVar3[0xe];
      iVar7 = 0;
      while (piVar8 = piVar9, piVar2 != (int *)0x0) {
        piVar8 = (int *)*piVar2;
        piVar2 = (int *)piVar2[2];
        cVar6 = (**(code **)(*piVar8 + 0x28))();
        if ((cVar6 != '\0') && (*(char *)(piVar8[0xe] + 0x3c) == '\0')) {
          iVar7 = iVar7 + 1;
        }
      }
    }
    else {
      iVar7 = piVar3[0x10];
    }
    local_c = piVar1;
    if (local_18 <= iVar7) {
      piVar2 = (int *)*piVar8;
      piVar3 = (int *)*local_8;
      cVar6 = (**(code **)(*piVar2 + 0x38))();
      if (cVar6 == '\0') {
        piVar2 = (int *)piVar2[0xe];
        local_18 = 0;
        while (piVar8 = piVar9, piVar2 != (int *)0x0) {
          piVar8 = (int *)*piVar2;
          piVar2 = (int *)piVar2[2];
          cVar6 = (**(code **)(*piVar8 + 0x28))();
          if ((cVar6 != '\0') && (*(char *)(piVar8[0xe] + 0x3c) == '\0')) {
            local_18 = local_18 + 1;
          }
        }
      }
      else {
        local_18 = piVar2[0x10];
      }
      cVar6 = (**(code **)(*piVar3 + 0x38))();
      if (cVar6 == '\0') {
        piVar2 = (int *)piVar3[0xe];
        iVar7 = 0;
        while (piVar8 = piVar9, piVar2 != (int *)0x0) {
          piVar8 = (int *)*piVar2;
          piVar2 = (int *)piVar2[2];
          cVar6 = (**(code **)(*piVar8 + 0x28))();
          if ((cVar6 != '\0') && (*(char *)(piVar8[0xe] + 0x3c) == '\0')) {
            iVar7 = iVar7 + 1;
          }
        }
      }
      else {
        iVar7 = piVar3[0x10];
      }
      if (iVar7 < local_18) goto joined_r0x0054c302;
      local_c = piVar1 + 1;
      iVar7 = *piVar1;
      *piVar1 = *piVar8;
      *piVar8 = iVar7;
    }
    piVar8 = piVar8 + 1;
    piVar9 = piVar8;
    piVar1 = local_c;
  } while( true );
}

