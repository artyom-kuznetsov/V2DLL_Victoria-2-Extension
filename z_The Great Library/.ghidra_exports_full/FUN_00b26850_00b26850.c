// FUN_00b26850 @ 00b26850 body=[[00b26850, 00b26a06]]


/* WARNING: Removing unreachable block (ram,0x00b268a9) */
/* WARNING: Removing unreachable block (ram,0x00b269ae) */

void FUN_00b26850(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int local_244 [8];
  code *local_224;
  code *local_220;
  undefined4 *local_21c;
  int local_20c;
  undefined1 local_208 [512];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_20c = param_1[1];
  iVar1 = *param_1;
  if ((param_3 == 0) && (param_2 <= *(uint *)(iVar1 + 0x20))) {
    if (*(short *)(iVar1 + 0x14) == 0) {
      iVar1 = FUN_00b2a2f0(local_20c,*(uint *)(iVar1 + 0xc) + param_2,
                           CARRY4(*(uint *)(iVar1 + 0xc),param_2));
      if (iVar1 == 0) {
        FUN_00b1f840(0);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      param_1[3] = param_2;
    }
    else {
      if (param_2 < (uint)param_1[3]) {
        _memset(local_244,0,0x38);
        local_224 = FUN_00b264a0;
        local_220 = FUN_00b264c0;
        local_21c = &DAT_013f3aa0;
        FUN_00b2d970(local_244,0xfffffff1,"1.2.3",0x38);
        iVar2 = FUN_00b26510();
        if ((iVar2 != 0) ||
           (iVar1 = FUN_00b2a2f0(local_20c,*(undefined4 *)(iVar1 + 0xc),0), iVar1 == 0))
        goto LAB_00b26896;
        FUN_00b2eff0(param_1 + 5);
        piVar4 = local_244;
        piVar5 = param_1 + 5;
        for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        param_1[2] = 0;
        param_1[3] = 0;
      }
      uVar3 = param_1[3];
      while (uVar3 != param_2) {
        uVar3 = param_2 - param_1[3];
        if (0x200 < uVar3) {
          uVar3 = 0x200;
        }
        lVar6 = FUN_00b26670(param_1,local_208,uVar3,1);
        if (lVar6 != 1) goto LAB_00b26896;
        uVar3 = param_1[3];
      }
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_00b1f840("Past end of file");
LAB_00b26896:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

