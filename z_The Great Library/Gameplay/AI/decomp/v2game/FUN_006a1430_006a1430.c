// FUN_006a1430 @ 006a1430 body=[[006a1430, 006a15af]]


void FUN_006a1430(char param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  if (param_1 != '\0') {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x4c) + 0xb0c);
    FUN_00424810(0xffffffdc);
    FUN_00424810((int)(((float)(param_2 + 1) * 36.0) / (float)(int)param_3));
    *param_4 = 0xe;
    param_4[0x17] = uVar1;
    return;
  }
  uStack_1c = 0;
  local_20 = 0;
  iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x4c) + 0xbcc) + 0x330);
  while (iVar2 = iVar3, iVar2 != 0) {
    iVar6 = 0;
    iVar3 = *(int *)(iVar2 + 0x5c);
    if (0 < DAT_012587f4) {
      do {
        if (*(char *)(*(int *)(*(int *)(in_ECX + 0x34) * 0x58 + 0x48 + *(int *)(in_ECX + 0x3c)) +
                     iVar6) != '\0') {
          uVar5 = (uint)*(byte *)(iVar6 + 8 + iVar2);
          local_10 = *(uint *)(*(int *)(iVar2 + 0x48) + uVar5 * 8);
          local_c = *(int *)(*(int *)(iVar2 + 0x48) + 4 + uVar5 * 8);
          local_18 = local_20;
          local_14 = uStack_1c;
          if (((int)uStack_1c < local_c) || (((int)uStack_1c <= local_c && (local_20 <= local_10))))
          {
            puVar4 = &local_10;
          }
          else {
            puVar4 = &local_18;
          }
          local_20 = *puVar4;
          uStack_1c = puVar4[1];
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_012587f4);
    }
  }
  *param_4 = 9;
  uVar7 = __alldiv(local_20 << 0xf,uStack_1c << 0xf | local_20 >> 0x11,param_3 << 0xf,
                   ((int)param_3 >> 0x1f) << 0xf | param_3 >> 0x11);
  uVar5 = param_2 + 1;
  lVar8 = __allmul(uVar7,uVar5 * 0x8000,((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11);
  *(longlong *)(param_4 + 0x14) = lVar8 >> 0xf;
  return;
}

