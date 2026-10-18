// FUN_00725ce0 @ 00725ce0 body=[[00725ce0, 00725d8c] [00725d90, 00725eb8]]


undefined4 * FUN_00725ce0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

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
  FUN_00727aa0(piVar7,param_3 + -1,param_4);
  local_8 = piVar7 + 1;
  for (; param_2 < piVar7; piVar7 = piVar7 + -1) {
    uVar2 = *(uint *)(piVar7[-1] + 0x30);
    uVar3 = *(uint *)(*piVar7 + 0x30);
    iVar4 = *(int *)(piVar7[-1] + 0x34);
    iVar5 = *(int *)(*piVar7 + 0x34);
    if ((iVar5 < iVar4) ||
       ((((iVar5 <= iVar4 && (uVar3 < uVar2)) || (iVar4 < iVar5)) ||
        ((iVar4 <= iVar5 && (uVar2 < uVar3)))))) break;
  }
  piVar6 = local_8;
  piVar1 = local_8;
  piVar8 = piVar7;
  if (local_8 < param_3) {
    uVar2 = *(uint *)(*piVar7 + 0x30);
    iVar4 = *(int *)(*piVar7 + 0x34);
    while( true ) {
      uVar3 = *(uint *)(*local_8 + 0x30);
      iVar5 = *(int *)(*local_8 + 0x34);
      piVar6 = local_8;
      piVar1 = local_8;
      if (((iVar4 < iVar5) || ((iVar4 <= iVar5 && (uVar2 < uVar3)))) || (iVar5 < iVar4)) break;
      if (((iVar5 <= iVar4) && (uVar3 < uVar2)) ||
         (local_8 = local_8 + 1, piVar6 = local_8, piVar1 = local_8, param_3 <= local_8)) break;
    }
  }
joined_r0x00725d93:
  do {
    if (param_3 <= piVar6) {
joined_r0x00725de5:
      for (; param_2 < piVar7; piVar7 = piVar7 + -1) {
        uVar2 = *(uint *)(piVar7[-1] + 0x30);
        iVar4 = *(int *)(piVar7[-1] + 0x34);
        uVar3 = *(uint *)(*piVar8 + 0x30);
        iVar5 = *(int *)(*piVar8 + 0x34);
        if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (uVar2 <= uVar3)))) {
          local_8 = piVar1;
          if ((iVar4 < iVar5) || ((iVar4 <= iVar5 && (uVar2 < uVar3)))) break;
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
      goto joined_r0x00725d93;
    }
    uVar2 = *(uint *)(*piVar8 + 0x30);
    iVar4 = *(int *)(*piVar8 + 0x34);
    iVar5 = *piVar6;
    local_8 = piVar1;
    if ((iVar4 <= *(int *)(iVar5 + 0x34)) &&
       ((iVar4 < *(int *)(iVar5 + 0x34) || (uVar2 <= *(uint *)(iVar5 + 0x30))))) {
      if ((iVar4 < *(int *)(iVar5 + 0x34)) ||
         ((iVar4 <= *(int *)(iVar5 + 0x34) && (uVar2 < *(uint *)(iVar5 + 0x30)))))
      goto joined_r0x00725de5;
      local_8 = piVar1 + 1;
      iVar4 = *piVar1;
      *piVar1 = iVar5;
      *piVar6 = iVar4;
    }
    piVar6 = piVar6 + 1;
    piVar1 = local_8;
  } while( true );
}

