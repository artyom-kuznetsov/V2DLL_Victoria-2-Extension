// FUN_00511670 @ 00511670 body=[[00511670, 005117a7]]


void FUN_00511670(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_b4 [24];
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined1 auStack_94 [4];
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  uint local_78;
  int local_74;
  undefined1 local_64 [60];
  int local_28;
  uint local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9eb40;
  local_10 = ExceptionList;
  local_74 = param_1 + 0x1184;
  local_78 = param_1;
  piStack_7c = param_2;
  uStack_80 = 0x5116aa;
  ExceptionList = &local_10;
  FUN_004da790();
  local_78 = local_20;
  local_74 = local_1c;
  piStack_7c = (int *)0x4;
  uStack_80 = 0x5116cc;
  FUN_00525770();
  local_28 = param_3[0x4a];
  iStack_8c = *(int *)(*(int *)(DAT_012587e4 + 4) + param_3[0x4b] * 4);
  if ((*(int *)(DAT_012588e8 + 0xb60) == *(int *)(iStack_8c + 0x20)) &&
     (*(int *)(param_1 + 0x20) != *(int *)(iStack_8c + 0x20))) {
    puStack_98 = auStack_94;
    local_78 = local_20;
    local_74 = local_1c;
    uStack_9c = 0x511726;
    (**(code **)(*param_3 + 0x1c))();
    puVar6 = auStack_b4;
    local_8 = 0;
    (**(code **)(*param_2 + 0x18))(auStack_b4);
    local_8 = 0xffffffff;
    uStack_84 = FUN_004f6370(local_64,puVar6);
    iStack_88 = param_1 + 0x1c;
    local_8 = 1;
    uStack_90 = 0x511762;
    FUN_0053faa0();
    piStack_7c = (int *)0x51176a;
    FUN_0047aa50();
    ExceptionList = local_10;
    return;
  }
  iVar4 = *(int *)(param_1 + 0x20);
  iVar5 = *(int *)(iStack_8c + 0x1580);
  puVar2 = (uint *)(iVar5 + iVar4 * 8);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + local_20;
  piVar1 = (int *)(iVar5 + iVar4 * 8 + 4);
  *piVar1 = *piVar1 + local_1c + (uint)CARRY4(uVar3,local_20);
  ExceptionList = local_10;
  return;
}

