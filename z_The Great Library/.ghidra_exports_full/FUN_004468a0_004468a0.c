// FUN_004468a0 @ 004468a0 body=[[004468a0, 00446a2a]]


int * FUN_004468a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_14;
  int local_c;
  
  iVar3 = DAT_012588e8;
  iVar8 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0xc) * 4) + 0x188);
  *param_1 = 1000;
  if ((iVar8 != 0) && (0 < (int)(*(int *)(iVar8 + 0x4c) - *(int *)(iVar8 + 0x48) & 0xfffffffcU))) {
    iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xf8);
    iVar4 = FUN_004dad40();
    iVar4 = *(int *)(iVar4 + 0x34);
    piVar5 = *(int **)(iVar8 + 0x48);
    iVar9 = *(int *)(iVar4 + 0xc4) * 1000;
    iVar8 = *(int *)(iVar8 + 0x4c) - (int)piVar5 >> 2;
    local_c = 0;
    if (0 < iVar8) {
      iVar3 = *(int *)(iVar3 + 0xacc);
      cVar1 = *(char *)(iVar4 + 0x131);
      local_14 = iVar8;
      do {
        iVar6 = 0;
        if ((cVar1 != '\0') &&
           (iVar7 = *(int *)(*(int *)(*(int *)(iVar3 + *piVar5 * 4) + 0x118) +
                            *(int *)(iVar4 + 0x134) * 4), DAT_0125ceac < *(int *)(iVar7 + 0x20))) {
          iVar6 = *(int *)(iVar7 + 0x24) / 1000;
        }
        iVar7 = iVar6 * 1000;
        if (iVar9 == 0) {
          iVar6 = -1;
        }
        else if (iVar7 + 0x189373U < 0x39580e) {
          iVar6 = (iVar6 * 1000000) / iVar9;
        }
        else {
          uVar10 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
          iVar6 = __alldiv(uVar10,iVar9,iVar9 >> 0x1f);
        }
        local_c = local_c + iVar6;
        piVar5 = piVar5 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    uVar10 = __allmul(local_c,local_c >> 0x1f,1000,0);
    iVar8 = __alldiv(uVar10,iVar8 * 1000,iVar8 * 1000 >> 0x1f);
    iVar8 = __alldiv((longlong)iVar8 * (longlong)iVar2,1000,0);
    *param_1 = *param_1 + iVar8;
  }
  return param_1;
}

