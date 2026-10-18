// FUN_0060f440 @ 0060f440 body=[[0060f440, 0060f507] [0060f510, 0060f575] [0060f580, 0060f65d]]


undefined4 * FUN_0060f440(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

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
  FUN_006112c0(piVar7,param_3 + -1,param_4);
  local_8 = piVar7 + 1;
  for (; param_2 < piVar7; piVar7 = piVar7 + -1) {
    uVar2 = *(uint *)(piVar7[-1] + 600);
    uVar3 = *(uint *)(*piVar7 + 600);
    iVar4 = *(int *)(piVar7[-1] + 0x25c);
    iVar5 = *(int *)(*piVar7 + 0x25c);
    if ((iVar5 < iVar4) ||
       ((((iVar5 <= iVar4 && (uVar3 < uVar2)) || (iVar4 < iVar5)) ||
        ((iVar4 <= iVar5 && (uVar2 < uVar3)))))) break;
  }
  piVar6 = local_8;
  piVar1 = local_8;
  piVar8 = piVar7;
  if (local_8 < param_3) {
    uVar2 = *(uint *)(*piVar7 + 600);
    iVar4 = *(int *)(*piVar7 + 0x25c);
    while( true ) {
      uVar3 = *(uint *)(*local_8 + 600);
      iVar5 = *(int *)(*local_8 + 0x25c);
      piVar6 = local_8;
      piVar1 = local_8;
      if (((iVar4 < iVar5) || ((iVar4 <= iVar5 && (uVar2 < uVar3)))) || (iVar5 < iVar4)) break;
      if (((iVar5 <= iVar4) && (uVar3 < uVar2)) ||
         (local_8 = local_8 + 1, piVar6 = local_8, piVar1 = local_8, param_3 <= local_8)) break;
    }
  }
joined_r0x0060f504:
  do {
    if (param_3 <= piVar6) {
joined_r0x0060f572:
      for (; param_2 < piVar7; piVar7 = piVar7 + -1) {
        uVar2 = *(uint *)(piVar7[-1] + 600);
        iVar4 = *(int *)(piVar7[-1] + 0x25c);
        uVar3 = *(uint *)(*piVar8 + 600);
        iVar5 = *(int *)(*piVar8 + 0x25c);
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
      goto joined_r0x0060f504;
    }
    uVar2 = *(uint *)(*piVar8 + 600);
    iVar4 = *(int *)(*piVar8 + 0x25c);
    iVar5 = *piVar6;
    local_8 = piVar1;
    if ((iVar4 <= *(int *)(iVar5 + 0x25c)) &&
       ((iVar4 < *(int *)(iVar5 + 0x25c) || (uVar2 <= *(uint *)(iVar5 + 600))))) {
      if ((iVar4 < *(int *)(iVar5 + 0x25c)) ||
         ((iVar4 <= *(int *)(iVar5 + 0x25c) && (uVar2 < *(uint *)(iVar5 + 600)))))
      goto joined_r0x0060f572;
      local_8 = piVar1 + 1;
      iVar4 = *piVar1;
      *piVar1 = iVar5;
      *piVar6 = iVar4;
    }
    piVar6 = piVar6 + 1;
    piVar1 = local_8;
  } while( true );
}

