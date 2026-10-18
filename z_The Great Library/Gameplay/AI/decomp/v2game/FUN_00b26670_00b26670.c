// FUN_00b26670 @ 00b26670 body=[[00b26670, 00b26819]]


/* WARNING: Removing unreachable block (ram,0x00b2679e) */
/* WARNING: Removing unreachable block (ram,0x00b2674c) */
/* WARNING: Removing unreachable block (ram,0x00b26807) */
/* WARNING: Removing unreachable block (ram,0x00b267e1) */

longlong FUN_00b26670(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint local_c;
  int local_8;
  
  iVar1 = *param_1;
  local_c = 0;
  local_8 = 0;
  uVar6 = __allmul(param_4,0,param_3,0);
  uVar3 = *(int *)(iVar1 + 0x20) - param_1[3];
  if (uVar6 == 0) {
    FUN_00b1f840(0);
    return 0;
  }
  if ((uVar6 < 0x8000000000000000) && ((0xffffffff < (longlong)uVar6 || (uVar3 < (uint)uVar6)))) {
    uVar7 = __allrem(uVar3,0,param_3,0);
    iVar4 = uVar3 - (uint)uVar7;
    iVar2 = -(uint)(uVar3 < (uint)uVar7) - (int)((ulonglong)uVar7 >> 0x20);
    uVar6 = CONCAT44(iVar2,iVar4);
    param_4 = __alldiv(iVar4,iVar2,param_3,0);
    FUN_00b1f840("Past end of file");
    if (param_4 == 0) {
      return 0;
    }
  }
  if (*(short *)(iVar1 + 0x14) == 0) {
    lVar8 = FUN_00b2a250(param_1[1],param_2,param_3,param_4);
  }
  else {
    param_1[8] = param_2;
    param_1[9] = param_3 * param_4;
    if (0 < (longlong)uVar6) {
      do {
        iVar2 = param_1[10];
        if ((param_1[6] == 0) && (uVar3 = *(int *)(iVar1 + 0x1c) - param_1[2], uVar3 != 0)) {
          if (0x4000 < uVar3) {
            uVar3 = 0x4000;
          }
          lVar8 = FUN_00b2a250(param_1[1],param_1[4],1,uVar3);
          if (lVar8 < 1) break;
          param_1[2] = param_1[2] + (int)lVar8;
          param_1[5] = param_1[4];
          param_1[6] = (int)lVar8;
        }
        FUN_00b2db40(param_1 + 5,2);
        iVar4 = FUN_00b26510();
        bVar5 = CARRY4(local_c,param_1[10] - iVar2);
        local_c = local_c + (param_1[10] - iVar2);
        local_8 = local_8 + (uint)bVar5;
        if ((iVar4 != 0) || ((longlong)uVar6 <= CONCAT44(local_8,local_c))) break;
      } while( true );
    }
    lVar8 = __alldiv(local_c,local_8,param_3,0);
  }
  if (0 < lVar8) {
    param_1[3] = param_1[3] + (int)lVar8 * param_3;
  }
  return lVar8;
}

