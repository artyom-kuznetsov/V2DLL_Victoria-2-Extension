// FUN_00472300 @ 00472300 body=[[00472300, 004723c1]]


/* WARNING: Removing unreachable block (ram,0x004723a0) */

void FUN_00472300(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  int in_EAX;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_18 = *(int *)(*(int *)(DAT_012586dc + 0x50) + 400);
  local_14 = *(int *)(*(int *)(DAT_012586dc + 0x50) + 0x194);
  if (local_18 != 0 || local_14 != 0) {
    uVar1 = *(uint *)(in_EAX + 0x20);
    local_10._4_4_ = *(int *)(in_EAX + 0x24);
    local_20 = uVar1 + 0x8000;
    local_1c = local_10._4_4_ + (uint)(0xffff7fff < uVar1);
    lVar2 = CONCAT44(local_1c,local_20);
    uVar4 = __alldiv(*(uint *)(in_EAX + 0x28) << 0x1e,*(uint *)(in_EAX + 0x28) >> 2,local_18,
                     local_14);
    lVar5 = __allmul(uVar4,uVar1,local_10._4_4_);
    local_10 = lVar5 >> 0xf;
    if (lVar2 < lVar5 >> 0xf) {
      puVar3 = (uint *)&local_10;
    }
    else {
      puVar3 = &local_20;
    }
    uVar1 = *puVar3;
    param_1[1] = puVar3[1];
    *param_1 = uVar1;
    return;
  }
  uVar1 = *(uint *)(in_EAX + 0x20);
  param_1[1] = *(int *)(in_EAX + 0x24) + (uint)(0xffff7fff < uVar1);
  *param_1 = uVar1 + 0x8000;
  return;
}

