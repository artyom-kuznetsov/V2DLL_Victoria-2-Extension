// FUN_00816d50 @ 00816d50 body=[[00816d50, 00817075]]


void FUN_00816d50(int param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_ec;
  undefined1 *puStack_e8;
  int *piStack_e4;
  undefined4 uStack_e0;
  undefined4 *puStack_dc;
  int aiStack_c8 [4];
  undefined4 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [12];
  undefined4 auStack_88 [10];
  undefined1 auStack_60 [24];
  undefined4 auStack_48 [17];
  
  if ((char)in_ECX[0x53] == '\0') {
    puStack_dc = param_3;
    uStack_e0 = 0x100;
    piStack_e4 = param_2;
    puStack_e8 = (undefined1 *)0x816e69;
    (**(code **)(*param_2 + 0xb0))();
  }
  else {
    iVar5 = *(int *)(param_1 + 0x6bc88);
    puStack_dc = (undefined4 *)0x816d89;
    puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar5 + 0x1c) + 0x16c))();
    puVar6 = auStack_88;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    puStack_dc = (undefined4 *)0x816da4;
    puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar5 + 0x1c) + 0x174))();
    puVar6 = auStack_48;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    puStack_dc = auStack_88;
    uStack_e0 = 0;
    piStack_e4 = aiStack_c8;
    puStack_e8 = (undefined1 *)0x816dc6;
    D3DXMatrixInverse();
    uStack_a4 = param_3[0xc];
    uStack_a0 = param_3[0xd];
    uStack_9c = param_3[0xe];
    puStack_e8 = auStack_94;
    uStack_ec = 2;
    uStack_98 = DAT_00f092fc;
    aiStack_c8[0] = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    (**(code **)(*param_2 + 0xb0))(param_2);
    in_ECX = param_2;
    (**(code **)(*param_2 + 0xb0))(param_2,3,auStack_60);
    (**(code **)(*param_2 + 0xb0))(param_2,0x100,&uStack_ec);
  }
  (**(code **)(*param_2 + 0x10c))(param_2,0,1,2);
  (**(code **)(*param_2 + 0x10c))(param_2,0,4,3);
  if (0 < *(int *)(*(int *)(param_1 + 0x6bc48) + 0x48)) {
    (**(code **)(*param_2 + 0x114))(param_2,0,5,2);
    (**(code **)(*param_2 + 0x114))
              (param_2,0,10,*(undefined4 *)(*(int *)(param_1 + 0x6bc48) + 0x48));
    (**(code **)(*param_2 + 0x114))(param_2,0,6,3);
  }
  (**(code **)(*param_2 + 0xe4))(param_2,0x1b,0);
  (**(code **)(*param_2 + 0x164))(param_2,0x202);
  if ((((char)in_ECX[0x53] != '\0') && (*(short *)((int)in_ECX + 0x4e) == 2)) &&
     (in_ECX[0x54] != -1)) {
    (**(code **)(*param_2 + 0xe4))(param_2,0xf,1);
    uVar1 = in_ECX[0x54];
    if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar1 * 0x2c + 0x15c + in_ECX[0x4f]);
    }
    (**(code **)(*param_2 + 0x104))(param_2,1,uVar3);
    (**(code **)(*param_2 + 0x10c))(param_2,1,1,3);
    (**(code **)(*param_2 + 0x10c))(param_2,1,4,4);
  }
  (**(code **)(*param_2 + 0x104))(param_2,0,*(undefined4 *)in_ECX[0x50]);
  if ((char)in_ECX[0x53] != '\0') {
    (**(code **)(*param_2 + 0x14c))(param_2,6,2,in_ECX + 0x71,0x1c);
  }
  (**(code **)(*param_2 + 0x14c))(param_2,6,2,in_ECX + 0x55,0x1c);
  (**(code **)(*param_2 + 0x104))(param_2,0,0);
  (**(code **)(*param_2 + 0x104))(param_2,1,0);
  (**(code **)(*param_2 + 0x10c))(param_2,0,1,4);
  (**(code **)(*param_2 + 0x10c))(param_2,0,4,4);
  if ((((char)in_ECX[0x53] != '\0') && (*(short *)((int)in_ECX + 0x4e) == 2)) &&
     (in_ECX[0x54] != -1)) {
    (**(code **)(*param_2 + 0x10c))(param_2,1,1,1);
    (**(code **)(*param_2 + 0x10c))(param_2,1,4,1);
  }
  (**(code **)(*param_2 + 0xe4))(param_2,0x1b,0);
  (**(code **)(*param_2 + 0x114))(param_2,0,6,2);
  (**(code **)(*param_2 + 0x114))(param_2,0,5,2);
  return;
}

