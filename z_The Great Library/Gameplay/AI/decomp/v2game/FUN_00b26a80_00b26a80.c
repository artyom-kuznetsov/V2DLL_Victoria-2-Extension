// FUN_00b26a80 @ 00b26a80 body=[[00b26a80, 00b26b19]]


/* WARNING: Removing unreachable block (ram,0x00b26b4e) */
/* WARNING: Removing unreachable block (ram,0x00b26b23) */
/* WARNING: Removing unreachable block (ram,0x00b26c78) */

void FUN_00b26a80(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  longlong *in_ECX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_110;
  uint local_10c;
  undefined4 uStack_108;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_110 = 0;
  local_10c = 0;
  lVar7 = FUN_00b2a3a0(param_1);
  uVar4 = (uint)lVar7;
  if (lVar7 == -1) {
    FUN_00b1f840(0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0);
    return;
  }
  if ((-1 < lVar7) && (0xffffffff < lVar7)) {
    FUN_00b1f840("ZIP bigger than 2 gigs?!");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0);
    return;
  }
  if (lVar7 < 0x101) {
    uVar3 = 0;
    iVar5 = 0;
  }
  else {
    uVar3 = uVar4 - 0x100;
    iVar5 = (int)((ulonglong)lVar7 >> 0x20) - (uint)(uVar4 < 0x100);
    uVar4 = 0x100;
  }
  if (0 < lVar7) {
    do {
      if (0x10014 < (int)local_10c) break;
      iVar1 = FUN_00b2a2f0(param_1,uVar3,iVar5);
      if (iVar1 == 0) {
        FUN_00b1f840(0);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0xffffffff);
        return;
      }
      if (local_10c == 0) {
        lVar8 = FUN_00b2a250(param_1,&uStack_108,uVar4,1);
        uVar2 = uVar4;
        if (lVar8 != 1) goto LAB_00b26c91;
      }
      else {
        lVar8 = FUN_00b2a250(param_1,&uStack_108,uVar4 - 4,1);
        if (lVar8 != 1) goto LAB_00b26c91;
        *(undefined4 *)((int)&local_10c + uVar4) = local_110;
        uVar2 = (local_10c - 4) + uVar4;
      }
      local_10c = uVar2;
      local_110 = uStack_108;
      for (uVar2 = uVar4 - 4; 0 < (int)uVar2; uVar2 = uVar2 - 1) {
        if ((((*(char *)((int)&uStack_108 + uVar2) == 'P') &&
             (*(char *)((int)&uStack_108 + uVar2 + 1) == 'K')) &&
            (*(char *)((int)&uStack_108 + uVar2 + 2) == '\x05')) &&
           (*(char *)((int)&uStack_108 + uVar2 + 3) == '\x06')) {
          if (in_ECX != (longlong *)0x0) {
            *in_ECX = lVar7;
          }
          __security_check_cookie
                    (local_8 ^ (uint)&stack0xfffffffc,
                     ((int)uVar2 >> 0x1f) + iVar5 + (uint)CARRY4(uVar2,uVar3));
          return;
        }
      }
      uVar2 = uVar4 - 4;
      bVar6 = uVar3 < uVar2;
      uVar3 = uVar3 - uVar2;
      iVar5 = (iVar5 - ((int)uVar2 >> 0x1f)) - (uint)bVar6;
      if ((iVar5 < 1) && (iVar5 < 0)) {
        uVar3 = 0;
        iVar5 = 0;
      }
    } while ((int)local_10c < lVar7);
  }
  FUN_00b1f840("Not an archive");
LAB_00b26c91:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0xffffffff);
  return;
}

