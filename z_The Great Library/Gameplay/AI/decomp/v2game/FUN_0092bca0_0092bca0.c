// FUN_0092bca0 @ 0092bca0 body=[[0092bca0, 0092bcce] [0092bcd0, 0092bd56]]


void FUN_0092bca0(undefined4 param_1)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  int iVar2;
  undefined **local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  int local_c;
  
  local_c = in_EAX - in_ECX >> 6;
  iVar1 = local_c - (in_EAX - in_ECX >> 0x1f) >> 1;
  if (0 < iVar1) {
    iVar2 = iVar1 * 0x40 + 0xc + in_ECX;
    do {
      local_48 = *(undefined4 *)(iVar2 + -0x44);
      local_44 = *(undefined4 *)(iVar2 + -0x40);
      local_40 = *(undefined4 *)(iVar2 + -0x3c);
      local_3c = *(undefined4 *)(iVar2 + -0x38);
      local_38 = *(undefined4 *)(iVar2 + -0x34);
      local_34 = *(undefined4 *)(iVar2 + -0x30);
      local_30 = *(undefined4 *)(iVar2 + -0x2c);
      local_2c = *(undefined4 *)(iVar2 + -0x28);
      local_28 = *(undefined4 *)(iVar2 + -0x24);
      local_24 = *(undefined4 *)(iVar2 + -0x20);
      local_20 = *(undefined4 *)(iVar2 + -0x1c);
      local_1c = *(undefined4 *)(iVar2 + -0x18);
      local_18 = *(undefined1 *)(iVar2 + -0x14);
      local_14 = *(undefined4 *)(iVar2 + -0x10);
      iVar1 = iVar1 + -1;
      local_4c = 0x18d;
      local_50 = CWarGoal::vftable;
      FUN_0092c120(local_c,&local_50,param_1);
      iVar2 = iVar2 + -0x40;
    } while (0 < iVar1);
  }
  return;
}

