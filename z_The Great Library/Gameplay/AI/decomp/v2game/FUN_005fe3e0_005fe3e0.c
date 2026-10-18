// FUN_005fe3e0 @ 005fe3e0 body=[[005fe3e0, 005fe463] [005fe467, 005fe591]]


uint * FUN_005fe3e0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int in_ECX;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_48;
  uint uStack_40;
  uint uStack_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(in_ECX + 0x20) != 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("money_slider",0xc);
    local_c = 0;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x4c))(local_34);
    local_c = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (iVar1 != 0) {
      fVar6 = (float10)(**(code **)(*(int *)(iVar1 + 0x54) + 0x10))();
      if ((float)(fVar6 / (float10)100.0) < 0.0) {
        uStack_48 = 0xbfe0000000000000;
      }
      else {
        uStack_48 = 0x3fe0000000000000;
      }
      uVar7 = FUN_00b31c36();
      uStack_3c = (uint)((ulonglong)uVar7 >> 0x20);
      uVar8 = FUN_00b31c36();
      uVar7 = __allmul(*(uint *)(in_ECX + 0xa0) - (uint)uVar8,
                       (*(int *)(in_ECX + 0xa4) - (int)((ulonglong)uVar8 >> 0x20)) -
                       (uint)(*(uint *)(in_ECX + 0xa0) < (uint)uVar8),(int)uVar7,uStack_3c);
      uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
      uVar2 = (uint)uVar7 >> 0x1e | uVar4 << 2;
      bVar5 = DAT_012586f2 == '\0';
      *param_1 = uVar2 << 0xf;
      iVar1 = *(int *)(DAT_012588e8 + 0xb60);
      param_1[1] = ((int)uVar2 >> 0x1f) << 0xf | (uVar4 & 0x3fffffff) >> 0xf;
      iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4);
      if (bVar5) {
        puVar3 = (uint *)(iVar1 + 0xe78);
      }
      else {
        puVar3 = (uint *)(iVar1 + 0xe80);
      }
      uStack_3c = puVar3[1];
      uStack_40 = *puVar3;
      uStack_48 = *(undefined8 *)param_1;
      if (((int)uStack_3c < (int)param_1[1]) ||
         (((int)uStack_3c <= (int)param_1[1] && (*puVar3 <= *param_1)))) {
        puVar3 = &uStack_40;
      }
      else {
        puVar3 = (uint *)&uStack_48;
      }
      uVar2 = puVar3[1];
      *param_1 = *puVar3;
      param_1[1] = uVar2;
    }
  }
  ExceptionList = local_14;
  return param_1;
}

