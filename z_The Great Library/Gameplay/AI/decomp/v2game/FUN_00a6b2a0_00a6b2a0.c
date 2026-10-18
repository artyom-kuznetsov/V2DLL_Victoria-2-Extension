// FUN_00a6b2a0 @ 00a6b2a0 body=[[00a6b2a0, 00a6b386]]


bool FUN_00a6b2a0(uint *param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 uVar4;
  uint in_EAX;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  puVar3 = param_1;
  puVar1 = param_1 + 1;
  uVar8 = in_EAX & 0xfffffff8;
  if (param_1[1] != uVar8) {
    FUN_00a6b650(puVar1);
  }
  if (param_1[3] == uVar8) {
    FUN_00a6b690(param_1 + 3);
  }
  uVar2 = *param_1;
  uVar6 = *(int *)(param_3[1] + 0x100) - 1;
  uVar5 = in_EAX >> 3 & uVar6;
  puVar7 = (uint *)((uVar5 != uVar6) - 1 & uVar2);
  param_1._3_1_ = (*(uint *)(uVar2 + 4) & 1 << ((byte)uVar5 & 0x1f)) == 0;
  if (param_1._3_1_) {
    LOCK();
    *(int *)(param_3[1] + 0x108) = *(int *)(param_3[1] + 0x108) + -1;
    UNLOCK();
  }
  else {
    *param_2 = *(undefined4 *)(uVar2 + 8 + uVar5 * 4);
  }
  param_1._3_1_ = !param_1._3_1_;
  if ((uint *)0x1 < puVar7) {
    uVar4 = FUN_009c12d0();
    uVar2 = *puVar7;
    *puVar3 = uVar2;
    if (uVar2 < 2) {
      puVar3[2] = 0;
    }
    if (puVar3 + 4 != (uint *)0x0) {
      *(undefined1 *)(puVar3 + 4) = uVar4;
    }
  }
  *puVar1 = uVar8 + 8;
  if ((uint *)0x1 < puVar7) {
    (**(code **)(*param_3 + 8))(puVar7);
  }
  return param_1._3_1_;
}

