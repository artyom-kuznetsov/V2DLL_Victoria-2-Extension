// FUN_006301d0 @ 006301d0 body=[[006301d0, 006304d5]]


void FUN_006301d0(uint *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_c;
  int *local_8;
  
  piVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_006307b0(piVar5,param_4);
  local_8 = piVar5 + 1;
  if (param_2 < piVar5) {
    while( true ) {
      iVar1 = piVar5[-1];
      iVar2 = *piVar5;
      if ((iVar1 == param_4) && (iVar2 != param_4)) break;
      iVar3 = *(int *)(param_4 + 0x20);
      if (((*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) == iVar3) &&
          (*(int *)(*(int *)(iVar2 + 0x156c) + 0x14) != iVar3)) ||
         ((*(int *)(*(int *)(iVar1 + 0x156c) + 0xc) < *(int *)(*(int *)(iVar2 + 0x156c) + 0xc) ||
          ((((iVar2 == param_4 && (iVar1 != param_4)) ||
            ((*(int *)(*(int *)(iVar2 + 0x156c) + 0x14) == iVar3 &&
             (*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != iVar3)))) ||
           ((*(int *)(*(int *)(iVar2 + 0x156c) + 0xc) < *(int *)(*(int *)(iVar1 + 0x156c) + 0xc) ||
            (piVar5 = piVar5 + -1, piVar5 <= param_2)))))))) break;
    }
  }
  piVar6 = local_8;
  piVar4 = local_8;
  local_c = piVar5;
  piVar8 = piVar5;
  if (local_8 < param_3) {
    iVar1 = *piVar5;
    while ((iVar2 = *local_8, piVar6 = local_8, piVar4 = local_8, iVar2 != param_4 ||
           (iVar1 == param_4))) {
      iVar3 = *(int *)(param_4 + 0x20);
      if (((((*(int *)(*(int *)(iVar2 + 0x156c) + 0x14) == iVar3) &&
            (*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != iVar3)) ||
           (*(int *)(*(int *)(iVar2 + 0x156c) + 0xc) < *(int *)(*(int *)(iVar1 + 0x156c) + 0xc))) ||
          (((iVar1 == param_4 && (iVar2 != param_4)) ||
           ((*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) == iVar3 &&
            (*(int *)(*(int *)(iVar2 + 0x156c) + 0x14) != iVar3)))))) ||
         ((*(int *)(*(int *)(iVar1 + 0x156c) + 0xc) < *(int *)(*(int *)(iVar2 + 0x156c) + 0xc) ||
          (local_8 = local_8 + 1, piVar6 = local_8, piVar4 = local_8, param_3 <= local_8)))) break;
    }
  }
joined_r0x0063030a:
  do {
    if (param_3 <= piVar6) {
joined_r0x006303ab:
      while (piVar7 = piVar6, param_2 < piVar5) {
        iVar1 = piVar5[-1];
        iVar2 = *piVar8;
        if ((iVar1 != param_4) || (iVar2 == param_4)) {
          iVar3 = *(int *)(param_4 + 0x20);
          piVar5 = local_c;
          if (((*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != iVar3) ||
              (piVar6 = piVar4, *(int *)(*(int *)(iVar2 + 0x156c) + 0x14) == iVar3)) &&
             (piVar6 = piVar4,
             *(int *)(*(int *)(iVar2 + 0x156c) + 0xc) <= *(int *)(*(int *)(iVar1 + 0x156c) + 0xc)))
          {
            piVar7 = piVar4;
            if ((((iVar2 == param_4) && (iVar1 != param_4)) ||
                ((*(int *)(*(int *)(iVar2 + 0x156c) + 0x14) == iVar3 &&
                 (*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != iVar3)))) ||
               (*(int *)(*(int *)(iVar2 + 0x156c) + 0xc) < *(int *)(*(int *)(iVar1 + 0x156c) + 0xc))
               ) break;
            iVar1 = piVar8[-1];
            piVar8 = piVar8 + -1;
            *piVar8 = local_c[-1];
            local_c[-1] = iVar1;
            piVar5 = local_c;
          }
        }
        local_c = piVar5 + -1;
        piVar5 = local_c;
      }
      if (piVar5 == param_2) {
        if (piVar7 == param_3) {
          *param_1 = (uint)piVar8;
          param_1[1] = (uint)local_8;
          return;
        }
        if (local_8 != piVar7) {
          iVar1 = *piVar8;
          *piVar8 = *local_8;
          *local_8 = iVar1;
        }
        local_8 = local_8 + 1;
        iVar1 = *piVar8;
        *piVar8 = *piVar7;
        *piVar7 = iVar1;
        piVar6 = piVar7 + 1;
        piVar4 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      else {
        piVar5 = piVar5 + -1;
        local_c = piVar5;
        if (piVar7 == param_3) {
          piVar8 = piVar8 + -1;
          if (piVar5 != piVar8) {
            iVar1 = *piVar5;
            *piVar5 = *piVar8;
            *piVar8 = iVar1;
          }
          piVar6 = local_8 + -1;
          iVar1 = *piVar8;
          local_8 = local_8 + -1;
          *piVar8 = *piVar6;
          *local_8 = iVar1;
          piVar6 = piVar7;
        }
        else {
          iVar1 = *piVar7;
          *piVar7 = *piVar5;
          *piVar5 = iVar1;
          piVar6 = piVar7 + 1;
          piVar4 = piVar7 + 1;
        }
      }
      goto joined_r0x0063030a;
    }
    iVar1 = *piVar8;
    iVar2 = *piVar6;
    if ((iVar1 != param_4) || (piVar7 = piVar6, iVar2 == param_4)) {
      iVar3 = *(int *)(param_4 + 0x20);
      piVar5 = local_c;
      piVar7 = piVar4;
      if (((*(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != iVar3) ||
          (*(int *)(*(int *)(iVar2 + 0x156c) + 0x14) == iVar3)) &&
         (*(int *)(*(int *)(iVar2 + 0x156c) + 0xc) <= *(int *)(*(int *)(iVar1 + 0x156c) + 0xc))) {
        if ((((iVar2 == param_4) && (piVar6 = piVar4, iVar1 != param_4)) ||
            ((*(int *)(*(int *)(iVar2 + 0x156c) + 0x14) == iVar3 &&
             (piVar6 = piVar4, *(int *)(*(int *)(iVar1 + 0x156c) + 0x14) != iVar3)))) ||
           (piVar6 = piVar4,
           *(int *)(*(int *)(iVar2 + 0x156c) + 0xc) < *(int *)(*(int *)(iVar1 + 0x156c) + 0xc)))
        goto joined_r0x006303ab;
        iVar1 = *local_8;
        *local_8 = iVar2;
        *piVar4 = iVar1;
        local_8 = local_8 + 1;
      }
    }
    piVar6 = piVar7 + 1;
    piVar4 = piVar7 + 1;
  } while( true );
}

