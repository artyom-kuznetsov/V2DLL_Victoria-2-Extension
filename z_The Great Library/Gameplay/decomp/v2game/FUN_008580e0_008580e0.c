// FUN_008580e0 @ 008580e0  (requested 008580E0, first bytes: 55 8B EC 83 EC 4C 8B 45)


/* WARNING: Removing unreachable block (ram,0x00858268) */

int FUN_008580e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_2c;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  local_1c = DAT_012588e8;
  local_18 = *(int **)(param_2 + 0xe44);
  local_10 = 0;
  local_8 = 0;
  local_20 = iVar8;
  if (local_18 == (int *)0x0) {
    return 0;
  }
  do {
    local_c = *local_18;
    param_2 = 0;
    local_14 = 0;
    piVar7 = *(int **)(local_c + 0x48);
    iVar6 = local_c;
    local_18 = (int *)local_18[2];
    do {
      do {
        do {
          if ((piVar7 < *(int **)(iVar6 + 0x48)) || (*(int **)(iVar6 + 0x4c) <= piVar7))
          goto LAB_0085829b;
          iVar1 = *(int *)(*(int *)(local_1c + 0xacc) + *piVar7 * 4);
          iVar2 = *(int *)(param_1 + 0x78);
          piVar7 = piVar7 + 1;
        } while (*(int *)(iVar1 + 0x134) != *(int *)(iVar1 + 300));
        lVar4 = *(longlong *)(iVar8 + 0xe78);
        iVar6 = 0;
        if ((*(char *)(iVar2 + 0x131) != '\0') &&
           (iVar3 = *(int *)(*(int *)(iVar1 + 0x118) + *(int *)(iVar2 + 0x134) * 4), iVar3 != 0)) {
          iVar6 = *(int *)(iVar3 + 0x24) / 1000;
        }
        FUN_004da850(iVar2,&local_2c,iVar8,0,iVar8 + 0x1184,iVar6 + 1);
        iVar6 = *(int *)(iVar2 + 300);
        if (((iVar6 == 0) || (DAT_01258734 == 0)) || (iVar6 == DAT_01258734 + 0x10)) {
          lVar9 = 0;
        }
        else {
          FUN_0047e3e0(iVar6 + 0x24,*(int *)(DAT_012588e8 + 0xbcc) + 0x280);
          lVar9 = __allmul(local_3c,local_38,0xc8000,0);
          lVar9 = lVar9 >> 0xf;
          iVar8 = local_20;
        }
        local_2c = lVar9 + local_2c;
        iVar6 = local_c;
      } while (lVar4 < local_2c);
      cVar5 = FUN_00511ef0(iVar8,iVar1,0,0,0,0,0);
      iVar6 = local_c;
    } while (cVar5 == '\0');
    param_2 = *(int *)(local_c + 0x68);
    local_14 = iVar1;
LAB_0085829b:
    if ((local_8 == 0) || (local_10 < param_2)) {
      local_10 = param_2;
      local_8 = local_14;
    }
    if (local_18 == (int *)0x0) {
      return local_8;
    }
  } while( true );
}

