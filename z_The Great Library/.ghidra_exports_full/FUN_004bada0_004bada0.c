// FUN_004bada0 @ 004bada0 body=[[004bada0, 004baf33]]


void FUN_004bada0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_c;
  
  if ((DAT_013f1ce0 & 1) == 0) {
    DAT_013f1ce0 = DAT_013f1ce0 | 1;
    DAT_013f1cdc = DAT_012586dc;
  }
  if ((DAT_013f1ce0 & 2) == 0) {
    DAT_013f1cd8 = *(int *)(*(int *)(DAT_013f1cdc + 0x40) + 0x30);
    DAT_013f1ce0 = DAT_013f1ce0 | 2;
  }
  if ((DAT_013f1ce0 & 4) == 0) {
    DAT_013f1ce0 = DAT_013f1ce0 | 4;
    DAT_013f1cd4 = *(int *)(*(int *)(DAT_013f1cdc + 0x40) + 0x34) - DAT_013f1cd8;
  }
  if ((DAT_013f1ce0 & 8) == 0) {
    DAT_013f1cd0 = *(int *)(*(int *)(DAT_013f1cdc + 0x40) + 0x38);
    DAT_013f1ce0 = DAT_013f1ce0 | 8;
  }
  iVar5 = DAT_013f1cd0;
  if ((DAT_013f1ce0 & 0x10) == 0) {
    DAT_013f1ce0 = DAT_013f1ce0 | 0x10;
    DAT_013f1ccc = 1000 - DAT_013f1cd0;
  }
  iVar1 = DAT_013f1ccc;
  local_c = CONCAT44(local_c._4_4_,*(undefined4 *)(param_1 + 0x128));
  iVar6 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 300) * 4) + 0x1234);
  if (*(int *)(iVar6 + 4) == 0) {
    local_c = 0;
    local_c._4_4_ = 0;
    local_c._0_4_ = 0;
    uVar2 = local_c._4_4_;
    uVar7 = (undefined4)local_c;
  }
  else {
    iVar6 = *(int *)(iVar6 + 4);
    uVar2 = *(undefined4 *)(iVar6 + 0x14);
    uVar7 = *(undefined4 *)(iVar6 + 0x10);
  }
  uVar8 = __allmul(uVar7,uVar2,0x1f40000,0);
  uVar9 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x188) + 0xc0),
                   *(undefined4 *)(*(int *)(param_1 + 0x188) + 0xc4),0x1f40000,0);
  uVar3 = (uint)uVar9 >> 0x1e | (int)((ulonglong)uVar9 >> 0x20) << 2;
  local_c = CONCAT44(uVar3,(undefined4)local_c);
  param_1 = 1000;
  piVar4 = &param_1;
  if ((int)uVar3 < 0x3e9) {
    piVar4 = (int *)((int)&local_c + 4);
  }
  iVar5 = __alldiv((longlong)*piVar4 * (longlong)iVar5,1000,0);
  iVar6 = __alldiv((longlong)iVar1 *
                   (longlong)(int)((uint)uVar8 >> 0x1e | (int)((ulonglong)uVar8 >> 0x20) << 2),1000,
                   0);
  iVar5 = __alldiv((longlong)(iVar6 + iVar5) * (longlong)DAT_013f1cd4,1000,0);
  *param_2 = iVar5 + DAT_013f1cd8;
  return;
}

