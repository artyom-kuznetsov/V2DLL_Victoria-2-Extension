// FUN_00559b40 @ 00559b40 body=[[00559b40, 00559ca3]]


void FUN_00559b40(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int *unaff_EDI;
  uint local_20 [4];
  undefined8 local_10;
  
  iVar1 = *unaff_EDI;
  iVar2 = *(int *)(iVar1 + 0xe88);
  iVar3 = *(int *)(*param_1 + 0xe88);
  if (iVar2 == 0) {
    local_10._0_4_ = 0;
    local_10._4_4_ = 0;
  }
  else {
    local_10._0_4_ = *(uint *)(iVar2 + 0x10);
    local_10._4_4_ = *(int *)(iVar2 + 0x14);
  }
  iVar2 = local_10._4_4_;
  uVar4 = (uint)local_10;
  local_20[3] = local_10._4_4_;
  if (iVar3 == 0) {
    local_10._0_4_ = 0;
    local_10._4_4_ = 0;
  }
  else {
    local_10._0_4_ = *(uint *)(iVar3 + 0x10);
    local_10._4_4_ = *(int *)(iVar3 + 0x14);
  }
  if ((local_10._4_4_ <= iVar2) && ((local_10._4_4_ < iVar2 || ((uint)local_10 < uVar4)))) {
    *unaff_EDI = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = *param_2;
  iVar2 = *(int *)(iVar1 + 0xe88);
  iVar3 = *(int *)(*unaff_EDI + 0xe88);
  if (iVar2 == 0) {
    local_20[2] = 0;
    local_20[3] = 0;
    puVar5 = local_20 + 2;
  }
  else {
    local_10 = *(undefined8 *)(iVar2 + 0x10);
    puVar5 = (uint *)&local_10;
  }
  local_20[1] = puVar5[1];
  if (iVar3 == 0) {
    local_20[2] = 0;
    local_20[3] = 0;
    puVar6 = local_20 + 2;
  }
  else {
    local_10 = *(undefined8 *)(iVar3 + 0x10);
    puVar6 = (uint *)&local_10;
  }
  if (((int)puVar6[1] <= (int)local_20[1]) &&
     (((int)puVar6[1] < (int)local_20[1] || (*puVar6 < *puVar5)))) {
    *param_2 = *unaff_EDI;
    *unaff_EDI = iVar1;
  }
  iVar1 = *unaff_EDI;
  iVar2 = *(int *)(iVar1 + 0xe88);
  iVar3 = *(int *)(*param_1 + 0xe88);
  if (iVar2 == 0) {
    local_20[0] = 0;
    local_20[1] = 0;
    puVar5 = local_20;
  }
  else {
    local_10 = *(undefined8 *)(iVar2 + 0x10);
    puVar5 = (uint *)&local_10;
  }
  uVar4 = puVar5[1];
  local_20[3] = uVar4;
  if (iVar3 == 0) {
    local_20[0] = 0;
    local_20[1] = 0;
    puVar6 = local_20;
  }
  else {
    local_10 = *(undefined8 *)(iVar3 + 0x10);
    puVar6 = (uint *)&local_10;
  }
  if (((int)puVar6[1] <= (int)uVar4) && (((int)puVar6[1] < (int)uVar4 || (*puVar6 < *puVar5)))) {
    *unaff_EDI = *param_1;
    *param_1 = iVar1;
  }
  return;
}

