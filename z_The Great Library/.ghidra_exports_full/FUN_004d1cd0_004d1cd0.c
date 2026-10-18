// FUN_004d1cd0 @ 004d1cd0 body=[[004d1cd0, 004d1e31]]


/* WARNING: Removing unreachable block (ram,0x004d1da0) */

void FUN_004d1cd0(longlong *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int in_EAX;
  uint *puVar6;
  int unaff_EDI;
  longlong lVar7;
  uint local_20;
  uint local_1c;
  undefined8 local_18;
  uint local_10;
  int local_c;
  
  local_c = *(int *)(unaff_EDI + 0x254);
  local_18._0_4_ = param_2;
  local_18._4_4_ = param_3;
  local_10 = *(uint *)(unaff_EDI + 0x250);
  if ((param_3 < local_c) || ((param_3 <= local_c && (param_2 <= *(uint *)(unaff_EDI + 0x250))))) {
    puVar6 = (uint *)&local_18;
  }
  else {
    puVar6 = &local_10;
  }
  lVar7 = __alldiv(*puVar6 << 0xf,puVar6[1] << 0xf | *puVar6 >> 0x11,DAT_00f0b168,DAT_00f0b16c);
  local_20 = *(uint *)(in_EAX + 0x58);
  iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x5c) * 4) + 0xe88);
  local_18._0_4_ = *(uint *)(iVar3 + 0x10) - *(uint *)(iVar3 + 0x18);
  local_18._4_4_ =
       (*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x1c)) -
       (uint)(*(uint *)(iVar3 + 0x10) < *(uint *)(iVar3 + 0x18));
  local_10 = *(uint *)(in_EAX + 600);
  local_c = *(int *)(in_EAX + 0x25c);
  if ((local_18._4_4_ < local_c) ||
     ((local_18._4_4_ <= local_c && ((uint)local_18 <= *(uint *)(in_EAX + 600))))) {
    puVar6 = (uint *)&local_18;
  }
  else {
    puVar6 = &local_10;
  }
  local_20 = *puVar6;
  local_1c = puVar6[1];
  local_18 = lVar7;
  if (lVar7 < *(longlong *)puVar6) {
    puVar6 = (uint *)&local_18;
  }
  else {
    puVar6 = &local_20;
  }
  uVar4 = *puVar6;
  puVar1 = (uint *)(in_EAX + 600);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar4;
  uVar5 = puVar6[1];
  *(int *)(in_EAX + 0x25c) = (*(int *)(in_EAX + 0x25c) - uVar5) - (uint)(uVar2 < uVar4);
  puVar6 = (uint *)(iVar3 + 0x10);
  uVar2 = *puVar6;
  *puVar6 = *puVar6 + -uVar4;
  *(int *)(iVar3 + 0x14) =
       (*(int *)(iVar3 + 0x14) - (uVar5 + (uVar4 != 0))) + (uint)CARRY4(uVar2,-uVar4);
  lVar7 = __allmul(DAT_00f0b168,DAT_00f0b16c,uVar4,uVar5);
  lVar7 = lVar7 >> 0xf;
  puVar6 = (uint *)(unaff_EDI + 0x250);
  uVar2 = *puVar6;
  *puVar6 = *puVar6 - (uint)lVar7;
  *param_1 = lVar7;
  *(int *)(unaff_EDI + 0x254) =
       (*(int *)(unaff_EDI + 0x254) - (int)((ulonglong)lVar7 >> 0x20)) - (uint)(uVar2 < (uint)lVar7)
  ;
  if ((*(int *)(unaff_EDI + 0x254) < 1) && (*(int *)(unaff_EDI + 0x254) < 0)) {
    *(undefined4 *)(unaff_EDI + 0x250) = 0;
    *(undefined4 *)(unaff_EDI + 0x254) = 0;
  }
  return;
}

