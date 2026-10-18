// FUN_00a85910 @ 00a85910 body=[[00a85910, 00a85bd3]]


float10 FUN_00a85910(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  undefined4 *puStack_e4;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [4];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puStack_e4 = (undefined4 *)(in_ECX + 0x94);
  FUN_007eb4f0();
  local_90 = local_50;
  fStack_8c = fStack_4c;
  fStack_88 = fStack_48;
  fStack_84 = fStack_44;
  puStack_e4 = &local_90;
  local_80 = local_40;
  fStack_7c = fStack_3c;
  fStack_78 = fStack_38;
  fStack_74 = fStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  D3DXMatrixInverse(puStack_e4,0);
  fStack_b4 = fStack_8c * in_stack_00000014 + fStack_9c * in_stack_00000010 +
              fStack_7c * in_stack_00000018;
  fStack_b0 = fStack_88 * in_stack_00000014 + fStack_98 * in_stack_00000010 +
              fStack_78 * in_stack_00000018;
  puStack_e4 = DAT_00f092dc;
  uStack_a8 = uStack_6c;
  fStack_ac = fStack_84 * in_stack_00000014 + fStack_94 * in_stack_00000010 +
              fStack_74 * in_stack_00000018;
  uStack_a4 = uStack_68;
  uStack_a0 = uStack_64;
  puVar1 = *(undefined4 **)(in_ECX + 0x140);
  uStack_d4 = *puVar1;
  uStack_d0 = puVar1[1];
  uStack_cc = puVar1[2];
  uStack_c8 = puVar1[6];
  uStack_c4 = puVar1[7];
  uStack_c0 = puVar1[8];
  iVar2 = D3DXIntersectTri(&uStack_d4,&stack0xffffff20,&uStack_c8,&uStack_a8,&fStack_b4,auStack_b8,
                           auStack_bc,&puStack_e4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(in_ECX + 0x140);
    uStack_d4 = *(undefined4 *)(iVar2 + 0xc);
    uStack_d0 = *(undefined4 *)(iVar2 + 0x10);
    uStack_cc = *(undefined4 *)(iVar2 + 0x14);
    uStack_c8 = *(undefined4 *)(iVar2 + 0x24);
    uStack_c4 = *(undefined4 *)(iVar2 + 0x28);
    uStack_c0 = *(undefined4 *)(iVar2 + 0x2c);
    D3DXIntersectTri(&uStack_d4,&stack0xffffff20,&uStack_c8,&uStack_a8,&fStack_b4,auStack_b8,
                     auStack_bc,&puStack_e4);
  }
  return (float10)(float)puStack_e4;
}

