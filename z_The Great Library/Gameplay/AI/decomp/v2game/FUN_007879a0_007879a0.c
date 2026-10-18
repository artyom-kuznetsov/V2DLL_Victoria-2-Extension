// FUN_007879a0 @ 007879a0 body=[[007879a0, 00787bd0]]


void FUN_007879a0(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_c;
  int *local_8;
  
  piVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00788000(piVar6,param_4);
  piVar8 = piVar6 + 1;
  if (param_2 < piVar6) {
    while( true ) {
      iVar2 = piVar6[-1];
      iVar3 = *piVar6;
      if ((char)param_4 == '\0') {
        bVar4 = *(int *)(iVar2 + 0x5c) < *(int *)(iVar3 + 0x5c);
      }
      else {
        bVar4 = *(int *)(iVar3 + 0x5c) < *(int *)(iVar2 + 0x5c);
      }
      if (bVar4) break;
      if ((char)param_4 == '\0') {
        bVar4 = *(int *)(iVar3 + 0x5c) < *(int *)(iVar2 + 0x5c);
      }
      else {
        bVar4 = *(int *)(iVar2 + 0x5c) < *(int *)(iVar3 + 0x5c);
      }
      if ((bVar4) || (piVar6 = piVar6 + -1, piVar6 <= param_2)) break;
    }
  }
  piVar5 = piVar8;
  local_8 = piVar8;
  local_c = piVar6;
  piVar7 = piVar6;
  if (piVar8 < param_3) {
    iVar2 = *piVar6;
    while( true ) {
      iVar3 = *piVar8;
      if ((char)param_4 == '\0') {
        bVar4 = *(int *)(iVar3 + 0x5c) < *(int *)(iVar2 + 0x5c);
      }
      else {
        bVar4 = *(int *)(iVar2 + 0x5c) < *(int *)(iVar3 + 0x5c);
      }
      piVar5 = piVar8;
      local_8 = piVar8;
      if (bVar4) break;
      if ((char)param_4 == '\0') {
        bVar4 = *(int *)(iVar2 + 0x5c) < *(int *)(iVar3 + 0x5c);
      }
      else {
        bVar4 = *(int *)(iVar3 + 0x5c) < *(int *)(iVar2 + 0x5c);
      }
      if ((bVar4) || (piVar8 = piVar8 + 1, piVar5 = piVar8, local_8 = piVar8, param_3 <= piVar8))
      break;
    }
  }
joined_r0x00787a83:
  do {
    if (param_3 <= piVar5) {
joined_r0x00787ae5:
      while (param_2 < piVar6) {
        iVar2 = piVar6[-1];
        iVar3 = *piVar7;
        if ((char)param_4 == '\0') {
          bVar4 = *(int *)(iVar2 + 0x5c) < *(int *)(iVar3 + 0x5c);
        }
        else {
          bVar4 = *(int *)(iVar3 + 0x5c) < *(int *)(iVar2 + 0x5c);
        }
        if (!bVar4) {
          if ((char)param_4 == '\0') {
            bVar4 = *(int *)(iVar3 + 0x5c) < *(int *)(iVar2 + 0x5c);
          }
          else {
            bVar4 = *(int *)(iVar2 + 0x5c) < *(int *)(iVar3 + 0x5c);
          }
          piVar8 = local_8;
          piVar6 = local_c;
          if (bVar4) break;
          iVar2 = piVar7[-1];
          piVar7 = piVar7 + -1;
          *piVar7 = local_c[-1];
          local_c[-1] = iVar2;
        }
        local_c = local_c + -1;
        piVar8 = local_8;
        piVar6 = local_c;
      }
      if (piVar6 == param_2) {
        if (piVar5 == param_3) {
          param_1[1] = (uint)piVar8;
          *param_1 = (uint)piVar7;
          return;
        }
        if (piVar8 != piVar5) {
          iVar2 = *piVar7;
          *piVar7 = *piVar8;
          *piVar8 = iVar2;
        }
        piVar8 = piVar8 + 1;
        iVar2 = *piVar7;
        *piVar7 = *piVar5;
        *piVar5 = iVar2;
        piVar5 = piVar5 + 1;
        local_8 = piVar8;
        piVar7 = piVar7 + 1;
      }
      else {
        piVar6 = piVar6 + -1;
        local_c = piVar6;
        if (piVar5 == param_3) {
          piVar7 = piVar7 + -1;
          if (piVar6 != piVar7) {
            iVar2 = *piVar6;
            *piVar6 = *piVar7;
            *piVar7 = iVar2;
          }
          piVar1 = piVar8 + -1;
          iVar2 = *piVar7;
          piVar8 = piVar8 + -1;
          *piVar7 = *piVar1;
          *piVar8 = iVar2;
          local_8 = piVar8;
        }
        else {
          iVar2 = *piVar5;
          *piVar5 = *piVar6;
          *piVar6 = iVar2;
          piVar5 = piVar5 + 1;
        }
      }
      goto joined_r0x00787a83;
    }
    iVar2 = *piVar7;
    iVar3 = *piVar5;
    if ((char)param_4 == '\0') {
      bVar4 = *(int *)(iVar2 + 0x5c) < *(int *)(iVar3 + 0x5c);
    }
    else {
      bVar4 = *(int *)(iVar3 + 0x5c) < *(int *)(iVar2 + 0x5c);
    }
    piVar6 = local_c;
    if (!bVar4) {
      if ((char)param_4 == '\0') {
        bVar4 = *(int *)(iVar3 + 0x5c) < *(int *)(iVar2 + 0x5c);
      }
      else {
        bVar4 = *(int *)(iVar2 + 0x5c) < *(int *)(iVar3 + 0x5c);
      }
      piVar8 = local_8;
      if (bVar4) goto joined_r0x00787ae5;
      iVar2 = *local_8;
      *local_8 = iVar3;
      *piVar5 = iVar2;
      local_8 = local_8 + 1;
    }
    piVar8 = local_8;
    piVar5 = piVar5 + 1;
  } while( true );
}

