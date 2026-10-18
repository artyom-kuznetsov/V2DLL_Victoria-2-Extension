// FUN_00b1bc10 @ 00b1bc10 body=[[00b1bc10, 00b1bc99]]


undefined4 FUN_00b1bc10(int *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int *in_ECX;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_4;
  
  local_4 = in_ECX;
  FUN_00b1b4f0();
  uVar4 = 0;
  do {
    (**(code **)(*param_1 + 8))(&local_4,4);
    uVar1 = CONCAT11((undefined1)local_4,local_4._1_1_);
    local_4 = (int *)CONCAT22(uVar1,CONCAT11(local_4._2_1_,local_4._3_1_));
    *(int **)(uVar4 + *in_ECX) = local_4;
    uVar4 = uVar4 + 0x10;
  } while (uVar4 < 0x1020);
  puVar3 = (uint *)*in_ECX;
  uVar4 = 0;
  uVar5 = 0xffff;
  uVar2 = 0;
  do {
    if (uVar4 < *puVar3) {
      uVar5 = uVar2 & 0xffff;
      uVar4 = *puVar3;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 4;
  } while (uVar2 < 0x100);
  *(short *)((int)in_ECX + 0x22) = (short)uVar5;
  FUN_00b1b5e0();
  return 1;
}

