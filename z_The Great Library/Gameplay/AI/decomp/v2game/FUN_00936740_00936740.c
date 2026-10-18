// FUN_00936740 @ 00936740 body=[[00936740, 0093675a] [00936760, 009368d5]]


int FUN_00936740(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  int in_stack_00000018;
  int local_c;
  
  local_c = 0;
  iVar7 = 0;
  do {
    if (param_1 == (int *)0x0) {
      return iVar7 / 1000;
    }
    piVar6 = (int *)param_1[2];
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *param_1 * 4);
    iVar3 = *param_2;
    if (in_stack_00000018 == *(int *)(iVar3 + 4)) {
      iVar5 = param_2[1];
      if (iVar3 != iVar5) {
        do {
          if (*(int *)(iVar3 + 4) == *(int *)(iVar1 + 300)) break;
          iVar3 = iVar3 + 8;
        } while (iVar3 != iVar5);
        if (iVar3 != iVar5) goto LAB_009367b3;
      }
    }
    else if (*(int *)(iVar1 + 300) == in_stack_00000018) {
LAB_009367b3:
      piVar4 = (int *)FUN_004b7a70();
      iVar7 = iVar7 + *piVar4;
      local_c = iVar7;
    }
    param_1 = piVar6;
    if ((*(char *)(iVar1 + 0x170) != '\0') && (*(int *)(iVar1 + 300) == *(int *)(iVar1 + 0x134))) {
      piVar6 = *(int **)(*(int *)(*(int *)(DAT_0125870c + 0x2238) +
                                 *(int *)(*(int *)(iVar1 + 0x5c) + 0xdc) * 4) + 0xec);
      bVar2 = false;
      if (piVar6 != (int *)0x0) {
        iVar7 = *param_2;
        do {
          iVar1 = *piVar6;
          piVar6 = (int *)piVar6[2];
          if (in_stack_00000018 == *(int *)(iVar7 + 4)) {
            iVar3 = param_2[1];
            if (iVar7 != iVar3) {
              iVar5 = iVar7;
              do {
                if (*(int *)(iVar5 + 4) == *(int *)(iVar1 + 0xc4)) break;
                iVar5 = iVar5 + 8;
              } while (iVar5 != iVar3);
              if (iVar5 != iVar3) goto LAB_0093684a;
            }
          }
          else if (*(int *)(iVar1 + 0xc4) == in_stack_00000018) {
LAB_0093684a:
            bVar2 = true;
          }
        } while (piVar6 != (int *)0x0);
        iVar7 = local_c;
        if (bVar2) {
          piVar6 = (int *)FUN_004b7a70();
          iVar7 = *piVar6;
          if ((iVar7 < -0x189373) || (0x20c49a < iVar7)) {
            uVar8 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
            iVar7 = __alldiv(uVar8,4000,0);
          }
          else {
            iVar7 = (iVar7 * 1000) / 4000;
          }
          iVar7 = local_c - iVar7;
          local_c = iVar7;
        }
      }
    }
  } while( true );
}

