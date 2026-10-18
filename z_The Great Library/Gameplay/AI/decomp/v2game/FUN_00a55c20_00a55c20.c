// FUN_00a55c20 @ 00a55c20 body=[[00a55c20, 00a56057]]


void FUN_00a55c20(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_130 [64];
  undefined4 local_f0 [16];
  undefined1 local_b0 [64];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  
  piVar2 = (int *)0x0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x58) + 0x6bd00) + -4 +
                      *(int *)(param_1 + 0x11c) * 4);
  }
  *(int **)(param_1 + 0xf8) = piVar2;
  uVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,0,"WorldViewProjectionMatrix");
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  uVar3 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x24))
                    (*(int **)(param_1 + 0xf8),0,"CurrentState");
  *(undefined4 *)(param_1 + 0x100) = uVar3;
  uVar3 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x34))(*(int **)(param_1 + 0xf8),&DAT_00e19be0);
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  uVar3 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x24))
                    (*(int **)(param_1 + 0xf8),0,"vFirstColor");
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  uVar3 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x24))
                    (*(int **)(param_1 + 0xf8),0,"vSecondColor");
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  if ((*(int *)(param_1 + 0xe8) < 0) || (*(int *)(param_1 + 0xec) < 0)) {
    (**(code **)(**(int **)(param_1 + 0xf8) + 0xe8))
              (*(int **)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x104));
  }
  else {
    uVar3 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x34))
                      (*(int **)(param_1 + 0xf8),"ColorProgress");
    *(undefined4 *)(param_1 + 0x110) = uVar3;
    uVar3 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x24))
                      (*(int **)(param_1 + 0xf8),0,&DAT_00e0bce4);
    *(undefined4 *)(param_1 + 0x114) = uVar3;
    uVar3 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x24))
                      (*(int **)(param_1 + 0xf8),0,&DAT_00e19384);
    *(undefined4 *)(param_1 + 0x118) = uVar3;
    (**(code **)(**(int **)(param_1 + 0xf8) + 0xe8))
              (*(int **)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x110));
    uVar1 = *(uint *)(param_1 + 0xe8);
    if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar1 * 0x2c + 0x15c + *(int *)(param_1 + 0x58));
    }
    (**(code **)(**(int **)(param_1 + 0xf8) + 0xd0))
              (*(int **)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x114),uVar3);
    uVar1 = *(uint *)(param_1 + 0xec);
    if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar1 * 0x2c + 0x15c + *(int *)(param_1 + 0x58));
    }
    (**(code **)(**(int **)(param_1 + 0xf8) + 0xd0))
              (*(int **)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x118),uVar3);
  }
  puVar5 = local_f0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_1c = *(undefined8 *)(param_2 + 0x6b9bc);
  local_34 = DAT_00f092fc;
  local_48 = DAT_00f092fc;
  local_5c = DAT_00f092fc;
  local_70 = DAT_00f092fc;
  D3DXMatrixOrthoRH(local_130,(float)*(int *)(param_2 + 0x6b9bc),(float)*(int *)(param_2 + 0x6b9c0),
                    0,DAT_00f092fc);
  D3DXMatrixMultiply(local_b0,local_f0,&local_70);
  D3DXMatrixMultiply(local_b0,local_b0,local_130);
  local_24 = *(undefined8 *)(param_5 + 8);
  local_1c = *(undefined8 *)(param_5 + 0x10);
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x88))
            (*(int **)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x108),&local_24);
  local_24 = *(undefined8 *)(param_6 + 8);
  local_1c = *(undefined8 *)(param_6 + 0x10);
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x88))
            (*(int **)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x10c),&local_24);
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x98))
            (*(int **)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),local_b0);
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x78))
            (*(int **)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100),
             ((float)param_4 / 100.0) * *(float *)(param_1 + 0x178));
  local_14 = 0;
  (**(code **)(**(int **)(param_1 + 0xf8) + 0xfc))(*(int **)(param_1 + 0xf8),&local_14,0);
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x100))(*(int **)(param_1 + 0xf8),0);
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x104))(*(int **)(param_1 + 0xf8));
  (**(code **)(**(int **)(param_2 + 100) + 0x164))(*(int **)(param_2 + 100),0x102);
  (**(code **)(**(int **)(param_2 + 100) + 0x14c))
            (*(int **)(param_2 + 100),5,2,param_1 + 0x124,0x14);
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x104))(*(int **)(param_1 + 0xf8));
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x108))(*(int **)(param_1 + 0xf8));
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x10c))(*(int **)(param_1 + 0xf8));
  return;
}

