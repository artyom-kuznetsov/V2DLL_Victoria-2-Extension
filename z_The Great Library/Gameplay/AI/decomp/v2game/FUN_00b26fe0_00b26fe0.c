// FUN_00b26fe0 @ 00b26fe0 body=[[00b26fe0, 00b271a5]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b26fe0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  int local_4c;
  uint local_48;
  int local_40;
  int local_3c;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  iVar4 = *(int *)(param_3 + 0x20);
  local_10 = 0;
  local_14 = iVar4;
  iVar2 = FUN_00b2a2f0(param_1,*(undefined4 *)(param_3 + 0xc),0);
  pcVar9 = (char *)0x0;
  if (iVar2 == 0) {
LAB_00b27036:
    FUN_00b1f840(pcVar9);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar2 = (*DAT_013f3aa8)(iVar4 + 1,0);
  if (iVar2 == 0) {
    pcVar9 = "Out of memory";
    local_c = 0;
    goto LAB_00b27036;
  }
  local_c = iVar2;
  if (*(short *)(param_3 + 0x14) == 0) {
    uVar7 = FUN_00b2a250(param_1,iVar2,iVar4,1);
    if ((int)uVar7 == 1) {
      if ((int)((ulonglong)uVar7 >> 0x20) != 0) {
        (*DAT_013f3ab0)(iVar2);
        goto LAB_00b27187;
      }
LAB_00b27161:
      *(undefined1 *)(iVar2 + *(int *)(param_3 + 0x20)) = 0;
      FUN_00b26e90();
      uVar6 = FUN_00b26f80(param_1);
      *(undefined4 *)(param_3 + 4) = uVar6;
      goto LAB_00b27187;
    }
  }
  else {
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar1 < 0x80) {
      puVar3 = &stack0xffffffa8;
    }
    else {
      puVar3 = (undefined1 *)0x0;
    }
    iVar4 = FUN_00b20970(puVar3,uVar1,0);
    if (iVar4 != 0) {
      lVar8 = FUN_00b2a250(param_1,iVar4,uVar1,1);
      if (lVar8 == 1) {
        FUN_00b264e0();
        local_40 = local_c;
        local_3c = local_14;
        local_4c = iVar4;
        local_48 = uVar1;
        FUN_00b2d970(&local_4c,0xfffffff1,"1.2.3",0x38);
        iVar5 = FUN_00b26510();
        iVar2 = local_c;
        if (iVar5 == 0) {
          FUN_00b2db40(&local_4c,4);
          iVar5 = FUN_00b26510();
          FUN_00b2eff0(&local_4c);
          iVar2 = local_c;
          if ((iVar5 == 0) || (local_10 = 0, iVar5 == 1)) {
            local_10 = 1;
          }
        }
      }
      FUN_00b209b0(iVar4);
      if (local_10 != 0) goto LAB_00b27161;
    }
  }
  (*DAT_013f3ab0)(iVar2);
LAB_00b27187:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

