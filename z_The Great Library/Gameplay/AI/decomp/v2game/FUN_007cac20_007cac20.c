// FUN_007cac20 @ 007cac20 body=[[007cac20, 007cace7] [007cacf0, 007cad55] [007cad60, 007cae3d]]


undefined4 * FUN_007cac20(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_8;
  
  piVar7 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_007ce490(piVar7,param_3 + -1,param_4);
  local_8 = piVar7 + 1;
  for (; param_2 < piVar7; piVar7 = piVar7 + -1) {
    uVar2 = *(uint *)(piVar7[-1] + 0x118);
    uVar3 = *(uint *)(*piVar7 + 0x118);
    iVar4 = *(int *)(piVar7[-1] + 0x11c);
    iVar5 = *(int *)(*piVar7 + 0x11c);
    if ((iVar4 < iVar5) ||
       ((((iVar4 <= iVar5 && (uVar2 < uVar3)) || (iVar5 < iVar4)) ||
        ((iVar5 <= iVar4 && (uVar3 < uVar2)))))) break;
  }
  piVar6 = local_8;
  piVar1 = local_8;
  piVar8 = piVar7;
  if (local_8 < param_3) {
    uVar2 = *(uint *)(*piVar7 + 0x118);
    iVar4 = *(int *)(*piVar7 + 0x11c);
    while( true ) {
      uVar3 = *(uint *)(*local_8 + 0x118);
      iVar5 = *(int *)(*local_8 + 0x11c);
      piVar6 = local_8;
      piVar1 = local_8;
      if (((iVar5 < iVar4) || ((iVar5 <= iVar4 && (uVar3 < uVar2)))) || (iVar4 < iVar5)) break;
      if (((iVar4 <= iVar5) && (uVar2 < uVar3)) ||
         (local_8 = local_8 + 1, piVar6 = local_8, piVar1 = local_8, param_3 <= local_8)) break;
    }
  }
joined_r0x007cace4:
  do {
    if (param_3 <= piVar6) {
joined_r0x007cad52:
      for (; param_2 < piVar7; piVar7 = piVar7 + -1) {
        uVar2 = *(uint *)(piVar7[-1] + 0x118);
        iVar4 = *(int *)(piVar7[-1] + 0x11c);
        uVar3 = *(uint *)(*piVar8 + 0x118);
        iVar5 = *(int *)(*piVar8 + 0x11c);
        if ((iVar5 <= iVar4) && ((iVar5 < iVar4 || (uVar3 <= uVar2)))) {
          local_8 = piVar1;
          if ((iVar5 < iVar4) || ((iVar5 <= iVar4 && (uVar3 < uVar2)))) break;
          iVar4 = piVar8[-1];
          piVar8 = piVar8 + -1;
          *piVar8 = piVar7[-1];
          piVar7[-1] = iVar4;
        }
        local_8 = piVar1;
      }
      if (piVar7 == param_2) {
        if (piVar6 == param_3) {
          *param_1 = piVar8;
          param_1[1] = local_8;
          return param_1;
        }
        if (local_8 != piVar6) {
          iVar4 = *piVar8;
          *piVar8 = *local_8;
          *local_8 = iVar4;
        }
        iVar4 = *piVar8;
        *piVar8 = *piVar6;
        local_8 = local_8 + 1;
        *piVar6 = iVar4;
        piVar6 = piVar6 + 1;
        piVar1 = local_8;
        piVar8 = piVar8 + 1;
      }
      else {
        piVar7 = piVar7 + -1;
        if (piVar6 == param_3) {
          piVar8 = piVar8 + -1;
          if (piVar7 != piVar8) {
            iVar4 = *piVar7;
            *piVar7 = *piVar8;
            *piVar8 = iVar4;
          }
          piVar1 = local_8 + -1;
          iVar4 = *piVar8;
          local_8 = local_8 + -1;
          *piVar8 = *piVar1;
          *local_8 = iVar4;
          piVar1 = local_8;
        }
        else {
          iVar4 = *piVar6;
          *piVar6 = *piVar7;
          *piVar7 = iVar4;
          piVar6 = piVar6 + 1;
        }
      }
      goto joined_r0x007cace4;
    }
    uVar2 = *(uint *)(*piVar8 + 0x118);
    iVar4 = *(int *)(*piVar8 + 0x11c);
    iVar5 = *piVar6;
    local_8 = piVar1;
    if ((*(int *)(iVar5 + 0x11c) <= iVar4) &&
       ((*(int *)(iVar5 + 0x11c) < iVar4 || (*(uint *)(iVar5 + 0x118) <= uVar2)))) {
      if ((*(int *)(iVar5 + 0x11c) < iVar4) ||
         ((*(int *)(iVar5 + 0x11c) <= iVar4 && (*(uint *)(iVar5 + 0x118) < uVar2))))
      goto joined_r0x007cad52;
      local_8 = piVar1 + 1;
      iVar4 = *piVar1;
      *piVar1 = iVar5;
      *piVar6 = iVar4;
    }
    piVar6 = piVar6 + 1;
    piVar1 = local_8;
  } while( true );
}

