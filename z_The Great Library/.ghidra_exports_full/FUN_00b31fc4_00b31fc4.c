// FUN_00b31fc4 @ 00b31fc4 body=[[00b31fc4, 00b32272]]


void FUN_00b31fc4(int param_1)

{
  int *piVar1;
  uint uVar2;
  errno_t eVar3;
  int *in_ECX;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  tm *ptVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  undefined8 local_34;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_44 = 0;
  local_48 = 0;
  if (in_ECX == (int *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00ab7c17();
    uVar5 = 0xffffffff;
    lVar9 = CONCAT44(local_34._4_4_,(uint)local_34);
    goto LAB_00b32265;
  }
  local_34._0_4_ = in_ECX[5];
  local_34._4_4_ = (int)(uint)local_34 >> 0x1f;
  lVar9 = (longlong)(int)(uint)local_34;
  if ((local_34._4_4_ + -1 + (uint)(0x44 < (uint)local_34) == 0) &&
     (lVar9 = (longlong)(int)(uint)local_34, (uint)local_34 - 0x45 < 0x409)) {
    iVar4 = in_ECX[4];
    if ((iVar4 < 0) || (0xb < iVar4)) {
      uVar2 = iVar4 / 0xc;
      iVar4 = iVar4 % 0xc;
      bVar8 = CARRY4((uint)local_34,uVar2);
      local_34._0_4_ = (uint)local_34 + uVar2;
      in_ECX[4] = iVar4;
      local_34._4_4_ = local_34._4_4_ + ((int)uVar2 >> 0x1f) + (uint)bVar8;
      if (iVar4 < 0) {
        bVar8 = (uint)local_34 != 0;
        local_34._0_4_ = (uint)local_34 - 1;
        in_ECX[4] = iVar4 + 0xc;
        local_34._4_4_ = local_34._4_4_ + -1 + (uint)bVar8;
      }
      lVar9 = CONCAT44(local_34._4_4_,(uint)local_34);
      if ((local_34._4_4_ + -1 + (uint)(0x44 < (uint)local_34) != 0) ||
         (lVar9 = CONCAT44(local_34._4_4_,(uint)local_34), 0x408 < (uint)local_34 - 0x45))
      goto LAB_00b32254;
    }
    iVar4 = in_ECX[4];
    local_40 = *(uint *)(&DAT_00ef3334 + iVar4 * 4);
    local_3c = (int)local_40 >> 0x1f;
    lVar9 = __allrem((uint)local_34,local_34._4_4_,4,0);
    if ((((lVar9 == 0) && (lVar9 = __allrem((uint)local_34,local_34._4_4_,100,0), lVar9 != 0)) ||
        (lVar9 = __allrem((uint)local_34 + 0x76c,
                          local_34._4_4_ + (uint)(0xfffff893 < (uint)local_34),400,0), lVar9 == 0))
       && (1 < iVar4)) {
      bVar8 = 0xfffffffe < local_40;
      local_40 = local_40 + 1;
      local_3c = local_3c + (uint)bVar8;
    }
    iVar6 = (uint)local_34 - 1;
    iVar4 = local_34._4_4_ - (uint)((uint)local_34 == 0);
    lVar9 = __alldiv((uint)local_34 + 299,local_34._4_4_ + (uint)(0xfffffed4 < (uint)local_34),400,0
                    );
    uVar2 = (uint)(lVar9 + in_ECX[3]);
    local_38 = (int)((ulonglong)(lVar9 + in_ECX[3]) >> 0x20);
    uVar10 = __alldiv(iVar6,iVar4,100,0);
    local_38 = (local_38 - (int)((ulonglong)uVar10 >> 0x20)) - (uint)(uVar2 < (uint)uVar10);
    lVar9 = __alldiv(iVar6,iVar4,4,0);
    lVar9 = lVar9 + CONCAT44(local_38,uVar2 - (uint)uVar10);
    local_38 = (int)((ulonglong)lVar9 >> 0x20);
    lVar11 = __allmul((uint)local_34,local_34._4_4_,0x16d,0);
    lVar9 = lVar11 + CONCAT44(local_38,(int)lVar9) + CONCAT44(local_3c,local_40);
    uVar2 = (uint)lVar9;
    lVar9 = __allmul(uVar2 - 0x63df,(int)((ulonglong)lVar9 >> 0x20) - (uint)(uVar2 < 0x63df),0x18,0)
    ;
    lVar9 = __allmul(lVar9 + in_ECX[2],0x3c,0);
    local_34 = __allmul(lVar9 + in_ECX[1],0x3c,0);
    local_34 = local_34 + *in_ECX;
    if (param_1 == 0) {
      iVar4 = __gmtime64_s(&local_2c,&local_34);
      lVar9 = local_34;
LAB_00b3223e:
      if (iVar4 != 0) goto LAB_00b32254;
    }
    else {
      ___tzset();
      eVar3 = FID_conflict___get_dstbias((long *)&local_44);
      if (eVar3 != 0) {
LAB_00b32227:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = FID_conflict___get_dstbias((long *)&local_48);
      if (eVar3 != 0) goto LAB_00b32227;
      local_34 = local_34 + (int)local_48;
      iVar4 = FUN_00ab2d10(&local_2c,&local_34);
      lVar9 = local_34;
      if (iVar4 != 0) goto LAB_00b32254;
      if ((0 < in_ECX[8]) || ((in_ECX[8] < 0 && (0 < local_2c.tm_isdst)))) {
        local_34 = local_34 + (int)local_44;
        iVar4 = FUN_00ab2d10(&local_2c,&local_34);
        lVar9 = local_34;
        goto LAB_00b3223e;
      }
    }
    local_34._4_4_ = (int)((ulonglong)lVar9 >> 0x20);
    ptVar7 = &local_2c;
    for (iVar4 = 9; uVar5 = local_34._4_4_, iVar4 != 0; iVar4 = iVar4 + -1) {
      *in_ECX = ptVar7->tm_sec;
      ptVar7 = (tm *)&ptVar7->tm_min;
      in_ECX = in_ECX + 1;
    }
  }
  else {
LAB_00b32254:
    local_34 = lVar9;
    piVar1 = __errno();
    *piVar1 = 0x16;
    uVar5 = 0xffffffff;
    lVar9 = local_34;
  }
LAB_00b32265:
  local_34 = lVar9;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar5);
  return;
}

