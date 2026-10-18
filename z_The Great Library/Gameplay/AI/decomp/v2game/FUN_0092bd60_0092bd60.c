// FUN_0092bd60 @ 0092bd60 body=[[0092bd60, 0092be7f]]


void FUN_0092bd60(undefined4 param_1)

{
  int in_EAX;
  int in_ECX;
  undefined4 *puVar1;
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
  
  if (0x40 < (int)(in_EAX - in_ECX & 0xffffffc0U)) {
    puVar1 = (undefined4 *)(in_EAX + -0x38);
    local_c = 0x38 - in_ECX;
    do {
      local_48 = *puVar1;
      local_40 = puVar1[2];
      local_44 = puVar1[1];
      local_3c = puVar1[3];
      local_38 = puVar1[4];
      local_34 = puVar1[5];
      local_30 = puVar1[6];
      local_2c = puVar1[7];
      local_28 = puVar1[8];
      local_24 = puVar1[9];
      local_20 = puVar1[10];
      local_1c = puVar1[0xb];
      local_18 = *(undefined1 *)(puVar1 + 0xc);
      local_14 = puVar1[0xd];
      puVar1[-1] = *(undefined4 *)(in_ECX + 4);
      *puVar1 = *(undefined4 *)(in_ECX + 8);
      puVar1[1] = *(undefined4 *)(in_ECX + 0xc);
      puVar1[2] = *(undefined4 *)(in_ECX + 0x10);
      puVar1[3] = *(undefined4 *)(in_ECX + 0x14);
      puVar1[4] = *(undefined4 *)(in_ECX + 0x18);
      puVar1[5] = *(undefined4 *)(in_ECX + 0x1c);
      puVar1[6] = *(undefined4 *)(in_ECX + 0x20);
      puVar1[7] = *(undefined4 *)(in_ECX + 0x24);
      puVar1[8] = *(undefined4 *)(in_ECX + 0x28);
      puVar1[9] = *(undefined4 *)(in_ECX + 0x2c);
      puVar1[10] = *(undefined4 *)(in_ECX + 0x30);
      puVar1[0xb] = *(undefined4 *)(in_ECX + 0x34);
      *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(in_ECX + 0x38);
      puVar1[0xd] = *(undefined4 *)(in_ECX + 0x3c);
      local_4c = 0x18d;
      local_50 = CWarGoal::vftable;
      FUN_0092c120((-8 - in_ECX) + (int)puVar1 >> 6,&local_50,param_1);
      puVar1 = puVar1 + -0x10;
    } while (0x40 < (int)(local_c + (int)puVar1 & 0xffffffc0U));
  }
  return;
}

