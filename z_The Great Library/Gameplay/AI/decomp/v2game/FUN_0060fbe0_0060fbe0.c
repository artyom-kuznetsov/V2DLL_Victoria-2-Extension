// FUN_0060fbe0 @ 0060fbe0 body=[[0060fbe0, 0060fddd]]


undefined4 * FUN_0060fbe0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *local_c;
  int *local_8;
  
  piVar7 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00611920(piVar7,param_4);
  piVar9 = piVar7 + 1;
  for (; param_2 < piVar7; piVar7 = piVar7 + -1) {
    uVar2 = *(uint *)(*(int *)(piVar7[-1] + 0x30) + 0x18);
    uVar3 = *(uint *)(*(int *)(*piVar7 + 0x30) + 0x18);
    iVar4 = *(int *)(*(int *)(piVar7[-1] + 0x30) + 0x1c);
    iVar5 = *(int *)(*(int *)(*piVar7 + 0x30) + 0x1c);
    if ((iVar5 < iVar4) ||
       ((((iVar5 <= iVar4 && (uVar3 < uVar2)) || (iVar4 < iVar5)) ||
        ((iVar4 <= iVar5 && (uVar2 < uVar3)))))) break;
  }
  piVar6 = piVar9;
  local_8 = piVar9;
  local_c = piVar7;
  piVar8 = piVar7;
  if (piVar9 < param_3) {
    uVar2 = *(uint *)(*(int *)(*piVar7 + 0x30) + 0x18);
    iVar4 = *(int *)(*(int *)(*piVar7 + 0x30) + 0x1c);
    while( true ) {
      uVar3 = *(uint *)(*(int *)(*piVar9 + 0x30) + 0x18);
      iVar5 = *(int *)(*(int *)(*piVar9 + 0x30) + 0x1c);
      piVar6 = piVar9;
      local_8 = piVar9;
      if (((iVar4 < iVar5) || ((iVar4 <= iVar5 && (uVar2 < uVar3)))) || (iVar5 < iVar4)) break;
      if (((iVar5 <= iVar4) && (uVar3 < uVar2)) ||
         (piVar9 = piVar9 + 1, piVar6 = piVar9, local_8 = piVar9, param_3 <= piVar9)) break;
    }
  }
joined_r0x0060fc97:
  do {
    if (param_3 <= piVar6) {
joined_r0x0060fcfb:
      while (param_2 < piVar7) {
        uVar2 = *(uint *)(*(int *)(piVar7[-1] + 0x30) + 0x18);
        iVar4 = *(int *)(*(int *)(piVar7[-1] + 0x30) + 0x1c);
        uVar3 = *(uint *)(*(int *)(*piVar8 + 0x30) + 0x18);
        iVar5 = *(int *)(*(int *)(*piVar8 + 0x30) + 0x1c);
        if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (uVar2 <= uVar3)))) {
          piVar9 = local_8;
          local_c = piVar7;
          if ((iVar4 < iVar5) || ((iVar4 <= iVar5 && (uVar2 < uVar3)))) break;
          iVar4 = piVar8[-1];
          piVar8 = piVar8 + -1;
          *piVar8 = piVar7[-1];
          piVar7[-1] = iVar4;
        }
        local_c = piVar7 + -1;
        piVar9 = local_8;
        piVar7 = local_c;
      }
      if (piVar7 == param_2) {
        if (piVar6 == param_3) {
          *param_1 = piVar8;
          param_1[1] = piVar9;
          return param_1;
        }
        if (piVar9 != piVar6) {
          iVar4 = *piVar8;
          *piVar8 = *piVar9;
          *piVar9 = iVar4;
        }
        iVar4 = *piVar8;
        *piVar8 = *piVar6;
        piVar9 = piVar9 + 1;
        *piVar6 = iVar4;
        piVar6 = piVar6 + 1;
        local_8 = piVar9;
        piVar8 = piVar8 + 1;
      }
      else {
        piVar7 = piVar7 + -1;
        local_c = piVar7;
        if (piVar6 == param_3) {
          piVar8 = piVar8 + -1;
          if (piVar7 != piVar8) {
            iVar4 = *piVar7;
            *piVar7 = *piVar8;
            *piVar8 = iVar4;
          }
          piVar1 = piVar9 + -1;
          iVar4 = *piVar8;
          piVar9 = piVar9 + -1;
          *piVar8 = *piVar1;
          *piVar9 = iVar4;
          local_8 = piVar9;
        }
        else {
          iVar4 = *piVar6;
          *piVar6 = *piVar7;
          *piVar7 = iVar4;
          piVar6 = piVar6 + 1;
        }
      }
      goto joined_r0x0060fc97;
    }
    uVar2 = *(uint *)(*(int *)(*piVar8 + 0x30) + 0x18);
    iVar4 = *(int *)(*(int *)(*piVar8 + 0x30) + 0x1c);
    iVar5 = *(int *)(*piVar6 + 0x30);
    uVar3 = *(uint *)(iVar5 + 0x18);
    iVar5 = *(int *)(iVar5 + 0x1c);
    piVar7 = local_c;
    if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (uVar2 <= uVar3)))) {
      piVar9 = local_8;
      if ((iVar4 < iVar5) || ((iVar4 <= iVar5 && (uVar2 < uVar3)))) goto joined_r0x0060fcfb;
      iVar4 = *local_8;
      *local_8 = *piVar6;
      *piVar6 = iVar4;
      local_8 = local_8 + 1;
    }
    piVar9 = local_8;
    piVar6 = piVar6 + 1;
  } while( true );
}

